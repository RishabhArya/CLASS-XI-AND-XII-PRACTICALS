#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float  a,i,s,factorial=1;
cout<<"Enter The Number Whose Factorial You Want to Find";
cin>>a;
for(i=1;i<=a;i++)
{
factorial=factorial*i;
}
cout<<factorial;
getch();
}