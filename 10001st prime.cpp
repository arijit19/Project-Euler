//
//  main.cpp
//  nth prime
//
//  Created by ARIJIT CHANDRA on 08/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

bool isComp(int x)
{
    int count =0;
        for (int i=2; i<=sqrt(x); i++) {
            if (x%i==0) {
                return true;
            }
        }
//    if (count<3) {
//        return true;
//    }
    return false;
}

int main(int argc, const char * argv[])
{
    int num = 2,count=1;
    do
    {
        num++;
        if (!isComp(num))
        {
//            cout<<num<<" ";
            count++;
        }
        
    }while(count<10001);
    cout<<num;
    
    return 0;
}

