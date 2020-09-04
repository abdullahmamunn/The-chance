///Given the coordinate of two points p1(x1,y1) and p2(x2,y2). Find which point is closest to the center (0,0).
/// time : 6-7 mins

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,p1,p2;
    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)!=EOF)
    {
        p1 = sqrt((x1*x1) + (y1*y1));
        p2 = sqrt((x2*x2) + (y2*y2));

        if(p1<p2)
            printf("%d %d\n",x1,y1);
        else
            printf("%d %d\n",x2,y2);
    }
    return 0;
}
