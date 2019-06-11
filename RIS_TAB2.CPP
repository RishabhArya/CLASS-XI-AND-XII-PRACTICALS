#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int i,n,p;
cout<<"enter a number whose table is to be displayed";
cin>>n;
for(i=1;i<=10;i++)
{
p=i*n;
cout<<n<<"*"<<i<<"="<<p<<endl;
}
getch();
}