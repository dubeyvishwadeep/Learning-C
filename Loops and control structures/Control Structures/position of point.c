/*determine position of point with respect x and y axis*/
#include<stdio.h>
int main()
{
int x,y;
printf("\n enter the x and y coordinates of a point:");
scanf("%d%d",&x,&y);
if(x==0&&y==0)
printf("points lies on orgin\n");
else
if(x==0&&y!=0)
printf(" points lies on y axis\n");
else
if(x!=0&&y==0)
printf("points lies on y axis\n");
else
printf("points neither lies on any axis,nor orgin\n");
return 0;
}
