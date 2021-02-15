#include<stdio.h>

int main()
{
    char ch;
    FILE *fptr1;
    FILE *fptr2;
    fptr1 = fopen("chara1.txt","r");
    fptr2 = fopen("chara2.txt","w");
    ch = fgetc(fptr1);
    while(ch != EOF)
    {
        fputc(ch,fptr2);
        fputc(ch,fptr2);
        ch = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}