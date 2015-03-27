/*insurance of driver-using to logical oprator*/
#include<stdio.h>
int main()
{
char sex,ms;
int age;
printf(" enter age se,and martuial status");
scanf("%d%c%c",&age,&sex,&ms);
if((ms=='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
printf("driver is insured\n");
else
printf("driver is not insured\n");
return 0;
}
