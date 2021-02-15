#include<stdio.h>

void sum_avg(int n1, int n2, int *sum, float *average)
{
    *sum=n1+n2;
    *average=(float)*sum/2;
}

int main()
{
    int num1=10;
    int num2=8;
    int sum;
    float average;
    sum_avg(num1,num2, &sum, &average);
    printf("Sum is %d\n",sum);
    printf("Average is %f\n",average);
    return 0;
}