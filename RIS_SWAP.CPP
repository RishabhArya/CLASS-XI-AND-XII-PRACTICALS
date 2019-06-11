#include<iostream.h>
#include<conio.h>
void swap(int ar[20],int l)
{
 for(int i=0;i<=l;i=i+2)
 {
  ar[i]=ar[i+1];ar[i+1]=ar[i];
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