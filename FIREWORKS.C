#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<math.h>
int main()
{
int i=0,j;
int gd=DETECT,gm,x,y;
int color;
int p=300,q=250,r=100;

initgraph(&gd,&gm,"C:\\TurboC3\\BGI");

while(!kbhit())
{
color=rand()%15+1;
settextstyle(1 ,0,4);
setcolor(color);
setcolor(color+1);

putpixel(p+rand()%300,q+rand()%240,r+rand()%16);
putpixel(p-rand()%300,q+rand()%240,r+rand()%16);
putpixel(p+rand()%300,q-rand()%240,r+rand()%16);
putpixel(p-rand()%300,q-rand()%240,r+rand()%16);
setcolor(color+2);
setcolor(color+3);
x=rand()%1366;
y=rand()%768;
for(i=768;i!=y;i--)
{
if(i%50==0)
delay(1);
putpixel(x,i,14);
}
for(i=768;i!=y;i--)
{
if(i%70==0)
delay(1);
putpixel(x,i,0);
}
for(j=0;j!=100;j+=5)
{
for(i=0;i!=360;i+=15)
{
setcolor(color);
line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));

}
}
setcolor(0);
for(j=0;j!=100;j++)
{
for(i=0;i!=360;i+=15)
line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));
}
}
getch();
closegraph();
}