//counting number of letters

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[20];
    printf("Enter a string\n");
    gets(s);
    lengths(s);
    return 0;
}
 void lengths(char *p)
 {
     int i,ctr=0;
     for(i=0;*(p+i)!='\0';i++)
     {
         if(*(p+i)!=' ')
         {
             ctr++;
         }
     }
     printf("%d",ctr);
 }
