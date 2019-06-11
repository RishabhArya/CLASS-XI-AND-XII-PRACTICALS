#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int s,c;
cout<<"Enter your Sales-";
cin>>s;
if (s>30000)
{
c=(s*1.5);
cout<<c<<"_is your commision"<<endl;
}
else if ((s>22000)&&(s<30000))
{
c=(s*0.1);
cout<<c<<"_is your commision"<<endl;
}
else if ((s>12000)&&(s<22000))
{
c=(s*0.7);
cout<<c<<"_is your commision"<<endl;
}
else if ((s>5000)&&(s<12000))
{
c=(s*0.6);
cout<<c<<"_is your commision"<<endl;
}
else if ((s>0)&&(s<5000))
{
cout<<0<<"_is your commision"<<endl;
}
getch();
}