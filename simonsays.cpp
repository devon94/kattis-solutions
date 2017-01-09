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
    string str, simon = "Simon says ";
    getline(cin, str);
    stringstream sstr(str);
    sstr >> x;
    while(x > 0){
        getline(cin, str);
        size_t found = str.find(simon);
        if (found != string::npos){
            cout << str.substr(found+simon.length(), str.length()) << "\n";
        }
        x--;
    }
    return 0;
}