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

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    int u = 0,v = 0,x,y,z;
    cin >> x >> y >> z;
    
    while(x >= z){
        if(x%y == 0){
            break;
        }
        x = x - z;
        v++;
    }
    
    while(x >= y){
        x = x - y;
        u++;
    }

    if(x > 0){
        cout << "Impossible" << endl;
    }else{
        cout << u << " " << v << endl;
    }
    
    return 0;
}