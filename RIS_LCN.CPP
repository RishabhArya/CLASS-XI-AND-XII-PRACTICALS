#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 clrscr();
 //To  Find The LCM  of a no.//
 int a,b,i,p,f,n,q,j,num;
 cout<<"Enter Bigger Number first";
 cin>>a;
 cout<<"Enter Smaller Number";
 cin>>b;
if((a%2==0)&&(b%2==0))
{
	if(a%b==0)
{
for(i=2;i<a;i=i+2)
{
  f=a%i;
if((f==0)&&(b%i==0))
{
  i=i;
  n=b*i;
if ((n%a==0)&&(n%b==0))
 {
 n=n;
 break;
 }
}
}
cout<<n<<"_is the LCM of numbers";
}
}
if((a%3==0)&&(b%3==0))
{
	for(j=1;j<a;j=j+2)
	{
		f=a%j;
		if((f==0)&&(b%j==0))
		num=b*j;
	if((num%a==0)&&(num%b==0))
	{
		num=num;
		break;
	}
	}	
}
cout<<num<<"_ is the LCM of numbers";
if(a%b!=0)
{
cout<<a*b<<"_is the LCM of the Number";
}
getch();
}