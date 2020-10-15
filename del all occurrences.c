//remove last occurrence
#include<stdio.h>
#include <string.h>
void deletes(char *s,char c)
{
	int i,k=0;
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
    }
}
int main()
{
    char s[10],c;
    printf("Enter a string : ");
    gets(s);
    printf("Enter a character: ");
    c=getchar();
    deletes(s,c);
    printf("%s",s);
	return 0;
}
