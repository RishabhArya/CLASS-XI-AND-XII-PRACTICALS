#include<graphics.h>
#include<conio.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
getimage(1000,1000,1000,1000,"C:\\Documents and Settings\\student\\My Documents\\Winter.bitmap");
putimage(1000,1000,"C:\\Documents and Settings\\student\\My Documents\\Winter.bitmap",NOT_PUT);
getch();
}