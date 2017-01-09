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
    
    double king, queen, rook, bishop, knight, pawn;
    
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    
    cout << (1 - king) << " " << (1 - queen) << " " << (2 - rook) << " " << (2 -bishop) << " " << (2 - knight) << " " << (8 - pawn) << endl;
    
    return 0;
}
