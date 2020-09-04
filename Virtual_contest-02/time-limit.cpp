#include<bits/stdc++.h>

using namespace std;
long int arr[2000005],i,n;

int main(){

     while(scanf("%d",&n)){
        if(n==0)
            break;

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    sort(arr, arr+n);

    for(i=0; i<n; i++){
        printf("%ld",arr[i]);
        if(i<n-1)
            printf(" ");
    }
    cout<<endl;

 }

}
