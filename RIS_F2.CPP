#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
void main()
{
clrscr();
int i,fact,num,j;
cout<<"Enter The Limit of Operation";
cin>>num;
for(i=1;i<=num;i++)
{
	for(j=1;j<=i;j++)
	{
		j=i*j;
	}
    cout<<i<<"!"<<"_is"<<j<<endl;
}
getch();
}

