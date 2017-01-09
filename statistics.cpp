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
    
    int x,y,z,idx = 1;
    
    while (cin >> x)
    {
        int min = INT_MAX;
        int max = INT_MIN;
        
        while (x--)
        {
            cin >> y;
            if(y < min)
            {
                min = y;
            }
            if (y > max)
            {
                max = y;
            }
        }
        cout << "Case " << idx++ << ": " << min << " " << max << " " << (max - min) << endl;
    }
    
    return 0;
}
