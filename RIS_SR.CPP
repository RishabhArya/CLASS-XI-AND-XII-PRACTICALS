#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
clrscr();
int num,i,sum=0;
cout<<"Enter the no of terms";
cin>>num;
for(i=1;i<=num;i++)
{
for(int j=1;j<=i;j++)
sum=sum+j;
}
cout<<sum<<"_is the sum";
getch();
}