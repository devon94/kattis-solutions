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
    cin >> x;
    cin >> y;
    vector<int> breaks;
    breaks.reserve(100000);
    while (x > 0) {
        cin >> z;
        breaks.push_back(z-y);
        x--;
    }
    int _max = 0, current = 0;
    for (int i = 0; i < breaks.size(); i++) {
        current = max(0, current + breaks[i]);
        _max = max(current, _max);
    }
    cout << _max << endl;
}
