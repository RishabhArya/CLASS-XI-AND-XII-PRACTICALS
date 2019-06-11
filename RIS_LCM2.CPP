#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
//To  Find The LCM  of a no.//
int a,b,c,d,e,f,i,j,k,l,m,n;
//a,b,c,d,e,f for cin
//i,j,k,l,m,n for loopin//
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
    c=b%i;
    if((c==0)&&(a%i==0))
    {
      i=i;
     break;
    }
   }
   d=i*a;
   cout<<d<<"_is the LCM of no";
  }
} 
  if(a>b)
 {
   for(j=2;j<=a;j++)
   {
    c=a%j;
    if((c==0)&&(b%j==0))
    {
     j=j;
     break;
    }
   }
   d=j*b;
   cout<<d<<"_is the LCM of no";
 }
if (a%b!=0)
{
 for(k=2;k<=a;i++)
 {
	c=a%k;
	if(c==0)
	{
		k=k;break;
	}
 }	
	for(l=2;l<a;l++)
 {
	d=b%l;
	if(d==0)
	{
		l=l;break;
	}
 }	
if((k==a)&&(l==b))
{
	cout<<a*b<<"_is the Lcm of no's";
}
}
getch();
}