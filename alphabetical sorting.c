//alphabetical sorting
#include <stdio.h>
#include<string.h>
int main()
{
	char s[20],temp;
	printf("Enter a string\n");
	gets(s);
	int i,j;
	int n=strlen(s);
	for(i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("sorted string is %s",s);
	return 0;
}
