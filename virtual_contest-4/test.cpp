#include<bits/stdc++.h>

using namespace std;
int main()
{
    char s[105];
    int i,lenth,cnt=0,n;
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]=97+s[i]-65;
        }
    }
    sort(s, s+n, greater<char>());
//    for(i=0;i<n;i++)
//     {
//         printf("%c\t ",s[i]);
//     }
     printf("\n");
    for(i=0;i<n;i++){
        if(s[i]!=s[i+1]){
            cnt++;
//            printf("%c ",s[i]);
        }
    }
    if(cnt==26)
        printf("YES\n");
    else
        printf("NO\n");



    return 0;
}
