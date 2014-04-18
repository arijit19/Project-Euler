//
//  main.cpp
//  Even Fibonacci numbers
//
//  Created by ARIJIT CHANDRA on 13/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void fibo()
{
    int x =1, y =2,sum=0,temp=0;
    
    while (y< 4000000) {
        temp = y;
        y= x+y;
        x=temp;
        if (x%2==0) {
            sum+=x;
        }
    }
    cout<<sum;
}

int main(int argc, const char * argv[])
{

    fibo();
    return 0;
}

