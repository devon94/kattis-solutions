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
    
    unordered_map<string, string> number_map = {
        {"*** * * * * * * *** ", "0"},
        {"  *   *   *   *   * ", "1"},
        {"***   * *** *   *** ", "2"},
        {"***   * ***   * *** ", "3"},
        {"* * * * ***   *   * ", "4"},
        {"*** *   ***   * *** ", "5"},
        {"*** *   *** * * *** ", "6"},
        {"***   *   *   *   * ", "7"},
        {"*** * * *** * * *** ", "8"},
        {"*** * * ***   * *** ", "9"}
    };

    long x,y,z;
    map<int, string> numbers;
    string str;
    while (getline(cin,str)) {
        x = 0;
        for (int i = 0; i + 3 <= str.length(); i += 4) {
            string temp = "";
            temp += str[i];
            temp += str[i+1];
            temp += str[i+2];
            temp += " ";
            numbers[x] += temp;
            x++;
        }
    }
    string num_string;
    for (auto kv : numbers){
        if (number_map[kv.second] != "") {
            num_string += number_map[kv.second];
        }else{
            cout << "BOOM!!\n";
            return 0;
        }
    }
    if (stoi(num_string) % 6 != 0 ){
        cout << "BOOM!!\n";
    }else{
        cout << "BEER!!\n";
    }
    return 0;
}