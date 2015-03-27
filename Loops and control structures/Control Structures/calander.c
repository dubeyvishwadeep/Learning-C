#include<stdio.h>
int main(void)
{
int year,differ,lp_year,day_type;
long int days;
printf("please enter the year:");
scanf("%d",&year);
year=year-1;
differ=year-1900;


if(differ<100)
{
lp_year=differ/4;
days=(366*lp_year)+((differ-lp_year)*365+365+1);
day_type=days%7;
}
if(differ>=100)
{
lp_year=(differ/4)-(differ/100)+1+((year-2000)/400);
days=(366*lp_year)+((differ-lp_year)*365+365+1);
day_type=days%7;
}
if(day_type==0)
printf("\n sunday");

if(day_type==1)
printf("\n monday");

if(day_type==2)
printf("\n tuesday");

if(day_type==3)
printf("\n wednesday");

if(day_type==4)
printf("  thursday");

if(day_type==5)
printf("\n friday");

if(day_type==6)
printf("\n sataurday");
return 0;
}
