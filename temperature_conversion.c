#include<stdio.h>
float temp_conversion(int temp);

int main()
{
    int temp;
    printf("Enter the celsius temperature -> ");
    scanf("%d",&temp);
    printf("Fahrenheit temperature is -> %f",temp_conversion(temp));
    return 0;
}

float temp_conversion(int temp)
{
    float fahr_temp;
    fahr_temp = (temp * 9/5) + 32;
    return fahr_temp;
}