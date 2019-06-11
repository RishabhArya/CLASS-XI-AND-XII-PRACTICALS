#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void bsort(int a[10],int size)
{
 for(int i=0;i<size;i++)
{
 for(int j=0;j<((size-1)-i);j++)
 {
  if(a[j]>a[j+1])
  {
   int temp=a[i];
   a[i]=a[j+1];
   a[j+1]=temp;
  }
 }
}
}
void main()
{
 clrscr();
 int ar[10],s;
 cout<<"Enter the size of array";
 cin>>s;
 cout<<"Enter the array";
 for(int i=0;i<s;i++)
 {
  cin>>ar[i];
 }
 bsort(ar,s);
 for(int j=0;j<s;j++)
 {
  cout<<ar[j]<<" ";
 }
 getch();
}