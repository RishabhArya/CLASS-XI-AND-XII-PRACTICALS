#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int a,n,i;
cout<<"Enter any number";
cin>>n;
for(i=2;i<n;i++)
{
  if(n%i==0)
  {
    a='p';
    break;
  }
}
if(a=='p')
cout<<"The Number is not a Prime";
else
cout<<"The Number is a Prime";
getch();
}