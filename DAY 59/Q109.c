/*
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main()
{
    int a[100],n,k,i,j,s,max;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    max=0;
    for (i=0;i<k;i++)max+=a[i];
    for (i=1;i<=n-k;i++)
    {
        s=0;
        for (j=i;j<i+k;j++)s+=a[j];
        if (s>max)max=s;
    }
    printf("%d\n",max);
    return 0;
}
