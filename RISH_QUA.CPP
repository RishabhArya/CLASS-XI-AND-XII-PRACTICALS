#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c,d,r2,r1;
cout<<"Enter the values of a,b,c"<<endl;
cin>>a>>b>>c;
d=b*b-4*a*c;
if (a==0)
cout<<"this is not a quadratic eq."<<endl;
else if (d<0)
cout<<"Roots are imaginery"<<endl;
else if (d==0)
cout<<"roots are equal";
else if (d>=0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<r1<<"_is the first root"<<endl;
cout<<r2<<"_is the second root"<<endl;
}
getch();
}

