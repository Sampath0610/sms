#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
scanf("%d",&yr);
if(yr%4==0)
 printf("Yes");
else if(yr%400==0)
 printf("Yes");
else if(yr%100==0)
 printf("No");
else
 printf("No");
getch();
}