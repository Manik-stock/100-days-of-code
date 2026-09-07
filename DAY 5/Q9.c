/*
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>

int main()
{
    float p,r,si,ci,amount=1;
    int t,i;
    scanf("%f %f %d",&p,&r,&t);
    si=p*r*t/100;
    for (i=0;i<t;i++) amount*=1+r/100;
    ci=p*amount-p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",si,ci);
    return 0;
}
