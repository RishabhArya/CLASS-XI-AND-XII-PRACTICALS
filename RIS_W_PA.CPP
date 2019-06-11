#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int num,i,r,s=0;
cout<<"Enter any number";
cin>>num;
i=num;
while (i>=1)
{
r=i%10;
s=(s*10+r);
i=i/10;
}
cout<<s<<endl;
if (s==num)
cout<<"This no is a palandrom"<<endl;
else
cout<<"This no is not palandrom"<<endl;
getch();
}
