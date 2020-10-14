//compare two strings
#include <stdio.h>
int compare(char [], char []);

int main()
{
   char a[1000], b[1000];

   printf("enter first string\n");
   gets(a);

   printf("Input second string\n");
   gets(b);

   if (compare(a, b) == 0)
      printf("Equal strings.\n");
   else
      printf("Unequal strings.\n");

   return 0;
}

int compare(char a[], char b[])
{
   int i = 0;

   while (a[i] == b[i]) {
      if (a[i] == '\0' || b[i] == '\0')
         break;
      i++;
   }

   if (a[i] == '\0' && b[i] == '\0')
      return 0;
   else
      return -1;
}
