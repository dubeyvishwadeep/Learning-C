/* to find absolute value of number entered throgh the key board*/
#include<stdio.h>
int main()
{
int no;
printf("enter the number:");
scanf("%d",&no);
if(no>0)
no=no*-1;
printf(" the obsolute value of given number is %d\n",no);
return 0;
}
