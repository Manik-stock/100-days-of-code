/*
Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/

#include <stdio.h>

int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)scanf("%d",&a[i]);
    for (i=0;i<n;i++)for (j=0;j<i;j++)if (a[i]==a[j])
    {
        printf("%d\n",a[i]);
        return 0;
    }
    printf("No repeated element\n");
    return 0;
}
