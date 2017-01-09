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
    
    int a,b,c,w,x,y,z;
    cin >> w;
    x = 0;
    while (x < w) {
        unordered_map<int, int> odds;
        z = 0;
        cin >> y;
        while (z < y) {
            cin >> a;
            odds[a]++;
            z++;
        }
        cout << "Case #" << x + 1 << ": ";
        for(auto a : odds){
            if (a.second == 1) {
                cout << a.first << endl;
            }
        }
        x++;
    }
    return 0;
}