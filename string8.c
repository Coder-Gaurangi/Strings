//to print ASCII values of each character

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str[100];
    int i=0;
    printf("Enter a string\n");
    gets(str);

    printf("ASCII values of each characters of given string:\n\n");
    while(str[i])
         printf("%d\n",str[i++]);

    getch();
}
