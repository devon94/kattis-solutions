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

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    
    string str;
    while (getline(cin, str)) {
        stringstream sstr(str);
        int temp;
        sstr >> temp;
        if (temp == 0) {
            break;
        }
        map<string, vector<string> >food;
        for (int i = 0; i < temp; i++) {
            getline(cin, str);
            vector<string> elems;
            stringstream ss(str);
            string item;
            while (getline(ss, item, ' ')) {
                elems.push_back(item);
            }
            vector<string> orders(elems.begin()+1, elems.end());
            
            for (auto f : orders) {
                food[f].push_back(elems[0]);
            }
            
        }
        for (auto kv: food) {
            cout << kv.first;
            sort(kv.second.begin(), kv.second.end());
            for(auto name: kv.second){
                cout << " " << name;
            }
            cout << "\n";
        }
        cout << "\n";

    }
    
    return 0;
    
}
