/*
Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/

#include <stdio.h>

int main()
{
    FILE *in,*out;
    int ch;
    in=fopen("input.txt","r");
    if (in==NULL)
    {
        printf("input.txt not found\n");
        return 1;
    }
    out=fopen("output.txt","w");
    while ((ch=fgetc(in))!=EOF)
    {
        if (ch>='a'&&ch<='z')ch-=32;
        fputc(ch,out);
    }
    fclose(in);
    fclose(out);
    return 0;
}
