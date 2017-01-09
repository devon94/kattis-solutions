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
    getline(cin, str);
    stringstream sstr(str);
    int rooms, bkd;
    sstr >> rooms;
    sstr >> bkd;

    if(rooms == bkd ){
        cout << "too late\n";
        return 0;
    }
    unordered_map<int, int> booked_rooms;
    
    int temp;
    
    
    while(getline(cin, str)){
        stringstream ssstr(str);
        ssstr >> temp;
//        cout << temp << "\n";
        booked_rooms[temp] = 1;
    }
    
    for (int i = 1; i <= rooms; i ++) {
        if(!booked_rooms[i]){
            cout << i << "\n";
            return 0;
        }
    }
    
    return 0;
    
}
