#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
struct distance
{
 int feet;
 int inch;
}l1,l2;
distance prnsum(distance len1,distance len2)
{
 distance len3;
 len3.feet=len1.feet+len2.feet;
 len3.inch=len1.inch+len2.inch;
 if(len3.inch>12)
