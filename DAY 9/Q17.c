/*
Write a program to find the roots of a quadratic equation and categorize them.
*/

#include <stdio.h>

double root(double n)
{
    double x=n;
    int i;
    if (n==0)return 0;
    for (i=0;i<30;i++)x=(x+n/x)/2;
    return x;
}
int main()
{
    double a,b,c,d,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        r1=(-b+root(d))/(2*a);
        r2=(-b-root(d))/(2*a);
        printf("Roots are real and different: %.2f, %.2f\n",r1,r2);
    }
else if (d==0)
    {
        r1=-b/(2*a);
        printf("Roots are real and same: %.2f\n",r1);
    }
else printf("Roots are complex\n");
    return 0;
}
