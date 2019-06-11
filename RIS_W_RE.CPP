#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int num,i,r,s,sum;
cout<<"Enter any number";
cin>>num;
i=num;
while (i>=1)
{
r=i%10;
cout<<r;
i=i/10;
}
getch();
}
