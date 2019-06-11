#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
//To  Find The LCM  of a no.//
int a,b,i,p,f,n,q,j;
cout<<"Enter First Number";
cin>>a;
cout<<"Enter Second Number";
cin>>b;
if (a%b==0)
{
 if(b>a)
{
for(i=2;i<b;i++)
{
 f=b%i;
if((f==0)&&(a%i==0))
 {
  i=i;
  break;
 }
}
n=i*a;
cout<<n<<"_is the LCM of no";
}
if(a>b)
{
for(j=2;j<a;j++)
{
 f=a%j;
if((f==0)&&(b%j==0))
 {
  j=j;
  break;
 }
}
q=j*b;
cout<<q<<"_is the LCM of no";
}
}
if (a%b!=0)
{
cout<<a*b<<"_is the LCM of no.";
}
getch();
}