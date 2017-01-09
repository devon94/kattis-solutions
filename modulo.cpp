//
//  main.cpp
//  kattis
//
//  Created by Devon Deonarine on 2016-04-03.
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

unordered_map<int, int> uniquenums;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    
    string str;
    int temp;
    int count = 0;
    while (getline(cin, str)) {
        stringstream sstr(str);
        sstr >> temp;
        if (uniquenums[temp%42]) {
            uniquenums[temp%42] = uniquenums[temp%42] + 1;
        }else{
            uniquenums[temp%42] = 1;
            count++;
        }
    }
    cout << count << "\n";
    
    return 0;
    
}
