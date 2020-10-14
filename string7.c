//calculate number of types of characters
#include<stdio.h>
#include<string.h>
int main()
{
   char s[20];
   int u=0,l=0,sp=0,d=0;
   printf("Enter a string\n");
   gets(s);
   for(int i=0;s[i]!='\0';i++)
   {
       if(s[i]>='A' && s[i]<='Z')
       {
           u++;
       }
       else if(s[i]>='a' && s[i]<='z')
       {
           l++;
       }
       else if(s[i]>='0' && s[i]<='9')
       {
           d++;
       }
       else
        {
           sp++;
        }
   }

   printf("Number of uppercase letters = %d\n",u);
   printf("Number of lowercase letters = %d\n",l);
   printf("Number of special characters = %d\n",sp);
   printf("Number of integers = %d",d);

   return 0;
}
