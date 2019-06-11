#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int i,num,sum,f=0,s=1;
cout<<"Enter the number to series";
cin>>num;
cout<<f<<s;
for(i=2;i<=num;i++)
{
sum=f+s;
f=s;
s=sum;
cout<<sum;
}
getch();
}