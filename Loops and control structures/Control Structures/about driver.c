/* insurence of driver-withought using logical oprator*/
#include<stdio.h>
int main()
{
char sex,ms;
int age;
printf("enter age,sex,martial status");
scanf("%d%c%c",&age,&sex,&ms);
if(ms=='M')
printf("driver is insured\n");
else
{
if(sex=='M')
{
if(age>30)
printf("driver is insured\n");
else
printf("driver is not insured\n");
}
else
{
if(age>25)
printf("driver is insured\n");
else
printf("driver is not insured\n");
}
}
return 0;
}
