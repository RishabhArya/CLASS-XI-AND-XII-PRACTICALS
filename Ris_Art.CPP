#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,s,ar;
//To find The Area of a Triangle By Herons Method//
clrscr();
cout<<"Enter The First Lenth";
cin>>a;
cout<<"Enter The Second Lenth";
cin>>b;
cout<<"Enter The Third Length";
cin>>c;
if((a+b>c)&&(a+c>b)&&(b+c>a))
{
s=((a+b+c)/2);
ar=sqrt((s)*(s-a)*(s-b)*(s-c));
cout<<"The Area of Triangle is_"<<ar;
}
else 
cout<<"Triangle Does Not Exist";
getch();
}