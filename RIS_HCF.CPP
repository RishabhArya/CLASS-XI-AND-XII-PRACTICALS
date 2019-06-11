#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,i,s,j,f;
cout<<"Enter First number";
cin>>a;
cout<<"Enter Second number";
cin>>b;
if(a>b)
{
 for(i=2;i<a;i++)
 {
  s=a%i;
  if((s==0)&&(b%i==0))
  {
  i=i;
  break;
  }
cout<<i<<"_is the HCF of the number";
}
}
if (b>a)
{
 for(j=2;j<b;j++)
 {
  f=b%i;
  if((f==0)&&(a%j==0))
  {
  j-j;
  break;
  }
}
}
cout<<j<<"_is the HCF of the number";
getch();
}

