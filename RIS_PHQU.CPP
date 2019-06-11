#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
int a,b,i,opt;
do
{
clrscr();
cout<<"Which Physical Quantity Do You Want To Calculate\n"<<"1.Speed\n"<<"2.Energy\n"<<"3.Gravitational Pull\n";
cin>>opt;
switch(opt)
{
	case 1:cout<<"Enter Distance Travelled in Kilometers\n";
	       cin>>a;
	       cout<<"Enter Time Taken in hours";
	       cin>>b;
	       cout<<a/b<<"km/h is your Speed";
	break;
	case 2:cout<<"Enter Mass in Kilograms";
	       cin>>a;
	       cout<<"Enter the height of object";
	       cin>>b;
	       cout<<a*b*10<<"Joules is the energy of Body";
	break;
	case 3:cout<<"Enter Mass in Kilograms";
	       cin>>a;
	       cout<<a*10<<"is the Gravitaitional Pull on the object"  ;
	break;
}
cout<<"\nDo You Want To Continue\n"<<"1.Yes\n"<<"2.No\n";
cin>>i;
}while(i==1);
getch();
}