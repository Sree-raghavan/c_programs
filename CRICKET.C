#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void design(int ch)
{
  int arr[]={100,100,150,300,550,300,500,100,100,100};
	setbkcolor(2);//bg

	setfillstyle(SOLID_FILL,7);  //pitch
	setlinestyle(0,0,1);
	fillpoly(5,arr);
	line(150,100,205,300);              //pitchline
	line(450,100,500,300);
	//stumps
	setcolor(YELLOW);
	setlinestyle(0,0,3);
	line(140,190,160,170);  //left
	line(140,200,160,180);
	line(140,210,160,190);
	setcolor(RED);
	line(160,170,160,180);  //bails
	line(160,180,160,190);

	setcolor(YELLOW);
	setlinestyle(0,0,3);
	if(ch==0)
	{
	line(490,190,510,170);    //right
	line(490,200,510,180);
	line(490,210,510,190);
	setcolor(RED);
	line(510,170,510,180);
	line(510,180,510,190);
	}
	else
	{
	line(490,190,510,170);    //right bial if hitted
	line(490,200,510,170);
	line(490,210,510,210);
	setcolor(RED);
	line(490,170,490,180);
	line(490,220,490,230);
	}
	setlinestyle(0,0,1);
}
void main()
{       int i=140,j=150,k=0,gd=DETECT,gm,ch=0,hit=0;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");//clrscr();
	design(hit);
	printf("DO you want to throw ball(yes=1 or no=0):");
	scanf("%d",&ch);
	setlinestyle(0,0,1);
	if(ch==1)
	{
	 while(i!=430&&j!=250)
	  {
		cleardevice();
		design(hit);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,RED);
		circle(i,j,3);
		floodfill(i,j,WHITE);
		delay(200);
		i+=10;
		j+=3;

	  }
	while(i!=490&&j!=210)
	{
		cleardevice();
		design(hit);
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,RED);
		circle(i,j,3);
		floodfill(i,j,WHITE);
		delay(200);
		i+=10;
		j-=3;
	}
	hit=1;
	cleardevice;
	design(hit);
       }
	getch();
	closegraph();
}