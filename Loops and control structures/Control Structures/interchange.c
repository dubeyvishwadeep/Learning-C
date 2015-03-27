/* interchange of contents variable a & b*/
#include<stdio.h>
int main()
{
int c,d,e;
printf("\n enter the number at location c:");
scanf("%d",&c);
printf("\n enter the number at location d:");
scanf("%d",&d);
/*interchange content of two varible using third variable as temprory store*/
e=c;
c=d;
d=e;
printf("\n new number at locatoin c=%d\n",c);
printf("\n new number at location d=%d\n",d);
return 0;
}
