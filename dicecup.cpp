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
    map<int, int> frequencies;
    vector<int> max_nums;
    
    cin >> x;
    cin >> y;
    z = 0;
    
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            frequencies[(i+j)]++;
        }

    }

    for(auto kv: frequencies)
    {
        if (kv.second > z) {
            z = kv.second;
        }
    }
    
    for(auto kv: frequencies)
    {
        if (kv.second == z) {
            max_nums.push_back(kv.first);
        }
    }
    
    for(auto n : max_nums)
    {
        cout << n << endl;
    }

    return 0;
}