/*
Write a program to check if a number is a strong number.
*/

#include <stdio.h>

int fact(int n)
{
    int f=1,i;
    for (i=1;i<=n;i++)f*=i;
    return f;
}
int main()
{
    int n,t,sum=0;
    scanf("%d",&n);
    t=n;
    while (t)
    {
        sum+=fact(t%10);
        t/=10;
    }
    if (sum==n)printf("Strong number\n");
    else printf("Not strong number\n");
    return 0;
}
