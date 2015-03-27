/*determine overtime pay of 10 employee*/
#include<stdio.h>
int main()
{
float otpay;
int hour,i=1;
while(i<=10)
{
printf("\n enter number of hours worked:");
scanf("%d",&hour);
if(hour>=40)
{
otpay=(hour-40)*12;
printf("no. of hours worked=%d\n overtime pay=rs.%f\n",hour,otpay);
}
else
{
otpay=0;
printf(" no. of hours worked (%d) is less than 40 hrs.\n no overtime pay\n",hour);
}
i++;
}
return 0;
}
