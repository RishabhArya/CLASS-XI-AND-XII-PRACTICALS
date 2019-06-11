#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,a,s,m,d;
char opt;
cout<<"Enter first no.";
cin>>x;
cout<<"Enter Second no.";
cin>>y;
a=x+y;
s=x-y;
m=x*y;
d=x/y;
cout<<"Which operation would you like to do-"<<endl;
cout<<"press 'a' for addition"<<endl;
cout<<"press 's' for subtration"<<endl;
cout<<"press 'm' for multiplication"<<endl;
cout<<"press 'd' for division"<<endl;
cin>>opt;
if (opt=='a')
cout<<a<<"_is your answer";
else if (opt=='s')
cout<<s<<"_is your answer";
else if (opt=='m')
cout<<m<<"_is your answer";
else if (opt=='d')
cout<<d<<"_is your answer";
getch();
}