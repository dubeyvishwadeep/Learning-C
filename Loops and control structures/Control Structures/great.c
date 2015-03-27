/*determine greatest of three numbers using conditional oprator*/
#include<stdio.h>
int main()
{
int n1,n2,n3,great;
printf("\n enter the number:");
scanf("%d%d%d",&n1,&n2,&n3);
great=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
printf("greatest number is:%d",great);
return 0;
}
