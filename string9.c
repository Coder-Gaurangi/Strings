//counting number of words(logic of spaces)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[10];
    int i=0,w=0;
    printf("Enter a string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '||s[i]=='\n'||s[i]=='\t')
        {
            w++;
        }
    }
    w++;
    printf("Number of words = %d",w);
    return 0;
}
