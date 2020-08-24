///Write a C program to check whether a triangle is Equilateral, Isosceles, or Scalene.
/// time 5-6 mins

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    //cin>>a>>b>>c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        if((a==b)&&(b==c))
            cout<<"This is an equilateral triangle"<<endl;
        else if((a==b) || (b==c) || (a==c))
            cout<<"This is an isosceles triangle"<<endl;
        else
            cout<<"This is a scalene triangle"<<endl;
    }
    return 0;
}
