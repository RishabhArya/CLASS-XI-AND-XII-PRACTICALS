#include<iostream.h>
#include<conio.h>
#include<math.h>
void colswap(int ar[10][10],int size,int sizze)
{
 int k,l,i,j,temp[1][1];
 for(i=0;i<sizze;i++)
 {
  temp[k][l]=ar[i][0];
  ar[i][0]=ar[i][size-1];
  ar[i][size-1]=temp[k][l];
 }
}
void main()
{
  clrscr();
  int array[10][10],size,sizze;
  cout<<"Enter the size of the array horizontaly";
  cin>>size;
  cout<<"Enter the size of the array vertically";
  cin>>sizze;
  cout<<"Enter the array";
  int i,j;
  for(i=0;i<size;i++)
  {
  for(j=0;j<sizze;j++)
   {
    cin>>array[i][j];
   }
  }
  cout<<"_Before_Swaping_"<<endl<<endl;
  for(i=0;i<size;i++)
  {
   for(j=0;j<sizze;j++)
   {
    cout<<array[i][j]<<"    ";
   }
   cout<<endl;
  }
  colswap(array,size,sizze);
  cout<<"_After_Swaping_"<<endl<<endl;
  for(i=0;i<size;i++)
  {
   for(j=0;j<sizze;j++)
   {
    cout<<array[i][j]<<"    ";
   }
   cout<<endl;
  }
  getch();
}