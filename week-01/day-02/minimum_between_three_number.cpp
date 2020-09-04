/// Write a C program to find a minimum between three numbers.
/// time: 5 mins
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    //cin>>a>>b>>c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
    if(a<b && a<c)
        cout<<a<<" minimum"<<endl;
    else if(b<a && b<c)
        cout<<b<<" minimum"<<endl;
    else
        cout<<c<<" minimum"<<endl;
    }

    return 0;
}
