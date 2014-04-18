//
//  main.cpp
//  Largest palindrome product
//
//  Created by ARIJIT CHANDRA on 13/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPal(int x)
{
    string str = to_string(x);
    str= string(str.rbegin(), str.rend());
    if (stoi(str)==x) {
        return true;
    }
    return false;
}

int main(int argc, const char * argv[])
{
    vector<int> v;
    int mul=0,k=0;
    for (int i =999; i>=100; i--) {
        for (int j =999; j>=100; j--) {
            mul = i*j;
            if (isPal(mul)) {
                v.push_back(mul);
                k++;
            }
        }
    }

    sort(v.rbegin(), v.rend());
    cout<<v[0];
    return 0;
}

//906609