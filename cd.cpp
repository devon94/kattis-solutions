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
    


    long x,y,z;
    while (true) {
        set<long> s1;
        set<long> s2;
        set<long> result;
        cin >> x >> y;
        if(x == 0 && y == 0){
            break;
        }
        
        while (x > 0) {
            cin >> z;
            s1.insert(z);
            x--;
        }
        while (y > 0) {
            cin >> z;
            s2.insert(z);
            y--;
        }
        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));
        cout << result.size() << endl;
    }
}