///A bus can carry maximum K person at a time. How many buses are needed to carry N person?
/// time 5-6 mins

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,k,res;
    //cin>>n>>k;
    while(scanf("%d%d",&n,&k)!= EOF){
        if(n%k!=0)
            printf("%d\n",n/k+1);
        else
            printf("%d\n",n/k);
    }
    return 0;
}
