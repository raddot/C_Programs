#include<stdio.h>
float force_att(int mass);

int main()
{
    int mass;
    printf("Enter mass of the body in kgs-> ");
    scanf("%d",&mass);
    printf("Force in Netwon is -> %.2f",force_att(mass));
    return 0;
}

float force_att(int mass)
{
    float result = mass*9.8;
    return result;
}