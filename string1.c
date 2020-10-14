//length of string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i=0, ctr=0;
    printf("\nEnter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        ctr++;
    }
    printf("%d",ctr);
    return 0;
}
