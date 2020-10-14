//compare two strings using pointers
#include<stdio.h>
#include<string.h>
int compare_string(char*, char*);
int main()
{
    char s1[10], s2[10];
    int result;

    printf("Enter first string\n");
    gets(s1);

    printf("Enter second string\n");
    gets(s2);

    result = compare_string(s1, s2);

    if (result == 0)
       printf("Equal strings.\n");
    else
       printf("The strings are different.\n");

    return 0;
}
int compare_string(char *s1, char *s2) {
   while (*s1 == *s2) {
      if (*s1 == '\0' || *s2 == '\0')
         break;

      s1++;
      s2++;
   }
   if (*s1 == '\0' && *s2 == '\0')
      return 0;
   else
      return -1;
}
