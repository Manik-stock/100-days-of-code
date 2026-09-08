/*
Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>

int power(int a,int b)
{
    int r=1;
    while (b--)r*=a;
    return r;
}
int main()
{
    int n,t,digits=0,sum=0,d;
    scanf("%d",&n);
    t=n;
    do
    {
        digits++;
        t/=10;
    }
while (t);
    t=n;
    while (t)
    {
        d=t%10;
        sum+=power(d,digits);
        t/=10;
    }
    if (sum==n)printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}
