#include<stdio.h>

struct vector
{
    int num1;
    int num2;
};

struct vector vector_sum(struct vector vector1, struct vector vector2)
{
    struct vector result;
    result.num1 = vector1.num1+vector2.num1;
    result.num2 = vector2.num2+vector2.num2;
    return result;
}

int main()
{
    struct vector v1, v2, sum;
    v1.num1=3;
    v1.num2=6;
    printf("The num1 component of vector1 is %d and num2 component of vector1 is %d\n",v1.num1,v1.num2);

    v2.num1=4;
    v2.num2=6;
    printf("The num1 component of vector2 is %d and num2 component of vector2 is %d\n",v2.num1,v2.num2);

    sum=vector_sum(v1,v2);
    printf("The num1 component of result vector is %d and num2 component of result vector is %d\n",sum.num1,sum.num2);
    return 0;
}