#include<stdio.h>

int main()
{
    int num1,num2,num3;
    FILE *fptr;
    fptr = fopen("digit.txt","r");
    fscanf(fptr,"%d %d %d",&num1,&num2,&num3);
    printf("The three integers num1, num2 and num3 are %d %d %d",num1,num2,num3);
    fclose(fptr);
    return 0;
}