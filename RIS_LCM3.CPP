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
if((a%b==0)::(b%a==0))
{	
 if ((a%2==0)&&(b%2==0))
 {
  if(a>b)
{
  for(j=2;j<a;j++)
{
  f=a%j;
if((f==0)&&(b%j==0))
 {
  j=j;
  n=b*j;
  if ((n%a==0)&&(n%b==0))
  {
	n=n;
    break;
  }
 }
}
cout<<n<<"_is the LCM of numbers";
}
   if(b>a)
  {
    for(i=2;i<b;i++)
  {
    f=b%i;
    if((f==0)&&(a%i==0))
   {
     i=i;
	 n=a*i;
     if((n%a==0)&&(n%b==0))
		{
		 n=n;
		 break;
	   }
	}
    }
  cout<<n<<"_is the LCM of numbers";
  }
}
}
if ((a%b!=0)::(b%a!=0))
{
	cout<<a*b<<"_is the LCM of numbers"
}
getch();
}