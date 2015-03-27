/*find area of triangle,given its sides*/
#include<stdio.H>
#include<math.h>
int main()
{
float a,b,c,sp,area;
printf("\n enter sides of triangle:");
scanf("%f%f%f",&a,&b,&c);
sp=(a+b+c)/2;
area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
printf("area of triangle=%f\n",area);
return 0;
}
