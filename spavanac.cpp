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
    
    int x,y,z;
    cin >> x >> y;
    if (y >= 45) {
        cout << x << " " << y - 45 << endl;
    } else {
        y = y + 15;
        if (x == 0) {
            cout <<  23 << " "  <<  y << endl;
        }else{
            cout <<  x - 1 << " "  <<  y << endl;
        }
    }
    return 0;
}