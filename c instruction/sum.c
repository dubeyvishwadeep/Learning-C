/* sum of digit a 5 digit number*/
#include<stdio.h>
int main()
{
int num, a,n;
int sum =0;/* initilize to zero,otherwise it will contain a garbage value*/
printf("\n enter a 5 digit number(less than 32767):");
scanf("%d",&num);
a=num%10;/* lst digit extracted as reminder*/
n=num/10;/*remaning digit*/
sum=sum+a;/* sum updated with addition of extracted digit*/
a=n%10;/*4th digit*/
n=num/10;
sum=sum+a;
a=n%10;
n=num/10;
sum=sum+a;
a=n%10;
n=num/10;
sum=sum+a;
a=n%10;
sum=sum+a;
printf("the sum of 5(five) digit of %d is %d\n",num,sum);
return 0;
}

