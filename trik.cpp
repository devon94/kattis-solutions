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
    
    
    int x = 1,y,z;
    string str;
    while (getline(cin,str)) {
        for (auto c : str) {
            if (c == 'A') {
                if(x == 1)
                    x = 2;
                else if(x == 2)
                    x = 1;
            }
            if (c == 'B') {
                if(x == 2)
                    x = 3;
                else if(x == 3)
                    x = 2;
            }
            if (c == 'C') {
                if(x == 1)
                    x = 3;
                else if(x == 3)
                    x = 1;
            }
        }
        cout << x << endl;
    }
    return 0;
}