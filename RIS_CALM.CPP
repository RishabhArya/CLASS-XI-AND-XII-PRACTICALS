#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
int opt,x,y;
do
{
clrscr();
cout<<"Chose Your Operation\n"<<"1.Addition\n"<<"2.Subtaction\n"<<"3.Multiplication\n"<<"4.Divison\n\n";
cin>>opt;
cout<<"Enter first no.";
cin>>x;
cout<<"Enter Second no.";
cin>>y;
a=x+y;
s=x-y;
m=x*y;
d=x/y;
switch(opt)
{
	case 1:cout<<a<<"_is the result of Addition\n";
	break;
	case 2:cout<<s<<"_is the result of Subtration\n";
	break;
	case 3:cout<<m<<"_is the result of Multiplication\n";
	break;
	case 4:cout<<d<<"_is the result of Divison\n";
	break;
}
cout<<"Do You Want To Continue\n"<<"1.Yes\n"<<"2.No\n"
cin>>i;
while(i=1)
getch();
}
}