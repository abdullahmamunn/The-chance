#include<stdio.h>
int main()
{
    int a_size,i,val,j,cnt=0;
    while(scanf("%d %d",&a_size,&val)!=EOF)
    {
       int a[a_size];
       for(i=0;i<a_size;i++)
       {
           scanf("%d",&a[i]);
       }
       for(i=0;i<a_size;i++)
       {
           for(j=i+1;j<a_size;j++)
           {
               if(a[i]+a[j] == val)
               {
                   printf("%d %d, ",a[i],a[j]);
                   cnt = 1;
               }
           }
       }
       if(cnt==0)
       {
           printf("-1");
       }
       printf("\n");
    }
     return 0;
}
