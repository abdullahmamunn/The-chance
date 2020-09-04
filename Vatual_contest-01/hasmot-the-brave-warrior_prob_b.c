#include<stdio.h>
#include<math.h>
int main()
{
    long long int hasmot_army,opponent_army;
    while(scanf("%lld %lld",&hasmot_army,&opponent_army)==2){
        if(hasmot_army>opponent_army)
        {
           printf("%lld\n",abs(hasmot_army-opponent_army));
        }
        else
        {
           printf("%lld\n",abs(hasmot_army-opponent_army));
        }
    }
    return 0;
}
