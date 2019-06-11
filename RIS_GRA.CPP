#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\tc\\bgi");
 setcolor(RED);
 line(200,200,200,200);
 circle(100,100,50);
 circle(100,125,5);
 circle(200,100,50);
 circle(200,125,5);
 getch();
}
