/* check wheather number is even orr odd*/
#include<stdio.h>
int main()
{
int num;
printf("enter the number required even orr odd\n");
scanf("%d",&num);
if(num%2==0)/*reminder after divisble by 2*/
printf(" number is EVEN number");
else
printf("number is ODD number");
return 0;
}
