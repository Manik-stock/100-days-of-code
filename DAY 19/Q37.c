/*
Write a program to find the LCM of two numbers.
*/

#include <stdio.h>

int main()
{
    int a,b,x,y,t,g;
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while (y)
    {
        t=x%y;
        x=y;
        y=t;
    }
    g=x;
    printf("%d\n",a/g*b);
    return 0;
}
