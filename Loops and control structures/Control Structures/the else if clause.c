/*if else ladder demo*/
#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,per;
per=(m1+m2+m3+m4+m5)/500*100;
if(per>=60)
printf(" 1 st division\n");
else if(per>=50)
printf(" 2 nd division\n");
else if(per>=40)
printf("third division\n");
else
printf("fail\n");
return 0;
}
