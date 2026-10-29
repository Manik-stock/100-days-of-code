/*
Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int ch;
    scanf("%99s",name);
    fp=fopen(name,"r");
    if (fp==NULL)
    {
        printf("File does not exist\n");
        return 1;
    }
while ((ch=fgetc(fp))!=EOF)putchar(ch);
    fclose(fp);
    return 0;
}
