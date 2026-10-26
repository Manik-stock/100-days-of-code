/*
Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int ch,chars=0,words=0,lines=0,inWord=0;
    scanf("%99s",name);
    fp=fopen(name,"r");
    if (fp==NULL)
    {
        printf("File not found\n");
        return 1;
    }
while ((ch=fgetc(fp))!=EOF)
    {
        chars++;
        if (ch=='\n')lines++;
        if (ch==' '||ch=='\n'||ch=='\t')inWord=0;
        else if (!inWord)
        {
            words++;
            inWord=1;
        }
    }
    fclose(fp);
    printf("Characters=%d, Words=%d, Lines=%d\n",chars,words,lines);
    return 0;
}
