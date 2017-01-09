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
    
    int x,y,z,idx = 1;
    
    cin >> x;
    
    while (x--)
    {
        string temp;
        vector<string> rows;
        
        cin >> y >> z;
        cout << "Test " << idx << endl;
        
        while (y--)
        {
            cin >> temp;
            rows.push_back(temp);
        }
        for(int i = rows.size() - 1; i >= 0; i--)
        {
            for(int j = rows[i].size() - 1; j >= 0; j--)
            {
                cout << rows[i].at(j);
            }
            cout << endl;
        }
        idx++;
    }
    
    return 0;
}
