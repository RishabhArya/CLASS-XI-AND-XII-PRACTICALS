#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
//To Check For A Perfect Number//
int i,r,f=1,n;
cout<<"Enter Any Number";
cin>>n;
for(i=2;i<n;i++)
{
 r=n%i;
 if (r==0)
 f=f+i;
}
if (f==n)
cout<<"The Number is a Perfect Number";
else
cout<<"The Number is not a Perfect Number";
getch();
}