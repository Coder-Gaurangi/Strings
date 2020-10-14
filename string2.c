//copy one string into another
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20],str1[20];
    int i;
    printf("\nEnter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
       str1[i]=str[i];
    }
    str1[i]='\0';
    printf("New String is %s",str1);
    return 0;
}
