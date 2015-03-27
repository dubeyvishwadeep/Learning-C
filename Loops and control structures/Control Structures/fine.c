/* determine fine for late return of bokk*/
#include<stdio.h>
int main()
{
int days;
float fine;

printf("\n enter  the number of days by which member is late");
scanf("%d",&days);
if(days>=1&&days<=5)
{
fine=days*50/100.0;
printf("fine=rs.%f\n",fine);
}
else
{
if(days>=6&&days<=10)
{
fine=5*50/100.0+(days-5)*1;
printf("fine=rs.%f\n",fine);
}
else
{
if(days>=11&&days<=30)
{
fine=5*50/100.0+5*1+(days-10)*5;
printf("fine=rs.%f\n",fine);
}
else
printf("membership is cancelled\n");}
}
return 0;
}
