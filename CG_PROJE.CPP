#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<math.h>

void draw_circleO(int r,float x0){
	int p, x, y, j=1;
	p = 3 -2*r;
	x = 0;
	y = r;
	while(j != 10){
	      circle(x0, 200, j);
	      j++;
	}
	setcolor(BLUE);
	outtextxy(x0-3,197,"O");
	setcolor(WHITE);
	putpixel(x0+x,200-y,WHITE);
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
		putpixel(x0+x,200-y,WHITE);
		putpixel(x0+x,200+y,WHITE);
		putpixel(x0-x,200+y,WHITE);
		putpixel(x0-x,200-y,WHITE);
		putpixel(x0+y,200-x,WHITE);
		putpixel(x0+y,200+x,WHITE);
		putpixel(x0-y,200+x,WHITE);
		putpixel(x0-y,200-x,WHITE);
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
void hydrogen(float x0,float x,float y)
{
	int i,k;
	float radian1,radian2,x1,x2,y1,y2;
	draw_circleH(30,x0,y);
	draw_circleH(30,x,y);
	for(i=0; i<3; i++) {
		//for(degree=0; degree<=360; degree++) {
			radian1 = (3.142/180)*33;
			radian2 = (3.142/180)*327;
			x1 = (30*cos(radian1));
			y1 = (30*sin(radian1));
			x2 = (30*cos(radian2));
			y2 = (30*sin(radian2));
			setcolor(RED);
			circle(x0+x1, y+y1, 5);
			k=4;
			while(k >= 0){
				circle(x0+x1,y+y1, k);
				k--;
			}
			circle(x0+x2, y+y2, 5);
			k=4;
			while(k >= 0){
				circle(x0+x2,y+y2, k);
				k--;
			}
			setcolor(WHITE);
			//delay(50);
			//cleardevice();

		//}
	}

}
void oxygen(float x0,float x)
{
	int r, p, x11, x12, x21, x22, x23, x24, X25, X26, X27, X28, x29,
		x210, x211, x212;
	int y11, y12, y21, y22, y23, y24, Y25, Y26, Y27, Y28, y29,
		y210, y211, y212;
	int i=0, j=0, k=4;
	float degree, r1, r2, r3, r4, r5, r6, r11, r12,r10,r40;
	draw_circleO(50,x0);
	draw_circleO(70,x0);
	draw_circleO(50,x);
	draw_circleO(70,x);

	for(i=0; i<1; i++) {
		for(degree=340; degree >= 15; degree--) {
			r11 = (3.142/180)*(degree+(4*i));
			r12 = (3.142/180)*((degree+180)+(4*i));
			r1 = (3.142/180)*16.05;
			r2 = (3.142/180)*5.73;
			r3 = (3.142/180)*(degree+70);
			r4 = (3.142/180)*(degree+140);
			r5 = (3.142/180)*(degree+110);
			r6 = (3.142/180)*(degree+40);
			x11 = (50*cos(r11));
			y11 = (50*sin(r11));
			x12 = (50*cos(r12));
			y12 = (50*sin(r12));
			x21 = (70*cos(r1));
			y21 = (70*sin(r1));
			x22 = (70*cos(r2));
			y22 = (70*sin(r2));
			x23 = (70*cos(r3));
			y23 = (70*sin(r3));
			x24 = (70*cos(r4));
			y24 = (70*sin(r4));
			X25 = (70*cos(r5));
			Y25 = (70*sin(r5));
			X26 = (70*cos(r6));
			Y26 = (70*sin(r6));
			X27 = (70*cos(-r6));
			Y27 = (70*sin(-r6));
			X28 = (70*cos(-r5));
			Y28 = (70*sin(-r5));
			x29 = (70*cos(-r3));
			y29 = (70*sin(-r3));
			x210 = (70*cos(-r4));
			y210 = (70*sin(-r4));
			x211 = (70*cos(-r1));
			y211 = (70*sin(-r1));
			x212 = (70*cos(-r2));
			y212 = (70*sin(-r2));
			setcolor(RED);
			circle(x0+x11, 200+y11, 4);
			k=3;
			while(k >= 0){
				circle(x0+x11,200+y11, k);
				k--;
			}
			circle(x0+x12, 200+y12, 4);
			k=3;
			while(k >= 0){
				circle(x0+x12,200+y12, k);
				k--;
			}
			circle(x+x11, 200+y11, 4);
			k=3;
			while(k >= 0){
				circle(x+x11,200+y11, k);
				k--;
			}
			circle(x+x12, 200+y12, 4);
			k=3;
			while(k >= 0){
				circle(x+x12,200+y12, k);
				k--;
			}
			setcolor(GREEN);
			circle(x0+x21, 200+y21, 4);
			k=3;
			while(k >= 0){
				circle(x0+x21,200+y21, k);
				k--;
			}
			circle(x0+x22, 200+y22, 4);
			k=3;
			while(k >= 0){
				circle(x0+x22,200+y22, k);
				k--;
			}
			circle(x0+x23, 200+y23, 4);
			k=3;
			while(k >= 0){
				circle(x0+x23,200+y23, k);
				k--;
			}
			circle(x0+x24, 200+y24, 4);
			k=3;
			while(k >= 0){
				circle(x0+x24,200+y24, k);
				k--;
			}
			circle(x+X25, 200+Y25, 4);
			k=3;
			while(k >= 0){
				circle(x+X25,200+Y25, k);
				k--;
			}
			circle(x+X26, 200+Y26, 4);
			k=3;
			while(k >= 0){
				circle(x+X26,200+Y26, k);
				k--;
			}
			circle(x+X27, 200+Y27, 4);
			k=3;
			while(k >= 0){
				circle(x+X27,200+Y27, k);
				k--;
			}
			circle(x+X28, 200+Y28, 4);
			k=3;
			while(k >= 0){
				circle(x+X28,200+Y28, k);
				k--;
			}
			circle(x0+x29, 200+y29, 4);
			k=3;
			while(k >= 0){
				circle(x0+x29,200+y29, k);
				k--;
			}
			circle(x0+x210, 200+y210, 4);
			k=3;
			while(k >= 0){
				circle(x0+x210,200+y210, k);
				k--;
			}
			circle(x0+x211, 200+y211, 4);
			k=3;
			while(k >= 0){
				circle(x0+x211,200+y211, k);
				k--;
			}
			circle(x0+x212, 200+y212, 4);
			k=3;
			while(k >= 0){
				circle(x0+x212,200+y212, k);
				k--;
			}

			setcolor(WHITE);
			//delay(10);
			cleardevice();
			draw_circleO(50,x0);
			draw_circleO(70,x0);
			draw_circleO(50,x);
			draw_circleO(70,x);
			hydrogen(50,100,100);
			outtextxy(40,160,"HYDROGEN");
			hydrogen(50,100,300);
			outtextxy(40,360,"HYDROGEN");
			outtextxy(350,280,"OXYGEN");
			line(140,200,240,200);
			line(190,150,190,250);
			setcolor(RED);
			outtextxy(250,450,"REACTANTS");
			setcolor(WHITE);
			line(550,180,600,180);
			line(550,220,600,220);
			line(590,150,620,200);
			line(590,250,620,200);
			delay(25);
			//outtextxy(280,280,"OXYGEN");
			i++;
		}
	}
}

void draw_circleOp(int r,float x0){
	int p, x, y, j=1;
	p = 3 -2*r;
	x = 0;
	y = r;
	while(j != 10){
	      circle(x0, 260, j);
	      j++;
	}
	setcolor(BLUE);
	outtextxy(x0-3,257,"O");
	setcolor(WHITE);
	putpixel(x0+x,260-y,WHITE);
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
		putpixel(x0+x,260-y,WHITE);
		putpixel(x0+x,260+y,WHITE);
		putpixel(x0-x,260+y,WHITE);
		putpixel(x0-x,260-y,WHITE);
		putpixel(x0+y,260-x,WHITE);
		putpixel(x0+y,260+x,WHITE);
		putpixel(x0-y,260+x,WHITE);
		putpixel(x0-y,260-x,WHITE);
	}
}


void draw_circleHp(int r,int x,int y){
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


void product(float x,float x0)
{
	int r, p,j=0, x11, x12, x21, x22, x23, x24, x25, x26;
	int y11, y12, y21, y22, y23, y24, y25, y26;
	int i=0, k=4, kl;
	float degree,degree2,r11,r12,r1,r2,r3,r4;
	draw_circleOp(40,x);
	draw_circleOp(70,x);
	draw_circleHp(40, x-55, 175);
	draw_circleHp(40, x+55, 175);
	draw_circleOp(40,x0);
	draw_circleOp(70,x0);
	draw_circleHp(40, x0-55, 175);
	draw_circleHp(40, x0+55, 175);
	setcolor(RED);
	while(j != 5){
	      circle(x-20, 193, j);
	      j++;
	}
	j=0;
	while(j != 5){
	      circle(x+20, 192, j);
	      j++;
	}
	while(j != 5){
	      circle(x0-20, 193, j);
	      j++;
	}
	j=0;
	while(j != 5){
	      circle(x0+20, 192, j);
	      j++;
	}
	setcolor(GREEN);
	j=0;
	while(j != 7){
	      circle(x-52, 214, j);
	      j++;
	}
	j=0;
	while(j != 7){
	      circle(x+52, 214, j);
	      j++;
	}
	j=0;
	while(j != 7){
	      circle(x0-52, 214, j);
	      j++;
	}
	j=0;
	while(j != 7){
	      circle(x0+52, 214, j);
	      j++;
	}
	for(degree=-20, degree2=0; degree+210 <= 210; degree++, degree2 -= 4) {
		r11 = (3.142/180)*(degree2);
		r12 = (3.142/180)*((degree2+180));
		r1 = (3.142/180)*degree;
		r2 = (3.142/180)*(degree+70);
		r3 = (3.142/180)*(degree+140);
		r4 = (3.142/180)*(degree+210);
		x11 = (40*cos(r11));
		y11 = (40*sin(r11));
		x12 = (40*cos(r12));
		y12 = (40*sin(r12));
		x21 = (70*cos(r1));
		y21 = (70*sin(r1));
		x22 = (70*cos(r2));
		y22 = (70*sin(r2));
		x23 = (70*cos(r3));
		y23 = (70*sin(r3));
		x24 = (70*cos(r4));
		y24 = (70*sin(r4));
		setcolor(BLUE);
		circle(x+x11, 260+y11, 5);
		k=4;
		while(k >= 0){
			circle(x+x11,260+y11, k);
			k--;
		}
		circle(x+x12, 260+y12, 5);
		k=4;
		while(k >= 0){
			circle(x+x12,260+y12, k);
			k--;
		}
		circle(x0+x11, 260+y11, 5);
		k=4;
		while(k >= 0){
			circle(x0+x11,260+y11, k);
			k--;
		}
		circle(x0+x12, 260+y12, 5);
		k=4;
		while(k >= 0){
			circle(x0+x12,260+y12, k);
			k--;
		}
		setcolor(GREEN);
		circle(x+x21, 260+y21, 7);
		k=6;
		while(k >= 0){
			circle(x+x21,260+y21, k);
			k--;
		}
		circle(x+x22, 260+y22, 7);
		k=6;
		while(k >= 0){
			circle(x+x22,260+y22, k);
			k--;
		}
				circle(x+x23, 260+y23, 7);
		k=6;
		while(k >= 0){
			circle(x+x23,260+y23, k);
			k--;
		}
		circle(x+x24, 260+y24, 7);
		k=6;
		while(k >= 0){
			circle(x+x24,260+y24, k);
			k--;
		}
		circle(x0+x21, 260+y21, 7);
		k=6;
		while(k >= 0){
			circle(x0+x21,260+y21, k);
			k--;
		}
		circle(x0+x22, 260+y22, 7);
		k=6;
		while(k >= 0){
			circle(x0+x22,260+y22, k);
			k--;
		}
				circle(x0+x23, 260+y23, 7);
		k=6;
		while(k >= 0){
			circle(x0+x23,260+y23, k);
			k--;
		}
		circle(x0+x24, 260+y24, 7);
		k=6;
		while(k >= 0){
			circle(x0+x24,260+y24, k);
			k--;
		}
		setcolor(WHITE);
		delay(10);
		cleardevice();
		draw_circleOp(40,x);
		draw_circleOp(70,x);
		draw_circleH(40, x-55, 175);
		draw_circleH(40, x+55, 175);
		draw_circleOp(40,x0);
		draw_circleOp(70,x0);
		draw_circleH(40, x0-55, 175);
		draw_circleH(40, x0+55, 175);
		setcolor(RED);
		j=0;
		while(j != 5){
		circle(x-20, 193, j);
		j++;
		}
		j=0;
		while(j != 5){
		circle(x+20, 192, j);
		j++;
		}
		j=0;
		while(j != 5){
		circle(x0-20, 193, j);
		j++;
		}
		j=0;
		while(j != 5){
		circle(x0+20, 192, j);
		j++;
		}
		setcolor(GREEN);
		j=0;
		while(j != 7){
		circle(x-52, 214, j);
		j++;
		}
		j=0;
		while(j != 7){
		circle(x+52, 214, j);
		j++;
		}
		j=0;
		while(j != 7){
		circle(x0-52, 214, j);
		j++;
		}
		j=0;
		while(j != 7){
		circle(x0+52, 214, j);
		j++;
		}
		setcolor(WHITE);
		outtextxy(290, 350, "WATER");
		setcolor(RED);
		outtextxy(290,450,"PRODUCT");
		if (degree+210 == 209){
			degree = -20;
			i++;
			delay(100);
		}
		if(i == 10)
			break;
	}
}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, " ");
	setcolor(RED);
	outtextxy(250,450,"REACTANTS");
	hydrogen(50,100,100);
	outtextxy(40,160,"HYDROGEN");
	hydrogen(50,100,300);
	outtextxy(40,360,"HYDROGEN");
	line(200,200,250,200);
	line(200,150,200,250);
	oxygen(320,455);
	outtextxy(350,280,"OXYGEN");
	line(500,180,550,180);
	line(500,220,550,220);
	line(540,150,570,200);
	line(540,250,570,200);
	cleardevice();
	product(200,450);
	setcolor(WHITE);
	outtextxy(290, 350, "WATER");
	setcolor(RED);
	outtextxy(290,450,"PRODUCT");
	getch();
	closegraph();
}
