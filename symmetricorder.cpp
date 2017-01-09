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

unsigned nChoosek( unsigned n, unsigned k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;
    
    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    string str;
    int x,y = 1,z;
    
    while (true) {
        vector<string> stuff;
        getline(cin,str);
        stringstream sstr(str);
        sstr >> x;
        if(x == 0){
            break;
        }
        while (x > 0) {
            getline(cin, str);
            stuff.push_back(str);
            x--;
        }
        cout << "SET " << y++ << endl;
        for (int i = 0; i < stuff.size(); i+=2) {
            cout << stuff[i] << endl;
        }
        if (stuff.size() % 2 != 0) {
            for (int i = stuff.size() - 2; i > 0; i-=2) {
                cout << stuff[i] << endl;
            }
        }else{
            for (int i = stuff.size() - 1; i > 0; i-=2) {
                cout << stuff[i] << endl;
            }
        }
    }
    
    return 0;
}