/*decide zodiac sign based on date and month of birth*/
#include<stdio.h>
int main()

{
int d, m;
printf("\nenter day and month of birth:");
scanf("%d%d",&d,&m);
if(d>=22&&m==12||d<=19&&m==1)
printf(" capricon\n");
if(d>=20&&m==1||d<=17&&m==2)
printf("aquarius\n");
if(d>=18&&m==2||d<=19&&m==3)
printf("pises\n");
if(d>=20&&m==3||d<=19&&m==4)
printf("aries\n");
if(d>=20&&m==4||d<=20&&m==5)
printf("taurus\n");
if(d>=21&&m==5||d<=20&&m==6)
printf("gemin\n");
if(d>=21&&m==6||d<=22&&m==7)
printf("cancer\n");
if(d>=23&&m==7||d<=22&&m==8)
printf("leo\n");
if(d>=23&&m==8||d<=22&&m==9)
printf("virgo\n");
if(d>=23&&m==9||d<=22&&m==10)
printf("libra\n");
if(d>=23&&m==10||d<=21&&m==11)
printf("scorpion\n");
if(d>=22&&m==11||d<=21&&m==12)
printf("saggitarius\n");
return 0;
}
