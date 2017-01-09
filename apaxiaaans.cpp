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
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    string str;
    getline(cin, str);
    int len = str.length();
    for (int i = 0; (i + 1) < len;) {
        if (str[i] == str[i+1]) {
            str.erase(i,1);
            len--;
        }else{
            i++;
        }
    }
    cout << str << "\n";
}
