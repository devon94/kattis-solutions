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
    
    int x;
    string str, temp;
    vector<string> rows;
    map<string, int> words;
    
    getline(cin, str);
    temp = "";
    
    for (auto c : str)
    {
        switch (tolower(c)) {
            case 'a':
                temp += "@";
                break;
            case 'b':
                temp += "8";
                break;
            case 'c':
                temp += "(";
                break;
            case 'd':
                temp += "|)";
                break;
            case 'e':
                temp += "3";
                break;
            case 'f':
                temp += "#";
                break;
            case 'g':
                temp += "6";
                break;
            case 'h':
                temp += "[-]";
                break;
            case 'i':
                temp += "|";
                break;
            case 'j':
                temp += "_|";
                break;
            case 'k':
                temp += "|<";
                break;
            case 'l':
                temp += "1";
                break;
            case 'm':
                temp += "[]\\/[]";
                break;
            case 'n':
                temp += "[]\\[]";
                break;
            case 'o':
                temp += "0";
                break;
            case 'p':
                temp += "|D";
                break;
            case 'q':
                temp += "(,)";
                break;
            case 'r':
                temp += "|Z";
                break;
            case 's':
                temp += "$";
                break;
            case 't':
                temp += "']['";
                break;
            case 'u':
                temp += "|_|";
                break;
            case 'v':
                temp += "\\/";
                break;
            case 'w':
                temp += "\\/\\/";
                break;
            case 'x':
                temp += "}{";
                break;
            case 'y':
                temp += "`/";
                break;
            case 'z':
                temp += "2";
                break;
            default:
                temp += c;
                break;
        }
    }
    cout << temp << endl;
    
    return 0;
}
