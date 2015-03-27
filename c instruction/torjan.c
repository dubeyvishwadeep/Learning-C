/* find sum of first and last digit of a four digit number*/
#include<stdio.h>
int main()
{
int n,a,sum=0;
printf("\n enter a four digit number:");
scanf("%d",&n);
a=n/1000;/*first digit*/
sum=sum+a;/* sum update with addition of 1 digit*/
a=n%10;/*last digit*/
sum=sum+a;/* sum updated with addition of last digit*/
printf(" sum of first and last digit of %d=%d\n",n,sum);
return 0;
}
