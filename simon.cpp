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

vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    int x,y,z;
    string str;
    getline(cin,str);
    stringstream sstr(str);
    sstr >> x;
    
    while (x > 0) {
        getline(cin,str);
        if (str.length() >= 11 && str.substr(0,5) == "simon" && str.substr(6,4) == "says") {
            str.erase (str.begin(), str.begin()+11);
            cout << str << endl;
        }else{
            cout << endl;
        }
        x--;
    }

    
    return 0;
}