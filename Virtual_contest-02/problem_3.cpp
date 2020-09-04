#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,t,n,q,s[100005],a,b;
    vector<long long int>v;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    s[0]=0;
    for(i=1;i<=t;i++)
    {
        s[i]=s[i-1]+v[i-1];
    }
    cin>>q;
    for(j=1;j<=q;j++)
    {
        cin>>a>>b;
        a++;
        b++;
        cout<<s[b]-s[a-1]<<endl;

    }

    return 0;

}
