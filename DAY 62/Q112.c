/*
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,current,best;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%d",&a[i]);
    current=best=a[0];
    for (i=1;i<n;i++)
    {
        if (current+a[i]>a[i])current+=a[i];
        else current=a[i];
        if (current>best)best=current;
    }
    printf("%d\n",best);
    return 0;
}
