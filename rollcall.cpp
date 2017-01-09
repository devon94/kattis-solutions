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
    map< string,vector<string> > lastnames;
    map<string, int> firstnames;
    while (getline(cin,str)) {
        vector<string> temp = split(str, ' ');
        firstnames[temp[0]] += 1;
        lastnames[temp[1]].push_back(temp[0]);
    }
    for(auto kv : lastnames){
        sort(kv.second.begin(), kv.second.end());
        for (auto name : kv.second) {
            if (firstnames[name] > 1) {
                cout << name << " " << kv.first << endl;

            }else{
                cout << name << endl;
            }
        }
    }
    
    return 0;
}