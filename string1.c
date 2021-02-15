#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    char c;
    int i=0;
    printf("Enter the string 1 ->\n");
    scanf("%s",str1);
    printf("Enter character by character string 2 ->\n");
    while(c != '\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i]='\0';

    printf("String 1 is -> %s\n",str1);
    printf("String 2 is -> %s\n",str2);
    printf("The comparison of two strings is %d",strcmp(str1,str2));

    return 0;
}