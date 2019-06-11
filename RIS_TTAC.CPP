#include<iostream.h>
#include<conio.h>
int win(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
 if((a==e)&&(e==i))
 {
  return 1;
 }
  if((g==e)&&(e==c))
 {
  return 1;
 }
  if((a==b)&&(b==c))
 {
  return 1;
 }
  if((d==e)&&(e==f))
 {
  return 1;
 }
  if((g==h)&&(h==i))
 {
  return 1;
 }
    if((a==d)&&(d==g))
 {
  return 1;
 }

   if((b==e)&&(e==h))
 {
  return 1;
 }

  if((c==f)&&(f==i))
 {
  return 1;
 }
 if((a==d)&&(d==g)&&(g==b)&&(b==e)&&(h==c)&&(c==f)&&(f==i)&&(i==a))
 {
  return -1;
 }
 else
 {
  return 0;
 }
}
void game()
{
 cout<<"    1    |      4      |      7      |"<<endl;
 cout<<"         |             |             |"<<endl;
 cin>>a>>d>>g;
 cout<<"______________________________________"<<endl;
 cout<<"         |             |             |"<<endl;
 cout<<"   2     |      5      |      8      |"<<endl;
 cin>>b>>e>>h;
 cout<<"______________________________________"<<endl;
 cout<<"         |             |             |"<<endl;
 cout<<"   3     |      6      |      9      |"<<endl;
 cin>>c>>f>>i;
}
void main()
{
 int a,b,c,d,e,f,g,h,i,x;
 game
 x=win(a,b,c,d,e,f,g,h,i);
 getch();
}

