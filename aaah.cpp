//
//  main.cpp
//  kattis
//
//  Created by Devon Deonarine on 2016-04-03.
//  Copyright © 2016 Devon Deonarine. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    string str;
    getline(cin, str);
    string str1;
    getline(cin, str1);
    unordered_map<char, int> frequencies;
    unordered_map<char, int> frequencies1;
    frequencies['a'] = 0;
    frequencies1['a'] = 0;
    
    for(char& c : str){
        if (frequencies[c]) {
            frequencies[c] = frequencies[c] + 1;
        }else{
            frequencies[c] = 1;
        }
    }
    for(char& c : str1){
        if (frequencies1[c]) {
            frequencies1[c] = frequencies1[c] + 1;
        }else{
            frequencies1[c] = 1;
        }
    }
    if (frequencies['a'] >= frequencies1['a']) {
        cout << "go\n";
    }else{
        cout << "no\n";
    }
    return 0;
}
