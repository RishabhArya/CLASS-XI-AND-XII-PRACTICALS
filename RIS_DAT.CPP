#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int d,y,m;
cout<<"enter the date"<<endl;
cin>>d;
cout<<"enter the month"<<endl;
cin>>m;
cout<<"enter the year"<<endl;
cin>>y;
if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
if((d>=1)&&(d<=31))
{
cout<<"date is valid";
}
else
cout<<"date is invalid";
if((m==4)||(m==6)||(m==9)||(m==11))
if((d>=1)&&(d<=30))
{
cout<<"date is valid";
}
else
cout<<"date is invalid";
if(m==2)
if((d>=1)&&(d<=28))
{
cout<<"date is valid";
}
else
cout<<"date is invalid";
getch();
}