//sum of digits
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int sum=0;
    printf("Enter a string:\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum=sum+(str[i]-'0');
        }
    }
    printf("sum=%d",sum);
    return 0;
}
