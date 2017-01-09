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
    
    string str;
    map<int, int> winners;
    int w,x,y,z,a = 5;
    int max = 0;
    int number = 1;
    while (a > 0) {
        cin >> w >> x >> y >> z;
        w = w+x+y+z;
        if(w > max){
            max = w;
        }
        winners[w] = number++;
        a--;
    }
    cout << winners[max] << " " << max << endl;
    
}