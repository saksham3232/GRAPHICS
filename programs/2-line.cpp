//Write a c program to draw a line using graphical function

#include<stdio.h> 
#include<graphics.h> 
#include<conio.h> 
 
int main() 
{ 
 int gd = DETECT, gm; 
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
 
 line(200,200,300,300);
 getch(); 
  
 closegraph(); 
 return 0; 
}