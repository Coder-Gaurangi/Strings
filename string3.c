//concatenate two strings
#include <stdio.h>
#include <string.h>
int main()
{
    char str2[20],str1[20];
    int i=0,j=0;
    printf("\nEnter first string\n");
    gets(str1);
    printf("\nEnter second string\n");
    gets(str2);
    while(str1[i]!='\0')
    {
       ++i;
    }
    while(str2[j]!='\0')
    {
        str1[i]+=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("Concatenated String is %s",str1);
    return 0;
}
