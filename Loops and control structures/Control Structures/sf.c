#include<stdio.h>
#include<conio.h>
void main()
{
char ch;

printf("enter a charater:");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
{
printf(" upper case letter");
}
else if(ch>=97&&ch<=122)
printf("\n lower case letter");

else if(ch>=48&&ch<=57)
printf("\n digit");

else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
{
printf("\n special case symbol");

}
getch();
}
