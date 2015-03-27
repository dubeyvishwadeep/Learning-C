/* check wheather triangle is valid or not*/
#include<stdio.h>
int main()
{
int angle1,angle2,angle3;
printf("\n enter three angle of this triangle:");
scanf("%d%d%d",&angle1,&angle2,&angle3);
if((angle1+angle2+angle3)==180)
printf("the triangle is a valid triangle");
else
printf("the triangle is a invalid triangle");
return 0;
}
