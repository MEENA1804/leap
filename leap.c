#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("the given year is a leap year %d",year);
    }
        else
{

          printf("the given year is not a leap year %d",year);
    }

}
