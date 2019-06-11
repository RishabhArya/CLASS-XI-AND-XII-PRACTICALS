#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
//To test the number to be even or odd//
int n,i,z;
cout<<"Enter Any Number";
cin>>n;
for(i=2;i<n;i++)
{
z=n%2;
}
if (z==0)
cout<<"The Number is even";
else
cout<<"The Number is odd";
getch();
}