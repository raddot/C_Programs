#include<stdio.h>

void slicing(char *str1, int min, int max)
{
    int i=0;
    while((min+i)<max)
    {
        str1[i] = str1[i+min];
        i++;
    }
    str1[i]='\0';
}

int main()
{
    char str1[] ="Radhika";
    slicing(str1,2,6);
    printf("%s",str1);
    return 0;
}