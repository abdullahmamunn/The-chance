///Write a C program to find the third maximum between four numbers.
/// time : 7-8 mins
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
   // cin>>a>>b>>c>>d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF){
    if(a<b && a<c && a>d)
        printf("%d\n",a);
    else if(b<c && b<d && b>a)
        printf("%d\n",b);
    else if(c<d && c<a && c>b)
        printf("%d\n",c);
    else
        printf("%d\n",d);
    }
    return 0;
}
