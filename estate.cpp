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

unordered_map<int, int> sums;

int sum(int x)
{
    int n = x - 1;
    return n*(n+1)/2;
}


int calc(int in){
    int temp = in;
    int k = 0;
    while (temp > 1) {
        if((temp - (k + 2)) >= 0){
            temp -= (++k + 1);
        }else{
            break;
        }
    }
    int solu = 0;
    for (int i = k + 1; i >= 2 ; i--) {
        int temp = in - sum(i);
        if(temp % i == 0 && temp/i > 1){
//            cout << "i:" << i << " " << temp/i << " " <<"\n";
            solu++;
        }
    }
    if(in >= 2){
        solu++;
    }
//    cout << "k: " << k << "\n";

//    cout << solu << "\n";
    return solu;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    
    string str;
    int temp;
    while (getline(cin, str)) {
        stringstream sstr(str);
        sstr >> temp;
        if(temp == 0){
            break;
        }
        cout << calc(temp) << "\n";
    }
    
    
    return 0;
    
}
