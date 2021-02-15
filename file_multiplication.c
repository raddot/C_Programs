#include<stdio.h>

int main()
{
    int i,num;
    FILE *fptr;
    printf("Enter the number -> \n");
    scanf("%d",&num);
    fptr = fopen("multiplication.txt","w");
    for(i=0;i<10;i++)
    {
        fprintf(fptr,"%d X %d = %d \n",num,i+1,num*(i+1));
    }
    fclose(fptr);
    printf("Table printed into the file!!");
    return 0;
}