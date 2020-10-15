//to find first and last occurrence of a character in a string
#include <stdio.h>
#include<string.h>
int main()
{
	int i,c=0,p1,p2;
	char s1[10],key;
	printf("enter a string\n");
	gets(s1);
	printf("enter character\n");
	scanf("%c",&key);
	for(i=0;s1[i]!='\0';i++)
    {
        if(key==s1[i])
        {
            c++;
            if(c==1)
            {
                p1=i;
                p2=i;
                printf("%d\n",p1+1);
            }
            else
            {
              p2=i;
            }
        }
    }
    printf("%d\n",p2+1);
	return 0;
}
