#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
clrscr();
int num,i,j,t,f=1,sum=0;
cout<<"Enter the no of terms";
cin>>num;
for(i=num;i>=1;i++)
{
for(j=i;j>=0;j--)
 {
 f=f*j;
 t=1/f;
 sum=sum+t;
 }
}
cout<<sum;
getch();
}