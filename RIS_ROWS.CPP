#include<iostream.h>
#include<conio.h>
#include<math.h>
void rowswap(int ar[10][10],int size)
{
 int k,l,i,j;
 for(i=0;i<size;i++)
 {
  temp[k][l]=ar[0][i];
  ar[0][i]=ar[size-1][i];
  ar[size-1][i]=temp;
 }
}
void main()
{
  clrscr();
  int array[10][10];
  cout<<"Enter the size of the array";
  cin>>size;
  cout<<"Enter the array";
  int i,j;
  for(i=0;i<size;i++)
  {
  for(j=0;j<size;j++)
   {
    cin>>array[i][j];
   }
  }
  cout<<"_Before_Swaping_";
  for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
   {
    cout<<array[i][j]",";
   }
   cout<<endl;
  }
  rowswap(array,size);
  cout<<"_After_Swaping_";
  for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
   {
    cout<<array[i][j]",";
   }
   cout<<endl;
   }
getch();
}