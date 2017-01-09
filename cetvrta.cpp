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
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));

    int x,y,z;
    x = 3;
    
    map<int, int> intsx;
    map<int, int> intsy;
    
    while (x > 0) {
        cin >> y >> z;
        intsx[y] += 1;
        intsy[z] += 1;
        x--;
    }
    
    for(auto kv : intsx){
        if (kv.second == 1) {
            cout << kv.first << " ";
        }
    }
    for(auto kv : intsy){
        if (kv.second == 1) {
            cout << kv.first << endl;
        }
    }
    
}
