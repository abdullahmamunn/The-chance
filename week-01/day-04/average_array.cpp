/// Input N integers. Determine the average. Print the average with two digit after the decimal point.
/// Time: 5-6 mins
#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
    int n,i;
    double avg,sum=0;
    cin>>n;
    double a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        sum = sum + (double)a[i];
    }
    avg = sum/n;
    printf("%.2lf\n",avg);

    return 0;
}
