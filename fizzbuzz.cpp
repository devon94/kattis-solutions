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
    
    cin >> x;
    cin >> y;
    cin >> z;
    
    for (int i = 1; i <= z; i ++) {
        if((i % x == 0) && (i % y == 0))
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % x == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % y == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }


    return 0;
}