//
//  main.cpp
//  ProjectEuler-3
//
//  Created by Gorakh Chavan on 23/08/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
#include<cmath>
using namespace std;
void primeFactor(unsigned long long n)
{
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }
    for(unsigned long long i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2)
    {
        cout<<n<<" ";
    }
}

int main()
{
    unsigned long long n;
    cin>>n;
    primeFactor(n);
    return 0;
}
