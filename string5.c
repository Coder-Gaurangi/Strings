//interchange cases(toggle)
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int i;
    printf("Enter a string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]+=32;
        }
        else if(s[i]>=97&&s[i]<=122)
        {
             s[i]-=32;
        }
        else
        {
            continue;
        }
    }
        puts(s);
        return 0;
   }
