#include<stdio.h>
int main()
{
int number;
long int factorial;
printf("enter a number.\n");
scanf("%d",&number);
factorial=1;
while(number>0)
{
factorial=factorial*number;
--number;
}
printf("factorial of =%d",factorial);
return 0;
}
