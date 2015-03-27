/* reverse digit of a 5 digit number*/
#include<stdio.h>
int main()
{
int n,a,b;
long int revnum=0;
printf("\n enter a five digit number(less than 32767):");
scanf("%d",&n);
a=n%10;/*last digit*/
n=n/10;/*remaning digit*/
revnum=revnum+a*10000l;

a=n%10;/*4 th digit*/
n=n/10;/*remaning digit*/
revnum=revnum+a*1000l;

a=n%10;/*3 rd digit*/
n=n/10;/*remaning digit*/
revnum=revnum+a*100l;

a=n%10;/*2 nd digit*/
n=n/10;/*remaning digit*/
revnum=revnum+a*10l;

a=n%10;/* that is 1 st digit*/
revnum=revnum+a;

printf(" the reverse number is %ld\n",revnum);/* the %ld specifier is use to print long intiger*/
return 0;
}
