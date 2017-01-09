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
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));

    int x,y,z;
    string str;
    getline(cin, str);
    
    x = str.length();
    
    for (int i = 0; i < str.length(); i+=3) {
        if (str[i] == 'P') {
            x--;
        }
        if (str[i + 1] == 'E') {
            x--;
        }
        if (str[i + 2] == 'R') {
            x--;
        }
    }
    cout << x << endl;
    
}
