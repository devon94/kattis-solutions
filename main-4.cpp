//
//  main.cpp
//  lab06
//
//  Created by Devon Deonarine on 2016-03-21.
//  Copyright © 2016 Devon Deonarine. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solve(string in){
    
    //create temp string to reset
    string temp = in;
    
    int minimum, left, right;
    left = right = 12;
    
    //index 0 to 11 becasue i'm checking for 2 o's in a row
    for (int i = 0; i < in.length() - 1; i++) {
        //find a pebble
        if (in[i] == 'o') {
            //finds pebble adjacent to its right and checks for space in right of pebbles within bounds
            if ((i + 2 < in.length()) && in[i + 1] == 'o' && in[i + 2] == '-') {
                temp[i]  = '-';
                temp[i + 1] = '-';
                temp[i + 2] = 'o';
                right = min(right, solve(temp));
                //reset string
                temp = in;
            }
            //finds pebble adjacent to its right and checks for space in left of pebbles within bounds
            if ((i - 1 >= 0) && in[i + 1] == 'o' && in[i - 1] == '-') {
                temp[i] = '-';
                temp[i + 1] = '-';
                temp[i - 1] = 'o';
                left = min(left, solve(temp));
                //reset string
                temp = in;
            }
        }
    }
    //calculate number of o's in string
    minimum =  min(min(left,right), (int)count(in.begin(), in.end(), 'o'));
    
    return minimum;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    int lines;
    string str;
    getline(cin, str);
    istringstream sstr(str);
    sstr >> lines;
    
    for (int i = 0; i  < lines; i++) {
        getline(cin, str);
        cout << solve(str) << "\n";
    }
    
    return 0;
}
