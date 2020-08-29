////
////  main.cpp
////  ProjectEuler-3
////
////  Created by Gorakh Chavan on 23/08/20.
////  Copyright © 2020 Gorakh Chavan. All rights reserved.
////
//
//#include <iostream>
//#include<cmath>
//#include<string>
//using namespace std;
////void primeFactor(unsigned long long n)
////{
////    while(n%2==0)
////    {
////        cout<<2<<" ";
////        n=n/2;
////    }
////    for(unsigned long long i=3;i<=sqrt(n);i=i+2)
////    {
////        while(n%i==0)
////        {
////            cout<<i<<" ";
////            n=n/i;
////        }
////    }
////    if(n>2)
////    {
////        cout<<n<<" ";
////    }
////}
//bool * isPrime(int n)
//{
//
//    bool* array = new bool[100];
//
//    for(int i=0;i<n+1;i++)
//    {
//        array[i]=true;
//    }
//   array[0]=false;
//   array[1]=false;
//    for(int i=2;i*i<=n;i++)
//    {
//        for(int j=2*i;j<=n;j+=i)
//        {
//            array[j]=false;
//        }
//    }
//
//
//    return array;
//}
//
//int main()
//{
////    unsigned long long num;
////    cin>>num;
////    int answer=0;
////    for (int i = 2; num != 1; i++) {
////        while (num % i == 0) {
////            num /= i;
////            answer = i;
////        }
////    }
////    cout<<answer<<endl;
//////    primeFactor(n);
////    return 0;
//
////    int n;
////
//////    char ch;
////    cout<<"Enter Number of string:";
////    cin>>n;
////    cin >> ws;
////    string arr[n];
////    for(int i=0;i<n;i++)
////    {
////        getline(cin,arr[i]);
////    }
////    cout<<endl;
////    for(int i=0;i<n;i++)
////    {
////        cout<<arr[i]<<endl;
////    }
////
//
//    int n=10;
////    cout<<"Enter your number";
////    cin>>n;
//    bool *p=isPrime(n);
//    for(int i=1;i<n+1;i++)
//    {
//        cout<<p[i]<<" ";
//    }
//
//    return 0;
//}
