/* check wheather year is leap mor not*/
/*year is leap it if is a century year and divisbe by 400*/
/* year is leap it if is a non-century year and it is divisible by4*/
#include<stdio.h>
int main()
{
int yr;
printf(" enter the year:");
scanf("%d",&yr);
if(yr%100==0)
{
if(yr%400==0)
printf("leap year\n");
else
printf("not a leap year\n");
}
else
{
if(yr%4==0)
printf("leap year\n");
else
printf("not a leap year\n");
}
return 0;
}
