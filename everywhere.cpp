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
    
    int x;
    string str;
    getline(cin, str);
    stringstream sstr0(str);
    sstr0 >> x;
    while (x > 0) {
        set<string> places;
        int y;
        getline(cin, str);
        stringstream sstr(str);
        sstr >> y;
        while(y > 0){
            getline(cin, str);
            places.insert(str);
            y--;
        }
        cout << places.size() << endl;
        x--;
    }
}
