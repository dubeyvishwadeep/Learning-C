/*calculate profit or loss*/
#include<stdio.h>
int main()
{
float cp,sp,p,l;
printf("\n enter cost price and selling price of the item:");
scanf("%f%f",&cp,&sp);

p=sp-cp;/* profit=selling price-cost price*/
l=cp-sp;/*loss=cost price-selling price*/
if(p>0)
printf(" the seller has made a profit of rs.%f\n",p);

if(l>0)
printf(" the seller is in loss by rs.%f\n",l);
if(p==0)
printf("there is no loss no profit\n");
return 0;
}
