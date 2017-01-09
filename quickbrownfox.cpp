//
//  kattis1.cpp
//  lab1
//
//  Created by Devon Deonarine on 2016-02-07.
//  Copyright © 2016 Devon Deonarine. All rights reserved.
//

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    getline(cin, str);
    istringstream sstr(str);
    int lines;
    sstr >> lines;
    vector<string> lineArray;
    vector<int> ys;
    for (int i = 0; i < lines; i++) {
        getline(cin, str);
        lineArray.push_back(str);
    }
    string missing = "";
    vector<string> answers;

    
    for (int j = 0; j < lines; j++) {
        for (int i = 0; i < 26; i++) {
            size_t foundLower = lineArray[j].find(alphabet[i]);
            size_t foundUpper = lineArray[j].find(toupper(alphabet[i]));
            if (foundLower == string::npos && foundUpper == string::npos){
                missing += alphabet[i];
            }
        }
        if (missing.length() > 0) {
            cout << "missing " << missing << "\n";
        } else {
            cout << "pangram\n";
        }
        missing = "";
    }


}
