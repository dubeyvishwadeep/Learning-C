/*determine wheather year is leap or not using conditional oprator*/
#include<stdio.h>
int main()
{
int year;
printf("enter year:");
scanf("%d",&year);
year%100==0?(year%400==0?printf("leap year\n"):printf("not a leap year\n")):(year%4==0?printf("leap year\n"):printf("not a leap year\n"));
return 0;
}
