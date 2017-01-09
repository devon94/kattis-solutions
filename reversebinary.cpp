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
#include <bitset>
#include <sstream>
#include <float.h>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

string bin_rec(int n)
{
    string ss;
    if (n / 2 != 0) {
        ss = bin_rec(n / 2);
    }
    return to_string(n % 2) + ss;
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    int in;
    string bin;
    cin >> in;
    bin = bin_rec(in);
    cout << bitset<64>(bin).to_ullong() << "\n";

}
