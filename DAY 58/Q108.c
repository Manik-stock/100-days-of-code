/*
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,j;
    long long p;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%d",&a[i]);
    printf("[");
    for (i=0;i<n;i++)
    {
        p=1;
        for (j=0;j<n;j++)if (j!=i)p*=a[j];
        printf("%lld",p);
        if (i<n-1)printf(",");
    }
    printf("]\n");
    return 0;
}
