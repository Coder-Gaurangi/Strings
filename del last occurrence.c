//remove last occurrence
#include<stdio.h>
#include <string.h>
int strings(char *s)
{
     int j;
     for(j=0;s[j];j++);
	 return j;
}
void deletechar(char *s,char c)
{
	int i,temp=1,n;
     i=n=strings(s);
      while(i)
	{
       if(temp)
        {
            i--;
          	 if(c==s[i])
          	  {
				temp=0;
				s[i]=s[i+1];
					i++;
		     }
	    }
	    else
	     {
	     	if(i==n)
		    break;

		   s[i]=s[i+1];
		   i++;
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
    deletechar(s,c);
    printf("string after removing last occurance of character %c:\n",c);
    printf("%s",s);
	return 0;
}
