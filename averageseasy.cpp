//
//  main.cpp
//  kattis
//
//  Created by Devon Deonarine
//  Copyright © 2016 Devon Deonarine. All rights reserved.
//
#include <stdio.h>
#include <string>
#include <math.h>
#include <iostream>
#include <sstream>
#include <float.h>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cctype>
#include <clocale>
#include <stdint.h>
#include <climits>


using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    double w,x,y,z;
    
    cin >> w;
    
    while (w--)
    {
        vector<double> vec;
        double cs_avg = 0, ec_avg = 0;

        cin >> x >> y;
        
        for (int i = 0; i < x; i++)
        {
            cin >> z;
            vec.push_back(z);
            cs_avg += z/x;
        }
        
        for (int i = 0; i < y; i++)
        {
            cin >> z;
            ec_avg += z/y;
            
        }
        
        z = 0;
        for(auto d : vec)
        {
            if (d < cs_avg && d > ec_avg) {
                z++;
            }
        }
        
        cout << z << endl;
    }
    
    return 0;
}
