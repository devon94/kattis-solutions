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
#include <set>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int match(string substring, string fullstring) {
    int count = 0;
    for (int i = 0; i < fullstring.length(); i++) {
        bool found = true;
        for (int j = 0; j < substring.length()  && found; j++){
            if (i + j > fullstring.length() || substring[j] != fullstring[i + j]){
                found = false;
            }
        }
        if (found) {
            count++;
//            cout << substring <<" found at index " << i << " in " << fullstring<<"\n";
        }
        
    }
    return count;
}

int unique_perm(string substring, string fullstring){
    int count = 0;
    set<string> strings;
    string permute;
    for (int i = 0; i < substring.length(); i++) {
        string tempstr = substring;
        permute = tempstr.erase(i,1);
        strings.insert(permute);
//        sort(permute.begin(), permute.end());
//        do {
//            cout << permute << endl;
//        } while (next_permutation(permute.begin(), permute.end()));
    }
    
    for (auto s: strings) {
        count += match(s, fullstring);
    }
    return count;
}

int unique_add(string substring, string fullstring){
    int count = 0;
    set<string> strings;
    set<string> characters = {"A", "G", "C", "T"};
    string permute;
    for (int i = 0; i < substring.length() + 1; i++) {
        for (auto s: characters) {
            string tempstr = substring;
            permute = tempstr.insert(i,s);
            strings.insert(permute);
        }
    }
    
    for (auto s: strings) {
//        cout << s << "\n";
        count += match(s, fullstring);
    }
    return count;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    string str;
    while(getline(cin, str)){
        if (str.compare("0") == 0){
            break;
        }
        string split;
        stringstream sstr(str);
        vector<string> v;
        while (getline(sstr, split, ' ')) {
            v.push_back(split);
        }
        cout << match(v[0], v[1]) << " " << unique_perm(v[0], v[1]) << " " << unique_add(v[0], v[1]) << "\n";

    }
    return 0;
    
}
