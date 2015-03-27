/* calculation of bonus*/
#include<stdio.h>
int main()
{
int bonus,cy,yoj,yos;
printf(" enenter current year and year of joining\n");
scanf("%d%d",&cy,&yoj);
yos=cy-yoj;
if(yos>3)
{
bonus=2500;
printf("bonus=rs.%d\n",bonus);
}
return 0;
}
