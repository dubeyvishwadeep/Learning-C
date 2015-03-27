/*find new number by adding 1 to each digit*/
#include<stdio.h>
int main()
{
int num,a,n;
long int newnum=0;
printf("\n enter a five digit number (less rthan 32767):");
scanf("%d",&num);
a=num/10000+1;
n=num%10000;
newnum=newnum+a*10000L;

a=n/1000+1;
n=num%1000;
newnum=newnum+a*1000;

a=n/100+1;
n=num%100;
newnum=newnum+a*100;

a=n/10+1;
n=n%10;
newnum=newnum+a*10;

a=n+1;
newnum=newnum+a;

printf("old number=%d,new number=%ld\n",num,newnum);
return 0;
}
