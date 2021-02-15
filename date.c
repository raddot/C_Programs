#include<stdio.h>
struct dates
{
    int date;
    int month;
    int year;
};

void display(struct dates d)
{
    printf("The value of date is %d-%d-%d\n",d.date,d.month,d.year);
}

int dateComp(struct dates d1, struct dates d2)
{
    if(d1.year > d2.year)
    {
        return 1;
    }
    if(d1.year < d2.year)
    {
        return -1;
    }
    if(d1.month > d2.month)
    {
        return 1;
    }
    if(d1.month < d2.month)
    {
        return -1;
    }
    if(d1.date > d2.date)
    {
        return 1;
    }
    if(d1.date < d2.date)
    {
        return -1;
    }
}

int main()
{
    struct dates d1  = {8,11,2021};
    struct dates d2 = {11,12,2022};
    
    display(d1);
    display(d2);
    int a = dateComp(d1,d2);
    printf("Date comparison function returns : %d",a);
    return 0;
}