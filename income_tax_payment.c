#include<stdio.h>
int main()
{
    float salary;
    float tax=0;
    printf("Enter salary of an employee ->");
    scanf("%f",&salary);
    if(salary >= 250000 && salary <= 500000)
    {
        tax = tax + 0.05 * (salary - 250000);
        printf("Employee will pay %f tax",tax);
    }
    if(salary >= 500000 && salary <= 1000000)
    {
        tax = tax + 0.2 * (salary - 500000);
        printf("Employee will pay %f tax",tax);
    }
    if(salary > 1000000)
    {
        tax = tax + 0.3 * (salary - 1000000);
        printf("Employee will pay %f tax",tax);
    }
    return 0;
}