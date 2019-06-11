#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
clrscr();
int num,i,s=1;
cout<<"Enter any number";
cin>>num;
for(i=1;i<=num*2;i=i+2)
{
s=1+pow(i,2);
}
cout<<s;
getch();
}