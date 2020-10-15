//character frequency
#include <stdio.h>
#include <string.h>
int main()
 {
    char str[10],ch;
    int c = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find its frequency:");
    scanf("%c",&ch);

    for (int i=0;str[i]!='\0';++i)
        {
        if (ch==str[i])
            ++c;
        }

    printf("Frequency of %c=%d",ch,c);
    return 0;
}
