///Write a C program to check whether a given integer is odd or even.
/// time: 2 mins;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    //cin>>num;
     while(scanf("%d",&num)!=EOF){
        if(num%2==0)
            cout<<num<<" is even"<<endl;
        else
            cout<<num<<" is odd"<<endl;
     }
    return 0;
}
