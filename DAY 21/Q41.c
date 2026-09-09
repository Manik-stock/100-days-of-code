/*
Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>

int main()
{
    int n,t,p=1,first,last,middle,result;
    scanf("%d",&n);
    if (n<10)
    {
        printf("%d\n",n);
        return 0;
    }
    last=n%10;
    t=n;
    while (t>=10)
    {
        t/=10;
        p*=10;
    }
    first=t;
    middle=(n%p)/10;
    result=last*p+middle*10+first;
    printf("%d\n",result);
    return 0;
}
