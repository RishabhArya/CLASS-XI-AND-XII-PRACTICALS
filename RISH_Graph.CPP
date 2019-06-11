#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT, gm;
int poly[12]={350,450, 350,410, 430,400, 350,350,
300,430, 350,450 };
initgraph(&gd, &gm, "");
circle(100,100,50);
outtextxy(75,170, "Circle");
rectangle(200,50,350,150);
outtextxy(240, 170, "Rectangle");
ellipse(500, 100,0,360, 100,50);
outtextxy(480, 170, "Ellipse");
line(100,250,540,250);
outtextxy(300,260,"Line");
sector(150, 400, 30, 300, 100,50);
outtextxy(120, 460, "Sector");
drawpoly(6, poly);
outtextxy(340, 460, "Polygon");
getch();
closegraph();
}