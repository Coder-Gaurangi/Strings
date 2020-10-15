//remove first occurrence
#include<stdio.h>
#include <string.h>
int stringlength(char *s)
{
     int j;
     for(j=0;s[j];j++);

	 return j;
}
void deletechar(char *s,char c)
{
	int i,temp=1,n;
     n=stringlength(s);
    for(i=0;i<n;i++)
    {
       if(temp)
        {
          	 if(c==s[i])
          	{
				temp=0;
				 s[i]=s[i+1];
		    }
	    }
	    else
	     s[i]=s[i+1];
    }
}
int main()
{
    char s[10],c;
    printf("Enter  a string : ");
    gets(s);
    printf("Enter a character: ");
    c=getchar();
    deletechar(s,c);
    printf("%s",s);
	return 0;
}
