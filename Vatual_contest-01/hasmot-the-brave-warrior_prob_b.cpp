#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int hasmot_army,opponent_army;
    while(scanf("%lld%lld",&hasmot_army,&opponent_army)!=EOF){
        if(hasmot_army>opponent_army)
        {
           printf("%lld\n",abs(opponent_army-hasmot_army));
        }
        else
        {
          printf("%lld\n",abs(opponent_army-hasmot_army));
        }
    }
    return 0;
}
