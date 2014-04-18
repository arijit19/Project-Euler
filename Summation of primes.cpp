//
//  main.cpp
//  Summation of primes
//
//  Created by ARIJIT CHANDRA on 14/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

bool isComp(long x)
{
    
    for (long i =2; i <=sqrt(x); i++) {
        if (x % i==0) {
            return true;
        }
        
    }
    return  false;
}

int main(int argc, const char * argv[])
{
    long long sum =0;
    for (long i =2 ; i<2000000; i++) {
        if (!isComp(i)) {
            sum+=i;
        }
    }
    cout<<to_string(sum);
    return 0;
}

