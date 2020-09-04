/// Write a C program to check whether a number is negative, positive, or zero.
/// time: 2 mins
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    //cin>>a;
     while(scanf("%d",&a)!=EOF){
        if(a>0)
            cout<<a<<" is positive"<<endl;
        else if(a==0)
            cout<<a<<" is zero"<<endl;
        else
            cout<<a<<" is negative"<<endl;
     }
    return 0;
}

