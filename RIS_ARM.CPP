#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
clrscr();
int i,num,r,s=0;
cout<<"Enter the number to check armstrong number";
cin>>num;
for(i=num;i>0;i=i/10)
{
 r=i%10;
 s=s+pow(r,3);
}
if (num==s)
cout<<"The number is Armstrong";
else
cout<<"The number is not an Armstrong no";
getch();
}