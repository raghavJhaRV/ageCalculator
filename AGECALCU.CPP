#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
long int age,month,weeks,hours,sec,days;
printf("enter your age:");
scanf("%ld",&age);

printf("\nmonth is : %ld", age * 12);
printf("\nweeks is : %ld", age * 48);
printf("\ndays is : %ld", age * 365);
printf("\nhours is : %ld", age * 365*24 );
printf("\nminutes is : %ld", age * 365 * 24 * 60);
printf("\nsec is : %ld", age * 365 * 24 * 60 * 60);

getch();
}