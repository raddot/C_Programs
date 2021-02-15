#include<stdio.h>
int fibo(int num);

int main()
{
    int num;
    printf("Fibonacci series program---\n");
    printf("Enter the number ->");
    scanf("%d",&num);
    printf("Fibonacci Series is -> %d",fibo(num));
    return 0;
}

int fibo(int num)
{
    int res;
    if(num <= 1)
    {
        return num;
    }
    return fibo(num-1) + fibo(num-2);
}