#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void main()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\tc\\bgi");
 int midx, midy;
 // draw a border around the screen //
 rectangle(0,0,602,500);
 rectangle(602,500,0,0);
 //heading
 settextstyle(4,0,5);
 outtextxy(250,8,"Panda");
 //ears
   //left
 fillellipse(100,100,50,50);
  //inner
 setcolor(RED);
 setfillstyle(SLASH_FILL,RED );
 fillellipse(100,100,40,40);
  //right
 setcolor(WHITE);
 setfillstyle(SLASH_FILL,RED );
 fillellipse(500,100,50,50);
	 //inner
 setcolor(RED);
 circle(500,100,40);
 //face
 setcolor(WHITE);
 circle(300,250,200);
 //eyes
 setfillstyle(CLOSE_DOT_FILL,RED );
 circle(200,125,40);
 circle(400,125,40);
 //pupile
 circle(200,150,12);
 pieslice(200,150,300,0,10);
 circle(400,150,12);
 pieslice(400,150,300,0,10);
 //nose
 pieslice(300,250,300,0,30);
 //dimples
 setcolor(RED);
 //right
 arc(400,275,0,270,30);
 arc(405,275,100,220,27);
 arc(395,275,50,0,32);
 arc(390,275,150,50,33);
 //left
 arc(160,275,0,270,30);
 arc(165,275,100,220,27);
 arc(155,275,50,0,32);
 arc(150,275,150,50,33);
 //Smile
 setcolor(RED);
 line(250,350,350,350);
 arc(300,350,210,-30,20);
 arc(300,350,200,-20,30);
 arc(300,350,190,-10,40);
 arc(300,350,180,0,50);
 arc(300,350,180,0,50);
 getch();
}