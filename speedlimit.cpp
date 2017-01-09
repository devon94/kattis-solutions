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
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    char buffer[1048576];
    cin.rdbuf()->pubsetbuf(buffer, sizeof(buffer));
    
    while (1 < 2) {
        int w,x = 0,y,z,miles = 0;
        cin >> w;
        if (w == -1) break;
        while (w > 0) {
            cin >> y >> z;
            miles += (y*(z-x));
            x = z;
            w--;
        }
        cout << miles << " miles" << "\n";
    }

}
