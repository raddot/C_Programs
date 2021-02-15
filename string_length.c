#include<stdio.h>

int strlen(char * st)
{
    char *ptr = st;
    int len=0;
    while(*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char st[]="Radhika";
    int l = strlen(st);
    printf("Length of string is -> %d",l);
    return 0;
}