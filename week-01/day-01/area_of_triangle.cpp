/*1. Write a C program that takes three valid side lengths of a triangle as input.You must
take inputs at integer data type. Print the area of that triangle with
three digits after decimal point. Do typecasting if necessary. */
/// Time 8-9 mins

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,a,b,c;
    double perimeter,area;
    while(scanf("%d %d %d",&a,&b,&c) != EOF){
    perimeter = (a+b+c)/(double)2;
    area = sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
    printf("%.3lf\n",area);
    }
    return 0;
}
