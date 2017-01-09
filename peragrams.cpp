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
    
    unordered_map<char, int> frequencies;
    
    for(char& c : str){
        if (frequencies[c]) {
            frequencies[c] = frequencies[c] + 1;
        }else{
            frequencies[c] = 1;
        }
    }
    int count = 0;
    int evencount = 0;
    int oddcount = 0;
    vector<int> min_odd;
    min_odd.reserve(1000);
    
    for(auto kv: frequencies){
        count++;
        if(kv.second % 2 == 0){
            evencount++;
        }else{
            min_odd.push_back(kv.second);
            oddcount++;
        }
    }
    
    sort(min_odd.begin(), min_odd.end());
    if(oddcount > 1){
        cout << oddcount - 1 << "\n";
        return 0;
    }else{
        cout << "0" << "\n";
    }
    return 0;
}
