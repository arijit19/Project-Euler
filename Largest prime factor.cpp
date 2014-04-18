//
//  main.cpp
//  Largest prime factor
//
//  Created by ARIJIT CHANDRA on 13/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x)
{
        
        int count =0;
        for (int i =1; i <=x; i++) {
            if (x % i==0) {
                count++;
            }
            
        }
        
        if (count<=2) {
            return true;
        }
    return  false;
}

int main(int argc, const char * argv[])
{

    long long num =600851475143;
    
    for (int i = sqrt(600851475143); i > 2; i--) {
        if (num%i==0) {
            if (isPrime(i)) {
                cout<<i;
                break;
            }
        }
    }
    return 0;
}

