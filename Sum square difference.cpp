//
//  main.cpp
//  Sum square difference
//
//  Created by ARIJIT CHANDRA on 13/04/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int sum =0 ,ssum=0;

    for (int i =1 ; i<=100; i++) {
        sum +=i;
    }
    for (int i =1; i<=100; i++) {
        ssum +=i*i;
    }
    cout<<(sum*sum)-ssum;
    return 0;
}

