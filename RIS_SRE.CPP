#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
//To Calculatethesum of series 1+npow(n/n1//
clrscr();
int i,j,n,num,den,nm,n2;
cout<<"Enter any Number";
cin>>n;
cout<<"Enter the limit to Series";
cin>>n2;
for(i=2;i<=n2;i++)
{
 num=pow(n,i);
 for(j=1;j<=i;j++)
{
 den=i*j;
}
nm=1+num/den;
}
cout<<nm<<"_is the sum of series";
getch();
}



