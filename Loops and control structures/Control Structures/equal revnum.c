/* chech weather number and its reversed number are equal*/
#include<stdio.h>
int main()
{
int n,a,b,num;
long int revnum=0;

printf("\n enter a five digit number (less than 32767):");
scanf("%d",&n);

num=n;
a=n%10;/*last digit*/
n=n/10;/*remaning digit*/
revnum=revnum+a*10000L;

a=n%10;
n=n/10;
revnum=revnum+a*1000;

a=n%10;
n=n/10;
revnum=revnum+a*100;

a=n%10;
n=n/10;
revnum+a*10;

a=n%10;
revnum=revnum+a;

if(revnum==num)
printf("given number & its reserved number are equal\n");
else
printf("given number &its reserved number  are not equal\n");
return 0;
}
