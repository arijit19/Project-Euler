//
//  main.cpp
//  Multiples of 3 and 5
//
//  Created by ARIJIT CHANDRA on 13/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int x = 3 , y = 5 , sum =0;
    for (int i =0 ; i< 1000; i++) {
        if (i%3==0 || i%5==0) {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}

