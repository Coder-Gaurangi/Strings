//counting vowels and consonants
#include<stdio.h>
#include<string.h>
void stringcount(char *s)
{
    int i=0,v=0,c=0;
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Number of vowels = %d\n",v);
    printf("Number of consonants = %d\n",c);
}
int main()
{
    char s[10];
    printf("Enter a string\n");
    gets(s);
    stringcount(s);
    return 0;
}
