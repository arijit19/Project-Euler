//
//  main.cpp
//  Power digit sum
//
//  Created by ARIJIT CHANDRA on 15/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[])
{
    long long sum =0;
    string str = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
//    cout<<str;
    
    for (long i =0; i<str.length(); ++i) {
        sum+=(long long)str.at(i) -'0';
    }
    cout<<sum;
    return 0;
}

