/*
Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll,n,i;
    float marks;
    scanf("%d",&n);
    fp=fopen("students.txt","w");
    for (i=0;i<n;i++)
    {
        scanf("%49s %d %f",name,&roll,&marks);
        fprintf(fp,"%s %d %.2f\n",name,roll,marks);
    }
    fclose(fp);
    fp=fopen("students.txt","r");
    while (fscanf(fp,"%49s %d %f",name,&roll,&marks)==3)printf("%s %d %.2f\n",name,roll,marks);
    fclose(fp);
    return 0;
}
