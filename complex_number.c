#include<stdio.h>
typedef struct complex
{
    int real;
    int complex;
}comp;

void display(comp c)
{
    printf("The real part is -> %d\n",c.real);
    printf("The imaginary part is -> %d\n",c.complex);
}

int main()
{
    int i;
    comp cnums[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the real value of %d num\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the complex value of %d num\n",i+1);
        scanf("%d",&cnums[i].complex);
    }
    for(i=0;i<5;i++)
    {
        display(cnums[i]);
    }
    return 0;
}