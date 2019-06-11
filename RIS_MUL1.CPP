#include<iostream.h>
#include<conio.h>
void swap(int ar[20],int l)
{
 for(int i=0;i<=l;i++)
 {
  int x=ar[i];
  if(x%10==0)
  {
   ar[i]=10;
  }
 else
 {
  ar[i]=1;
 }
 }
}
void main()
{
 clrscr();
 int array[20],l;
 cout<<"Enter the length of array";
 cin>>l;
 cout<<"Enter the array";
 for(int i=0;i<l;i++)
 {
  cin>>array[i];
 }
 swap(array,l);
 for(i=0;i<l;i++)
 {
  cout<<array[i]<<" ";
 }
getch();
}