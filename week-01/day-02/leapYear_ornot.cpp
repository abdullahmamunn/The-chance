///Write a C program to find whether a given year is a leap year or not.
/// time : 3-4 mins

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    //cin>>year;
    while(scanf("%d",&year)!=EOF){
        if((year%4==0 && year%100 !=0) || year%400==0)
            cout<<year<<" is a leap year"<<endl;
        else
            cout<<year<<" is not a leap year"<<endl;
     }
    return 0;
}
