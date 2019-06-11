#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
void main()
{
char name[10];
int u,p,f,s,t;
cout<<"Enter your Name";
cin>>name;
cout<<"Enter your number of units consumed";
cin>>u;
f=(u*0.40)+50;
s=(100*0.40)+(u-100)*0.50+50;
t=(100*0.40)+(200*0.50)+((u-300)*0.60);
if ((u=<100)&&(u>101))
{
cout<<"Mr."name<<p<<"_is your electricity bill for the month";
}
else if ((u>100)&&(u=<300)
{
cout<<"Mr."name<<s<<"is your electricity bill for the month":
}
if (u>300)
{
cout<<"Mr."name<<t<<"_is your electricity bill for the month";
}
getch():
}}