#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>

void draw_circleO(int r){
	int p, x, y, j;
	p = 3 -2*r;
	x = 0;
	y = r;
	while(j != 10){
	      circle(320, 240, j);
	      j++;
	}
	setcolor(BLUE);
	outtextxy(317,237,"O");
	setcolor(WHITE);
	putpixel(320+x,240-y,WHITE);
	while(x <= y) {
		if(p < 0){
			x = x+1;
			y = y;
			p = p+(4*x)+2;
		}
		else {
			x = x+1;
			y = y-1;
			p = p+4*x-4*y+2;
		}
		putpixel(320+x,240-y,WHITE);
		putpixel(320+x,240+y,WHITE);
		putpixel(320-x,240+y,WHITE);
		putpixel(320-x,240-y,WHITE);
		putpixel(320+y,240-x,WHITE);
		putpixel(320+y,240+x,WHITE);
		putpixel(320-y,240+x,WHITE);
		putpixel(320-y,240-x,WHITE);
	}
}



void draw_circleH(int r,int x,int y){
	int p, x1, y1, j=1;
	p = 3 -2*r;
	x1 = 0;
	y1 = r;
	while(j != 10){
	      circle(x, y, j);
	      j++;
	}
	setcolor(BLUE);
	outtextxy(x-3,y-3,"H");
	setcolor(WHITE);
	putpixel(x+x1,y-y1,WHITE);
	while(x1 <= y1) {
		if(p < 0){
			x1 = x1+1;
			y1 = y1;
			p = p+(4*x1)+2;
		}
		else {
			x1 = x1+1;
			y1 = y1-1;
			p = p+4*x1-4*y1+2;
		}
		putpixel(x+x1,y-y1,WHITE);
		putpixel(x+x1,y+y1,WHITE);
		putpixel(x-x1,y+y1,WHITE);
		putpixel(x-x1,y-y1,WHITE);
		putpixel(x+y1,y-x1,WHITE);
		putpixel(x+y1,y+x1,WHITE);
		putpixel(x-y1,y+x1,WHITE);
		putpixel(x-y1,y-x1,WHITE);
	}
}
void hydrgen(float x0,float x)
{
	int i,k;
	float radian1,radian2,x1,x2,y1,y2;
	draw_circleH(30,x0,240);
	draw_circleH(30,x,240);
	for(i=0; i<3; i++) {
		//for(degree=0; degree<=360; degree++) {
			radian1 = (3.142/180)*33;
			radian2 = (3.142/180)*327;
			x1 = (30*cos(radian1));
			y1 = (30*sin(radian1));
			x2 = (30*cos(radian2));
			y2 = (30*sin(radian2));
			setcolor(RED);
			circle(x0+x1, 240+y1, 5);
			k=4;
			while(k >= 0){
				circle(x0+x1,240+y1, k);
				k--;
			}
			circle(x0+x2, 240+y2, 5);
			k=4;
			while(k >= 0){
				circle(x0+x2,240+y2, k);
				k--;
			}
			setcolor(WHITE);
			//delay(10);
			//cleardevice();

		//}
	}

}
void oxygen()
{
	int  x11, x12, x21, x22, x23, x24, x25, x26;
	int y11, y12, y21, y22, y23, y24, y25, y26;
	float degree, r1, r2, r3, r4, r5, r6, r11, r12;
	int i,k;
	draw_circleO(30);
	draw_circleO(50);
	for(i=0; i<2; i++) {
		for(degree=360; degree >= 0; degree--) {
			r11 = (3.142/180)*(degree+(4*i));
			r12 = (3.142/180)*((degree+180)+(4*i));
			r1 = (3.142/180)*degree;
			r2 = (3.142/180)*(degree+60);
			r3 = (3.142/180)*(degree+120);
			r4 = (3.142/180)*(degree+180);
			r5 = (3.142/180)*(degree+240);
			r6 = (3.142/180)*(degree+300);
			x11 = (30*cos(r11));
			y11 = (30*sin(r11));
			x12 = (30*cos(r12));
			y12 = (30*sin(r12));
			x21 = (50*cos(r1));
			y21 = (50*sin(r1));
			x22 = (50*cos(r2));
			y22 = (50*sin(r2));
			x23 = (50*cos(r3));
			y23 = (50*sin(r3));
			x24 = (50*cos(r4));
			y24 = (50*sin(r4));
			x25 = (50*cos(r5));
			y25 = (50*sin(r5));
			x26 = (50*cos(r6));
			y26 = (50*sin(r6));
			setcolor(RED);
			circle(320+x11, 240+y11, 5);
			k=4;
			while(k >= 0){
				circle(320+x11,240+y11, k);
				k--;
			}
			circle(320+x12, 240+y12, 5);
			k=4;
			while(k >= 0){
				circle(320+x12,240+y12, k);
				k--;
			}
			setcolor(GREEN);
			circle(320+x21, 240+y21, 7);
			k=6;
			while(k >= 0){
				circle(320+x21,240+y21, k);
				k--;
			}
			circle(320+x22, 240+y22, 7);
			k=6;
			while(k >= 0){
				circle(320+x22,240+y22, k);
				k--;
			}
			circle(320+x23, 240+y23, 7);
			k=6;
			while(k >= 0){
				circle(320+x23,240+y23, k);
				k--;
			}
			circle(320+x24, 240+y24, 7);
			k=6;
			while(k >= 0){
				circle(320+x24,240+y24, k);
				k--;
			}
			circle(320+x25, 240+y25, 7);
			k=6;
			while(k >= 0){
				circle(320+x25,240+y25, k);
				k--;
			}
			circle(320+x26, 240+y26, 7);
			k=6;
			while(k >= 0){
				circle(320+x26,240+y26, k);
				k--;
			}
			setcolor(WHITE);
			delay(10);
			cleardevice();
			draw_circleO(30);
			draw_circleO(50);
}
void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, " ");
	hydrogen(50,100);
	hydrogen(150,200);
	line(235,240,265,240);
	line(250,220,250,260);
	oxygen();
	hydrogen(50,100);
	hydrogen(150,200);
	line(235,240,265,240);
	line(250,220,250,260);
	getch();
	closegraph();
}