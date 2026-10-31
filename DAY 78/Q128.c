/*
Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int ch,v=0,c=0;
    scanf("%99s",name);
    fp=fopen(name,"r");
    if (fp==NULL)return 1;
    while ((ch=fgetc(fp))!=EOF)
    {
        if (ch>='A'&&ch<='Z')ch+=32;
        if (ch>='a'&&ch<='z')
        {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;
            else c++;
        }
    }
    fclose(fp);
    printf("Vowels=%d, Consonants=%d\n",v,c);
    return 0;
}
