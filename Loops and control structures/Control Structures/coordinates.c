/* check wheather three points are co-linear*/
#include<stdio.h>
int main()
{
int x1,y1,x2,y2,x3,y3;
int s1,s2,s3;
printf("\n enter the value of x1 and y1 coordinates of the first point:");
scanf("%d%d",&x1,&y1);

printf("\n enter the value of x2 and y2 coordinates of first point:");
scanf("%d%d",&x2,&y2);

printf("\n enter the value of x3 and y3 coordinates of the first point:");
scanf("%d%d",&x3,&y3);
/* calculate slope of line between each pair of point*/
s1=(x2-x1)/(y2-y1);
s2=(x3-x1)/(y3-y1);
s3=(x3-x2)/(y3-y2);
if((s1==s2)&&(s1==s3))
printf(" points are co-linear");
else
printf("points are NOT co-linear");
return 0;
}
