/*
Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>

int main()
{
    FILE *s,*d;
    char a[100],b[100];
    int ch;
    scanf("%99s %99s",a,b);
    s=fopen(a,"r");
    if (s==NULL)
    {
        printf("Source file not found\n");
        return 1;
    }
    d=fopen(b,"w");
    if (d==NULL)
    {
        fclose(s);
        return 1;
    }
while ((ch=fgetc(s))!=EOF)fputc(ch,d);
    fclose(s);
    fclose(d);
    printf("File copied\n");
    return 0;
}
