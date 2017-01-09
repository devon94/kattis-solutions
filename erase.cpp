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
    string a,b;
    
    cin >> x;
    cin >> a;
    cin >> b;
    
    if (x % 2 == 0)
    {
        if (a == b)
        {
            cout << "Deletion succeeded\n";
        }
        else
        {
            cout << "Deletion failed\n";
        }
    }
    else
    {
        for (int i = 0;  i < a.size(); i++) {
            if (a[i] == b [i])
            {
                cout << "Deletion failed\n";
                return 0;
            }
        }
        cout << "Deletion succeeded\n";
    }
    
    return 0;
}