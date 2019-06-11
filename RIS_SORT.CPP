#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[20],size,l;
 cout<<"Enter the length of array";
 cin>>l;
 cout<<"enter the array";
 for(int k=1;k<=l;k++)
 {
  cin>>arr[k];
 }
 int pos,temp;
 for(int i=0;i<l;i++)
 {
  int small=arr[i];
  for(int j=i+1;j<l;j++)
  {
   if(small>arr[j])
   {
    small=arr[j];
    pos=j;
   }
  }
      temp=arr[i];
      arr[i]=arr[pos];
      arr[pos]=temp;
 }
 getch();
}