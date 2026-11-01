/*
A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int x,count=0,sum=0;
    fp=fopen("numbers.txt","r");
    if (fp==NULL)return 1;
    while (fscanf(fp,"%d",&x)==1)
    {
        sum+=x;
        count++;
    }
    fclose(fp);
    printf("Sum=%d\n",sum);
    if (count)printf("Average=%.2f\n",(float)sum/count);
    return 0;
}
