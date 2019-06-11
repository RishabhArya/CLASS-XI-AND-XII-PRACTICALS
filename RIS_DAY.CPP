#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int date;
cout<<"Enter Any Date from 1 to 7 ";
cin>>date;
switch(date)
{
case 1:cout<<"The day is Monday";
       break;
case 2:cout<<"The day is Tuesday";
       break;
case 3:cout<<"The day is Wednesday";
       break;
case 4:cout<<"The day is Thursday";
       break;
case 5:cout<<"The day is Friday ";
       break;
case 6:cout<<"The day is Saturday";
       break;
case 7:cout<<"The day is Sunday";
       break;}
getch();
}