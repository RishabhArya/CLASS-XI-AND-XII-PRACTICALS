#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
clrscr();
int i,r,digit=0,num;
cout<<"Enter the number to check for palandrom number";
cin>>num;
for(i=num;i>0;i=i/10)
{
 r=i%10;
 digit=(digit*10)+r;
}
if (digit==num)
cout<<"The number is Palandrom";
else
cout<<"The number is not an Palandrom no";
getch();
}