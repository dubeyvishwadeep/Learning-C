/* check wheather rectangle is greatar than its perimeter*/
#include<stdio.h>
int main()
{
int l,b,area,peri;
printf("enter the length and breadth of the reactangle:");
scanf("%d%d",&l,&b);

area=l*b;
peri=2*(l+b);

if(area>peri)
printf(" area is greatar than its perimeter\n");
else
printf("area is lesser than its perimeter\n");
return 0;
}
