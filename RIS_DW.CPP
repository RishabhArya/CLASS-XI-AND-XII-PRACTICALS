#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int i=1,num;
cout<<"Enter Any Number";
cin>>num;
do
{
 cout<<"&\n";
 i++;
}
while(i==num) ;
getch();
}