/// Given two numbers N and X. Find N is divisible by X or not.
/// time: 2 mins
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    //cin>>n>>x;
    while(scanf("%d%d",&n,&x)!=EOF){
        if(n%x==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
