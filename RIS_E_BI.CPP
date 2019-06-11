#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
char name[10];
int u,p,f,s,t;
cout<<"Enter your Name";
cin>>name;
cout<<"Enter your number of units consumed";
cin>>u;
f=(u*0.40)+50;
s=(40+(u-100)*0.50)+50;
t=40+50+((u-200)*0.60)+50;
if(u<=100)
{
cout<<"Mr."<<name<<f<<"_is your electricity bill for the month";
}
else if ((u>100)&(u<=200))
{
cout<<"Mr."<<name<<s<<"is your electricity bill for the month";
}
else if (u>200)
{
cout<<"Mr."<<name<<t<<"_is your electricity bill for the month";
}
getch();
}