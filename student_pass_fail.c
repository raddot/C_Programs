#include<stdio.h>
int main()
{
    int marks1,marks2,marks3;
    float total;
    printf("Enter marks1 ->");
    scanf("%d",&marks1);
    printf("Enter marks2 ->");
    scanf("%d",&marks2);
    printf("Enter marks3 ->");
    scanf("%d",&marks3);
    total = (marks1 + marks2 + marks3)/3;
    if((total < 40) || marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You failed in the exam by percentage of %f\n",total);
    }
    else
    {
        printf("You passed in the exam by percentage of %f\n",total);
    }
    return 0;
}