#include<stdio.h>
struct vector 
{
    int num1;
    int num2;
};

int main()
{
    struct vector v1,v2;
    v1.num1=31;
    v1.num2=78;
    printf("The num1 component of vector1 is %d and num2 component of vector1 is %d\n",v1.num1,v1.num2);
    v2.num1=40;
    v2.num2=89;
    printf("The num1 component of vector2 is %d and num2 component of vector2 is %d\n",v2.num1,v2.num2);
    return 0;
}