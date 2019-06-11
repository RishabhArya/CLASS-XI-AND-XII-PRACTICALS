#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int a,i,p=0,n=0,z=0;
for (i=0;i<=10;i++)
{
cout<<"Enter any number";
cin>>a;
if (a>0)
p=a+1;
else if (a<0)
n=n+1;
else if (a=0)
z=z+1;
}
cout<<p<<"_is the number of positive terms"<<endl;
cout<<n<<"_is the number of negative terms"<<endl;
cout<<z<<"_is the number of zero terms"<<endl;
getch();
}