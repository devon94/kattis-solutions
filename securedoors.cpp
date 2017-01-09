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

int match(string substring, string fullstring) {
    int count = 0;
    for (int i = 0; i < fullstring.length(); i++) {
        bool found = true;
        for (int j = 0; j < substring.length()  && found; j++){
            if (i + j > fullstring.length() || substring[j] != fullstring[i + j]){
                found = false;
            }
        }
        if (found) {
            
            count++;
            //            cout << substring <<" found at index " << i << " in " << fullstring<<"\n";
        }
        
    }
    return count;
}

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
    unordered_map<string, bool> entered;
    getline(cin, str);
    stringstream sstr(str);
    sstr >> x;
    
    while (x > 0) {
        getline(cin, str);
        vector<string> spl = split(str, ' ');
        if (spl[0] == "entry" && entered[spl[1]]) {
            cout <<  spl[1] << " entered (ANOMALY)\n";
        }
        if (spl[0] == "entry" && !entered[spl[1]]) {
            cout << spl[1] << " entered\n";
            entered[spl[1]]= true;
        }
        if (spl[0] == "exit" && !entered[spl[1]]) {
            cout <<  spl[1] << " exited (ANOMALY)\n";
        }
        if (spl[0] == "exit" && entered[spl[1]]) {
            cout <<  spl[1] << " exited\n";
            entered[spl[1]]= false;
        }
        x--;
    }
    return 0;
}