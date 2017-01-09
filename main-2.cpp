//
//  main.cpp
//  lab05
//
//  Created by Devon Deonarine on 2016-03-11.
//  Copyright © 2016 Devon Deonarine. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <math.h>
#include <iostream>
#include <sstream>
#include <float.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Point
{
    double x, y;
};

struct xSort{
    bool operator()( const Point& lx, const Point& rx ) const {
        return lx.x < rx.x;
    }
};

struct ySort{
    bool operator()( const Point& lx, const Point& rx ) const {
        return lx.y < rx.y;
    }
};

double distance(Point p1, Point p2){
    return sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
}

vector<Point> minPoints(vector<Point> v1, vector<Point> v2){
    if (distance(v1[0],v1[1]) <= distance(v2[0],v2[1])) {
        return v1;
    }
    else{
        return v2;
    }
    return v1;
}


vector<Point> closestPairBrute(vector<Point> P){
    Point p1;
    Point p2;
    vector<Point> temp;
    temp.reserve(2);
    
    double min = DBL_MAX;
    double dist;
    
    for (int i = 0; i < P.size() - 1; i++){
        for (int j = i + 1; j < P.size(); j++){
            dist = distance(P[i], P[j]);
            if (dist < min){
                min = dist;
                
                p1 = P[i];
                p2 = P[j];
            }
        }
    }
    

    temp.push_back(p1);
    temp.push_back(p2);
    return temp;
}

vector<Point> getClosestPair(vector<Point> Px,vector<Point> Py){
    if (Px.size() == 2) {
        return Px;
    }
    if (Px.size() <= 3) {
        return closestPairBrute(Px);
    }
    
    int midPoint = (int)(Px.size()/2);
    double middle = Px[midPoint-1].x;
    
    vector<Point> Pxl(Px.begin(), Px.begin() + midPoint);
    vector<Point> Pxr(Px.begin() + midPoint, Px.end());
    
    vector<Point> Pyl;
    vector<Point> Pyr;
    
    Pyl.reserve(midPoint+1);
    Pyr.reserve(midPoint+1);

    for (auto x : Py) {
        if (x.x <= middle) {
            Pyl.push_back(x);
        }else{
            Pyr.push_back(x);
        }
    }
    
    
    vector<Point> dl = getClosestPair(Pxl, Pyl);
    vector<Point> dr = getClosestPair(Pxr, Pyr);
    
    vector<Point> d = minPoints(dl,dr);
    
    double dmin = distance(d[0],d[1]);
    
    Point yStrip[Py.size()];
    int c = 0;
    for (auto x : Py) {
        if (abs((int)(middle - x.x)) < dmin) {
            yStrip[c] = x;
            c++;
        }
    }
    
    
    for (int i = 0; i < c - 1 ; i++) {
        int k = i + 1;
        while (k < c && (yStrip[k].y - yStrip[i].y) < dmin) {
            double tmp = (distance(yStrip[k],yStrip[i]));
            if (tmp < dmin) {
                dmin = tmp;
                d[0] = yStrip[i];
                d[1] = yStrip[k];
            }
            k++;
        }
    }
    return d;
}


int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    char buffer[1048576];
    std::cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    bool read = true;
    while (read) {
        int i;
        string str;
        getline(cin, str);
        istringstream sstr(str);
        
        sstr >> i;
        
        if (i == 0) {
            break;
        }
        
        vector<Point> pointsX;
        pointsX.reserve(i);

        for (int j = 0;  j < i; j++) {
            Point temp;
            getline(cin, str);
            sstr.clear();
            sstr.str(str);
            string tempNum;
            sstr >> tempNum;
            temp.x = stod(tempNum.c_str());
            sstr >> tempNum;
            temp.y = stod(tempNum.c_str());
            pointsX.push_back(temp);
            
        }
        
        vector<Point> pointsY = pointsX;
        
        sort(pointsX.begin(), pointsX.end(), xSort());
        sort(pointsY.begin(), pointsY.end(), ySort());
        
        vector<Point> final = getClosestPair(pointsX,pointsY);
        printf("%f %f %f %f\n",final[0].x, final[0].y, final[1].x, final[1].y);
    }
}