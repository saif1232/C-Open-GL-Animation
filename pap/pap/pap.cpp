#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "glut.h"

float wwx = 0.0, wwy = 0.0;
float wx = 0.0, wy = 0.0;
float lx = 0.0, ly = 0.0; //sun rise
float bx = 0.0, by = 0.0;//bed
float bbx = 0.0, bby = 0.0;//bed
float tx = 0.0, ty = 0.0;
float sx = 1.0, sy = 1.0; //mouth and eyes scaling
float ttx = 1.0, tty = 1.0; //apple scaling
float theta = 0.0;
int frame = 0;

float FlipAngle = 0;
float SleepAngle = 0;
float RightArmAngle = 0;
float LeftArmAngle = 0;
float AppleAngle = 0;

void init() {
	glClearColor(0.1, 0.4, 0.7, 0.0); // set what colour you want the background to be
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity();							
								 // be mapped to the window created in the main function
	gluOrtho2D(0, 1000,0,1000);
}
void Text3() {
	glLineWidth(5);
	glBegin(GL_LINES);//S
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(600, 900);
	glVertex2d(650, 900);
	glVertex2d(650, 900);
	glVertex2d(650, 925);
	glVertex2d(650, 925);
	glVertex2d(600, 925);
	glVertex2d(600, 925);
	glVertex2d(600, 950);
	glVertex2d(600, 950);
	glVertex2d(650, 950);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//T
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(660, 950);
	glVertex2d(710, 950);
	glVertex2d(685, 950);
	glVertex2d(685, 900);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//A
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(720, 900);
	glVertex2d(745, 950);
	glVertex2d(745, 950);
	glVertex2d(770, 900);
	glVertex2d(732, 925);
	glVertex2d(757, 925);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//Y
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(780, 950);
	glVertex2d(805, 925);
	glVertex2d(805, 925);
	glVertex2d(820, 950);
	glVertex2d(805, 925);
	glVertex2d(805, 900);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//F
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(650, 890);
	glVertex2d(600, 890);
	glVertex2d(600, 890);
	glVertex2d(600, 840);
	glVertex2d(600, 865);
	glVertex2d(625, 865);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//I
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(660, 890);
	glVertex2d(710, 890);
	glVertex2d(660, 840);
	glVertex2d(710, 840);
	glVertex2d(685, 890);
	glVertex2d(685, 840);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//T
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(720, 890);
	glVertex2d(770, 890);
	glVertex2d(745, 890);
	glVertex2d(745, 840);
	glEnd();
}
void Text2() {
	glLineWidth(5);
	glBegin(GL_LINES);//S
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(600, 900);
	glVertex2d(650, 900);
	glVertex2d(650, 900);
	glVertex2d(650, 925);
	glVertex2d(650, 925);
	glVertex2d(600, 925);
	glVertex2d(600, 925);
	glVertex2d(600, 950);
	glVertex2d(600, 950);
	glVertex2d(650, 950);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//L
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(660, 950);
	glVertex2d(660, 900);
	glVertex2d(660, 900);
	glVertex2d(710, 900);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//E
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(720, 950);
	glVertex2d(720, 900);
	glVertex2d(720, 950);
	glVertex2d(770, 950);
	glVertex2d(720, 925);
	glVertex2d(745, 925);
	glVertex2d(720, 900);
	glVertex2d(770, 900);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//E
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(780, 950);
	glVertex2d(780, 900);
	glVertex2d(780, 950);
	glVertex2d(820, 950);
	glVertex2d(780, 925);
	glVertex2d(795, 925);
	glVertex2d(780, 900);
	glVertex2d(820, 900);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//P
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(830, 900);
	glVertex2d(830, 950);
	glVertex2d(830, 950);
	glVertex2d(880, 950);
	glVertex2d(880, 950);
	glVertex2d(880, 925);
	glVertex2d(880, 925);
	glVertex2d(830, 925);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//W
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(600, 890);
	glVertex2d(612.5, 840);
	glVertex2d(612.5, 840);
	glVertex2d(625, 865);
	glVertex2d(625, 865);
	glVertex2d(637.5, 840);
	glVertex2d(637.5, 840);
	glVertex2d(650, 890);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//E
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(660, 890);
	glVertex2d(660, 840);
	glVertex2d(660, 890);    
	glVertex2d(710, 890);
	glVertex2d(660, 865);
	glVertex2d(695, 865);
	glVertex2d(660, 840);
	glVertex2d(710, 840);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//L
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(720, 890);
	glVertex2d(720, 840);
	glVertex2d(720, 840);
	glVertex2d(770, 840);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//L
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(780, 890);
	glVertex2d(780, 840);
	glVertex2d(780, 840);
	glVertex2d(830, 840);
	glEnd();

	
}
void Text1() {
	glLineWidth(5);
	glBegin(GL_LINES);//E
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(600, 950);
	glVertex2d(600, 900);
	glVertex2d(600, 950);
	glVertex2d(650, 950);
	glVertex2d(600, 925);
	glVertex2d(625, 925);
	glVertex2d(600, 900);
	glVertex2d(650, 900);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//A
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(660, 900);
	glVertex2d(685, 950);
	glVertex2d(685, 950);
	glVertex2d(710, 900);
	glVertex2d(672, 925);
	glVertex2d(697, 925);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//T
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(720, 950);
	glVertex2d(770, 950);
	glVertex2d(745, 950);
	glVertex2d(745, 900);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//H
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(600, 890);
	glVertex2d(600, 840);
	glVertex2d(650, 890);
	glVertex2d(650, 840);
	glVertex2d(600, 865);
	glVertex2d(650, 865);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//E
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(660, 890);
	glVertex2d(660, 840);
	glVertex2d(660, 890);
	glVertex2d(710, 890);
	glVertex2d(660, 865);
	glVertex2d(685, 865);
	glVertex2d(660, 840);
	glVertex2d(710, 840);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//A
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(720, 840);
	glVertex2d(745, 890);
	glVertex2d(745, 890);
	glVertex2d(770, 840);
	glVertex2d(732, 865);
	glVertex2d(757, 865);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//L
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(780, 890);
	glVertex2d(780, 840);
	glVertex2d(780, 840);
	glVertex2d(820, 840);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//T
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(830, 890);
	glVertex2d(880, 890);
	glVertex2d(855, 890);
	glVertex2d(855, 840);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//H
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(890, 890);
	glVertex2d(890, 840);
	glVertex2d(940, 890);
	glVertex2d(940, 840);
	glVertex2d(890, 865);
	glVertex2d(940, 865);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//Y
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(950, 890);
	glVertex2d(975, 865);
	glVertex2d(975, 865);
	glVertex2d(1000, 890);
	glVertex2d(975, 865);
	glVertex2d(975, 840);
	glEnd();

}
void Tree() {

	glColor3f(0.8, 0.5, 0.3);//Branch
	glBegin(GL_POLYGON);
	glVertex2d(200, 170.0); //bottom left
	glVertex2d(300, 170); //bottom right
	glVertex2d(310, 600.0); //top right
	glVertex2d(180, 600.0); //top left
	glEnd();

	glColor3f(0.0, 0.5, 0.0);//Bush
	glBegin(GL_POLYGON);
	glVertex2d(140, 610.0); //bottom left1
	glVertex2d(150, 600.0); //bottom left2

	glVertex2d(350, 600); //bottom right1
	glVertex2d(360, 610); //bottom right2

	glVertex2d(360, 800.0); //top right1
	glVertex2d(350, 810.0); //top right2

	glVertex2d(150, 810.0); //top left1
	glVertex2d(140, 800.0); //top left2
	glEnd();

	glLineWidth(8); //Apples
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	//apple 1
	glVertex2d(200.0, 700.0); //bottom right
	glVertex2d(200.0, 710.0);//top right
	glVertex2d(190.0, 710.0);//top left
	glVertex2d(190, 700.0);//bottom left
	glEnd();
	//apple 2
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2d(300.0, 640); //bottom right
	glVertex2d(300.0, 650.0);//top right
	glVertex2d(290.0, 650.0);//top left
	glVertex2d(290.0, 640.0);//bottom left
	glEnd();
	//apple 3
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2d(190, 770.0);//bottom right
	glVertex2d(190.0, 780.0);//top right
	glVertex2d(180, 780.0);//top left
	glVertex2d(180.0, 770.0);//bottom left
	glEnd();
	//apple 4
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2d(340.0, 720.0);//bottom right 
	glVertex2d(340.0, 730.0);//top right
	glVertex2d(330.0, 730.0);//top left
	glVertex2d(330.0, 720.0);//bottom left
	glEnd();
}
void Apple() {
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2d(330.0, 780.0);//bottom right
	glVertex2d(330.0, 790.0);//top right
	glVertex2d(320.0, 790.0);//top left
	glVertex2d(320.0, 780.0);//bottom left
	glEnd();
}
void Floor() {
	glColor3f(0.8, 0.3, 0.2);//floor
	glBegin(GL_POLYGON);
	glVertex2d(0, 0.0); //bottom left
	glVertex2d(1000.0,0); //bottom right
	glVertex2d(1000, 170.0); //top right
	glVertex2d(0, 170.0); //top left
	glEnd();
	
}
void RightArm() {
	glEnable(GL_LINE_SMOOTH);
	//glLineWidth(5);
	glBegin(GL_POLYGON);//legs n arms
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(600, 340);//right arm attach
	glVertex2d(630, 400);
	glVertex2d(630, 390);
	glVertex2d(600, 330);
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(600, 340);//right arm attach
	glVertex2d(630, 400);
	glVertex2d(630, 390);
	glVertex2d(600, 330);
	glEnd();
}
void LeftArm() {
	//glEnable(GL_LINE_SMOOTH);
	
	glBegin(GL_POLYGON);//legs n arms
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(500, 340);//left arm attatch
	glVertex2d(470, 400);
	glVertex2d(470, 390);
	glVertex2d(500, 330);
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(500, 340);//left arm attatch
	glVertex2d(470, 400);
	glVertex2d(470, 390);
	glVertex2d(500, 330);
	glEnd();
}
void RightLeg() {
	glEnable(GL_LINE_SMOOTH);
	glLineWidth(5);
	glBegin(GL_LINES);//legs n arms
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(567, 200);//right foot attach
	glVertex2d(575, 170);//right foot
	glEnd();

}
void LeftLeg() {
	glEnable(GL_LINE_SMOOTH);
	glLineWidth(5);
	glBegin(GL_LINES);//legs n arms
	glColor3f(1.0, 1.0, 0.0);
	glVertex2d(533, 200);//left leg attach
	glVertex2d(525, 170);//left foot
	glEnd();
}
void RightEyeClosed() {
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);//eyes outline right
	glColor3f(0, 0, 0);
	glVertex2d(560, 430);//top left
	glVertex2d(580, 430);//top right
	glVertex2d(580, 405);//bottom right
	glVertex2d(560, 405);//bottom left
	glEnd();
}
void RightEye() {
	glLineWidth(2);
	glBegin(GL_POLYGON);//eyes right
	glColor3f(0.9, 0.9, 0.9);
	glVertex2d(560, 430);//top left
	glVertex2d(580, 430);//top right
	glVertex2d(580, 405);//bottom right
	glVertex2d(560, 405);//bottom left

	glEnd();
	glBegin(GL_LINE_LOOP);//eyes outline right
	glColor3f(0, 0, 0);
	glVertex2d(560, 430);//top left
	glVertex2d(580, 430);//top right
	glVertex2d(580, 405);//bottom right
	glVertex2d(560, 405);//bottom left
	glEnd();

	glBegin(GL_POLYGON);//pupil right 
	glColor3f(0, 0, 0);
	glVertex2d(565, 425);//top left
	glVertex2d(570, 425);//top right
	glVertex2d(570, 420);//bottom right
	glVertex2d(565, 420);//bottom left
	glEnd();
}
void LeftEyeClosed() {
	glLineWidth(1);
	glBegin(GL_LINE_LOOP);//eyes outline left
	glColor3f(0, 0, 0);
	glVertex2d(520, 430);//top left
	glVertex2d(540, 430);//top right
	glVertex2d(540, 405);//bottom right
	glVertex2d(520, 405);//bottom left
	glEnd();
}
void LeftEye() {
	glLineWidth(2);
	glBegin(GL_POLYGON);//eyes left
	glColor3f(0.9, 0.9, 0.9);
	glVertex2d(520, 430);//top left
	glVertex2d(540, 430);//top right
	glVertex2d(540, 405);//bottom right
	glVertex2d(520, 405);//bottom left
	glEnd();

	glBegin(GL_LINE_LOOP);//eyes outline left
	glColor3f(0, 0, 0);
	glVertex2d(520, 430);//top left
	glVertex2d(540, 430);//top right
	glVertex2d(540, 405);//bottom right
	glVertex2d(520, 405);//bottom left
	glEnd();

	glBegin(GL_POLYGON);//pupil left 
	glColor3f(0, 0, 0);
	glVertex2d(525, 425);//top left
	glVertex2d(530, 425);//top right
	glVertex2d(530, 420);//bottom right
	glVertex2d(525, 420);//bottom left
	glEnd();

}
void Mouth() {
	
	glBegin(GL_POLYGON);//mouth
	glColor3f(1, 0, 0);
	glVertex2d(566, 380);//top right
	glVertex2d(533, 380);//top left
	glVertex2d(533, 370);//bottom left
	glVertex2d(566, 370);//bottom right
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINE_LOOP);//mouth outline
	glColor3f(0, 0, 0);
	glVertex2d(566, 380);//top right
	glVertex2d(533, 380);//top left
	glVertex2d(533, 370);//bottom left
	glVertex2d(566, 370);//bottom right
	glEnd();
}
void Body() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);//body
	glVertex2d(500.0, 200.0); //bottom left
	glVertex2d(600.0, 200.0); //bottom right
	glVertex2d(600.0, 450.0); //top right
	glVertex2d(500.0, 450.0); //top left
	glEnd();

	glBegin(GL_TRIANGLES);//HAT
	glColor3f(0, 1, 0);
	glVertex2d(580.0, 450.0); //bottom right
	glVertex2d(520.0, 450.0); //bottom left
	glVertex2d(550.0, 550.0); //top
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINE_LOOP);//HAT OUTLINE
	glColor3f(0, 0, 0);
	glVertex2d(580.0, 450.0); //bottom right
	glVertex2d(520.0, 450.0); //bottom left
	glVertex2d(550.0, 550.0); //top
	glEnd();

	glLineWidth(5); //buttons
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2d(550.0, 250.0);
	glVertex2d(550.0, 253.0);

	glVertex2d(550.0, 270.0);
	glVertex2d(550.0, 273.0);

	glVertex2d(550.0, 290.0);
	glVertex2d(550.0, 293.0);

	glVertex2d(550.0, 310.0);
	glVertex2d(550.0, 313.0);
	glEnd();

}
void Person() {
	void Person(); {
		Body();
		LeftEye();
		RightEye();
		Mouth();
		LeftArm();
		RightArm();
		LeftLeg();
		RightLeg();
	}
}
void Window() {
	glColor3f(0.1, 0.0, 0.2);//Blue
	glBegin(GL_POLYGON);
	glVertex2d(100, 300);
	glVertex2d(100, 500);
	glVertex2d(100, 500);
	glVertex2d(300, 500);
	glVertex2d(300, 300);
	glVertex2d(100, 300);
	glEnd();

	glBegin(GL_LINE_STRIP);//Window Outter Frame
	glColor3f(0.3, 0.2, 0.0);
	glVertex2d(100, 300);
	glVertex2d(100, 500);
	glVertex2d(100, 500);
	glVertex2d(300, 500);
	glVertex2d(300, 300);
	glVertex2d(100, 300);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);//Window Inner Frame
	glColor3f(0.3, 0.2, 0.0);
	glVertex2d(200, 300);
	glVertex2d(200, 500);
	glVertex2d(100, 400);
	glVertex2d(300, 400);
	glEnd();

}
void Door() {
	glColor3f(0.4, 0.1, 0.1);//door
	glBegin(GL_POLYGON);
	glVertex2d(700, 1);
	glVertex2d(700, 400);
	glVertex2d(900, 400);
	glVertex2d(900, 1);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//handle
	glVertex2d(870, 200);
	glVertex2d(870, 210);
	glVertex2d(890, 210);
	glVertex2d(890, 200);
	glEnd();
}
void Bed() {
	

	glColor3f(0, 0, 0);//MATTRESS
	glBegin(GL_POLYGON);
	glVertex2d(47, 47);
	glVertex2d(47, 203);
	glVertex2d(403, 203);
	glVertex2d(403, 47);
	glEnd();

	glColor3f(1, 1, 1);//MATTRESS
	glBegin(GL_POLYGON);
	glVertex2d(50, 50);
	glVertex2d(50, 200);
	glVertex2d(400, 200);
	glVertex2d(400, 50);
	glEnd();

	glColor3f(0, 0, 0);//Pillow
	glBegin(GL_LINES);
	glVertex2d(120, 50);
	glVertex2d(120, 200);
	glEnd();

	glLineWidth(5);
	glColor3f(0, 0, 0);//LEGS
	glBegin(GL_LINES);
	glVertex2d(70, 49);
	glVertex2d(70, 0);
	glEnd();

	glLineWidth(5);
	glColor3f(0, 0, 0);//LEGS
	glBegin(GL_LINES);
	glVertex2d(380, 49);
	glVertex2d(380, 0);
	glEnd();
}
void SleepZ1() {

	glLineWidth(2);
	glBegin(GL_LINES);//Z2
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(100, 210);
	glVertex2d(110, 210);
	glVertex2d(110, 210);
	glVertex2d(100, 200);
	glVertex2d(100, 200);
	glVertex2d(110, 200);
	glEnd();
}
void SleepZ2() {
	glLineWidth(2);
	glBegin(GL_LINES);//Z2
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(120, 230);
	glVertex2d(130, 230);
	glVertex2d(130, 230);
	glVertex2d(120, 220);
	glVertex2d(120, 220);
	glVertex2d(130, 220);
	glEnd();
}
void SleepZ3() {
	glLineWidth(2);
	glBegin(GL_LINES);//Z1
	glColor3f(0.0, 0.0, 0.0);
	glVertex2d(140, 250);
	glVertex2d(150, 250);
	glVertex2d(150, 250);
	glVertex2d(140, 240);
	glVertex2d(140, 240);
	glVertex2d(150, 240);
	glEnd();
}
void Sun() {
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(1000, 1000); 
	glVertex2d(1000, 800); 
	glVertex2d(950, 800); 
	glVertex2d(900, 850);
	glVertex2d(850, 900);
	glVertex2d(800, 950);
	glVertex2d(800, 1000);
	glVertex2d(1000, 1000);
	glEnd();
}
void HitTree() {
tx = tx - 3.6; ty = ty + 0;
}
void Walk() {
	if ((frame > 1700) && (frame < 1800)) {
		wwx = wwx - 4.5; wwy = wwy + 0;
	}
}
void Background() {
	if ((frame > 0) && (frame < 700)) {
		Floor();
		Tree();
		Sun();
	}
	if ((frame > 700) && (frame < 1400)) {
		Door();
		Window();
		Bed();
	}
	if ((frame > 1400) && (frame < 2500)) {
		Floor();
		Tree();
		
		
	}
}
void BedTime() {
	if ((frame > 800) && (frame < 850)) {
		bx = bx - 3.6;
	}
	if ((frame > 900) && (frame < 940)) {
		by = by + 3.6;
	}
	if ((frame > 1000) && (frame < 1100)) {
		bbx = bbx - 3;
		bby = bby - 1.9;
	}
}
void StepBack() {
	if ((frame > 100) && (frame < 110)) {
		tx = tx + 3.6;
	}
}
void SunRise() {
	if ((frame > 1450) && (frame < 1550)) {
		lx = lx - 2.5;
		ly = ly - 2.5;
	}
}
void WakeUp() {
	if ((frame > 1550) && (frame < 1600)) {
		wx = wx - 5;
		//wy = wy - 2.5;
	}
}
void OpenMouth() {
	if ((frame > 50) && (frame < 110)) {
		sy = 1.3;
	}
	if ((frame > 480) && (frame < 550)) {
		sy = 1.3;
	}
}
void CloseMouth() {
	if ((frame > 110) && (frame < 300)) {
		sy = 1;
	}
	if ((frame > 1200) && (frame < 1500)) {
		sy = 0.5; sx = 0.5;
	}
}
void AppleFall() {
	if ((frame > 110) && (frame < 218)) {
		tty = tty - 3.6;
	}
}
void AppleEat() {
	if ((frame > 440) && (frame < 500)) {
		tty = tty - 3.6;
	}
}
void ArmEat() {
	if ((frame > 225) && (frame < 230)) {
		sx = 1; sy = 0.9;
	}
}
void OpenEyes() {
	if ((frame > 480) && (frame < 550)) {
		sx = 1;  sy = 1.8;
	}
}
void LeftArmWave() {
	if ((frame > 490) && (frame < 500)) {
		LeftArmAngle = 0;
	}
}
void WeightLoss() {
	if ((frame > 2050) && (frame < 2500)) {
		sx = 0.5; sy = 0;
	}
}


void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT); // clear the screen using the background colour
	
	frame++;
	Background();
	

	if ((frame >= 0) && (frame < 50))	// Show Person.
	{
		
		Person();
	}
	
	if ((frame > 50) && (frame < 100))	// Tree Hit.
	{
		
		HitTree();
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		LeftArm();
		Body();
		RightArm();
		LeftLeg();
		RightLeg();
		glPopMatrix();

		OpenMouth();
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		glTranslatef(549.5, 375, 0);
		glScalef(sx, sy, 1);
		glTranslatef(-549.5, -375, 0);
		Mouth();
		glPopMatrix();

		OpenMouth();
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		glTranslatef(547.5, 422.5, 0);
		glScalef(sx, sy, 1);
		glTranslatef(-547.5, -422.5, 0);
		RightEye();
		LeftEye();
		glPopMatrix();
	}
	if ((frame > 100) && (frame < 225)) {
		
		StepBack();
		CloseMouth();
		AppleFall();

		glPushMatrix();
		glTranslatef(0, tty, 0);
		Apple();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(tx, ty, 0);
		LeftArm();
		Body();
		LeftEye();
		RightEye();
		RightArm();
		LeftLeg();
		RightLeg();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(tx, ty, 0);
		glTranslatef(549.5, 375, 0);
		glScalef(sx, sy, 1);
		glTranslatef(-549.5, -375, 0);
		Mouth();
		glPopMatrix();
	}
	if ((frame > 225) && (frame < 300)) {
		
		AppleFall();

		glPushMatrix();
		glTranslatef(0, tty, 0);
		Apple();
		glPopMatrix();

		ArmEat();
		glPushMatrix();

		glTranslatef(tx, ty, 0);

		glTranslatef(500, 390, 0);
		glScalef(sx, sy, 1);
		glTranslatef(-500, -390, 0);
		LeftArm();
		glPopMatrix();

	
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();


		
	}
	if ((frame > 300) && (frame < 440)) {
		

		glPushMatrix();
		glTranslatef(tx, ty, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();

		glPushMatrix();

		glTranslatef(tx, ty, 0);

		glTranslatef(500, 330, 0);
		glRotatef(LeftArmAngle, 0, 0, 1);
		glTranslatef(-500, -330, 0);

		glTranslatef(500, 390, 0);
		glScalef(sx, sy, 1);
		glTranslatef(-500, -390, 0);

		LeftArm();
		glPopMatrix();
		LeftArmAngle -= 0.5;

		AppleFall();

		glPushMatrix();
		glTranslatef(0, tty, 0);

		glTranslatef(500, 330, 0);
		glRotatef(AppleAngle, 0, 0, 1);
		glTranslatef(-500, -330, 0);


		Apple();
		glPopMatrix();
		AppleAngle -= 0.06;
	}
	if ((frame > 440) && (frame < 455)) {
		
		AppleEat();
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		Mouth();
		LeftLeg();
		RightLeg();
		LeftArm();
		glPopMatrix();

		AppleFall();

		glPushMatrix();
		glTranslatef(0, tty, 0);

		glTranslatef(500, 330, 0);
		glRotatef(AppleAngle, 0, 0, 1);
		glTranslatef(-500, -330, 0);


		Apple();
		glPopMatrix();
		AppleAngle -= 0.03;

	}
	if ((frame > 455) && (frame < 480)) {
		
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		Mouth();
		LeftLeg();
		RightLeg();
		LeftArm();
		glPopMatrix();
	}
	if ((frame > 480) && (frame < 550)) {
		
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		Body();
		RightArm();
		LeftLeg();
		RightLeg();
		LeftArm();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(tx, ty, 0);
		glTranslatef(547.5, 422.5, 0);
		glScalef(sx, sy, 1);
		glTranslatef(-547.5, -422.5, 0);
		RightEye();
		LeftEye();
		glPopMatrix();
		OpenEyes();

		glPushMatrix();
		glTranslatef(tx, ty, 0);
		glTranslatef(549.5, 375, 0);
		glScalef(sx, sy, 1);
		glTranslatef(-549.5, -375, 0);
		Mouth();
		glPopMatrix();
		OpenMouth();
	}
	if ((frame > 550) && (frame < 700)) {
		
		glPushMatrix();
		glTranslatef(tx, ty, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		LeftArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();
		Text1();

	}
	if ((frame > 700) && (frame < 750)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0, 0, 0, 0);
	}
	if ((frame > 750) && (frame < 800)) {
		glClearColor(0.5, 0.3, 0.3, 0);
		
		glPushMatrix();
		glTranslatef(0, -164, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		LeftArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();
	}
	if ((frame > 800) && (frame < 900)) {
		glPushMatrix();
		glTranslatef(bx, -164, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		LeftArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();
		BedTime();
	}
	if ((frame > 900) && (frame < 940)) {
		glPushMatrix();
		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		LeftArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();
		BedTime();
	}
	if ((frame > 940) && (frame < 1000)) {
		
		glPushMatrix();
		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		LeftArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();
		BedTime();
	}
	if ((frame > 1000) && (frame < 1100)) {
		
		glPushMatrix();
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		LeftArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();
		BedTime();
		SleepAngle += 0.9;
	}
	if ((frame > 1100) && (frame < 1200)) {
		glPushMatrix();
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		RightEye();
		LeftEye();
		RightArm();
		LeftArm();
		Mouth();
		LeftLeg();
		RightLeg();
		glPopMatrix();
		BedTime();
		SleepAngle += 0;
	}
	if ((frame > 1200) && (frame < 1230)) {
		Text2();
		SleepZ1();
		glPushMatrix();
		
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		LeftEyeClosed();
		RightEyeClosed();
		RightArm();
		LeftArm();
		LeftLeg();
		RightLeg();

		glTranslatef(+490, +370, 0);
		glScalef(sx, sy, 0);
		glTranslatef(-430, -350, 0);
		Mouth();
				
		glPopMatrix();

		BedTime();
		SleepAngle += 0;	
		CloseMouth();
	}
	if ((frame > 1230) && (frame < 1260)) {
		Text2();
		SleepZ2();
		glPushMatrix();
		
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		LeftEyeClosed();
		RightEyeClosed();
		RightArm();
		LeftArm();
		LeftLeg();
		RightLeg();

		glTranslatef(+490, +370, 0);
		glScalef(sx, sy, 0);
		glTranslatef(-430, -350, 0);
		Mouth();

		glPopMatrix();

		BedTime();
		SleepAngle += 0;
		CloseMouth();
	}
	if ((frame > 1260) && (frame < 1300)) {
		Text2();
		SleepZ3();
		glPushMatrix();
		
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		LeftEyeClosed();
		RightEyeClosed();
		RightArm();
		LeftArm();
		LeftLeg();
		RightLeg();

		glTranslatef(+490, +370, 0);
		glScalef(sx, sy, 0);
		glTranslatef(-430, -350, 0);
		Mouth();

		glPopMatrix();

		BedTime();
		SleepAngle += 0;
		CloseMouth();
	}//sleep round 1
	if ((frame > 1300) && (frame < 1330)) {
		Text2();
		SleepZ1();
		glPushMatrix();
		
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		LeftEyeClosed();
		RightEyeClosed();
		RightArm();
		LeftArm();
		LeftLeg();
		RightLeg();

		glTranslatef(+490, +370, 0);
		glScalef(sx, sy, 0);
		glTranslatef(-430, -350, 0);
		Mouth();

		glPopMatrix();

		BedTime();
		SleepAngle += 0;
		CloseMouth();
	}
	if ((frame > 1330) && (frame < 1360)) {
		Text2();
		SleepZ2();
		glPushMatrix();
		
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		LeftEyeClosed();
		RightEyeClosed();
		RightArm();
		LeftArm();
		LeftLeg();
		RightLeg();

		glTranslatef(+490, +370, 0);
		glScalef(sx, sy, 0);
		glTranslatef(-430, -350, 0);
		Mouth();

		glPopMatrix();

		BedTime();
		SleepAngle += 0;
		CloseMouth();
	}
	if ((frame > 1360) && (frame < 1400)) {
		Text2();
		SleepZ3();
		glPushMatrix();
		
		glTranslatef(0, bby, 0);
		glTranslatef(bbx, 0, 0);

		glTranslatef(+430, +350, 0);
		glRotatef(SleepAngle, 0, 0, 1);
		glTranslatef(-430, -350, 0);

		glTranslatef(0, by, 0);
		glTranslatef(bx, -164, 0);
		Body();
		LeftEyeClosed();
		RightEyeClosed();
		RightArm();
		LeftArm();
		LeftLeg();
		RightLeg();

		glTranslatef(+490, +370, 0);
		glScalef(sx, sy, 0);
		glTranslatef(-430, -350, 0);
		Mouth();

		glPopMatrix();

		BedTime();
		SleepAngle += 0;
		CloseMouth();
	}
	if ((frame > 1400) && (frame < 1450)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0, 0, 0, 0);
	}
	if ((frame > 1450) && (frame < 1550)) {
		glPushMatrix();

		glTranslatef(lx, ly, 0);
		glTranslatef(+300, +300, 0);
		Sun();
		glPopMatrix();
		SunRise();
		//Person();
		glClearColor(0.1, 0.4, 0.7, 0.0);
	}
	if ((frame > 1550) && (frame < 1600)) {
		glPushMatrix();
		glTranslatef(wx, 0, 0);
		glTranslatef(+600, 0, 0);
		Person();
		glPopMatrix();
		Sun();
		WakeUp();
	}
	if ((frame > 1600) && (frame < 1700)) {
		glPushMatrix();
		glTranslatef(0, -100, 0);
		glTranslatef(+900, +400, 0);
		glRotatef(FlipAngle, 0, 0, 1);
		glTranslatef(-900, -400, 0);
		glTranslatef(0, +100, 0);
		glTranslatef(wx, 0, 0);
		glTranslatef(+600, 0, 0);
		Person();
		glPopMatrix();
		Sun();

		FlipAngle += 3.65;
	}
	if ((frame > 1700) && (frame < 1800)) {
		glPushMatrix();
		
		glTranslatef(wwx, 0, 0);

		glTranslatef(0, -100, 0);
		glTranslatef(+900, +400, 0);
		glRotatef(FlipAngle, 0, 0, 1);
		glTranslatef(-900, -400, 0);
		glTranslatef(0, +100, 0);
		glTranslatef(wx, 0, 0);
		glTranslatef(+600, 0, 0);
		Person();
		glPopMatrix();
		Sun();

		Walk();
		FlipAngle += 0;
	}
	if ((frame > 1800) && (frame < 1900)) {
		
		glPushMatrix();
	
		glTranslatef(wwx, 0, 0);
		glTranslatef(0, -100, 0);
		glTranslatef(+900, +400, 0);
		glRotatef(FlipAngle, 0, 0, 1);
		glTranslatef(-900, -400, 0);
		glTranslatef(0, +100, 0);
		glTranslatef(wx, 0, 0);
		glTranslatef(+600, 0, 0);
		Person();
		glPopMatrix();
		Sun();

		WeightLoss();
		FlipAngle += 0;
		Text3();
	}
	if ((frame > 1900) && (frame < 2000)) {
		glPushMatrix();

		glTranslatef(wwx, 0, 0);
		glTranslatef(0, -100, 0);
		glTranslatef(+900, +400, 0);
		glRotatef(FlipAngle, 0, 0, 1);
		glTranslatef(-900, -400, 0);
		glTranslatef(0, +100, 0);
		glTranslatef(wx, 0, 0);
		glTranslatef(+600, 0, 0);
		Person();
		glPopMatrix();
		Sun();

		WeightLoss();
		FlipAngle += 0;
		Text3();
	}
	if ((frame > 2000) && (frame < 2050)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0, 0, 0, 0);
	}
	if ((frame > 2050) && (frame < 2500)) {
		glPushMatrix();
		glTranslatef(+550, +325, 0);
		glScalef(sx, 1, 0);
		glTranslatef(-550, -325, 0);
		Person();
		glPopMatrix();
		Sun();
		glClearColor(0.1, 0.4, 0.7, 0.0);
	}

	if (frame > 2500) {
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(0.1, 0.4, 0.7, 0.0);
		bbx = 0, bby = 0;
		bx = 0, by = 0;
		lx = 0, ly = 0;
		tx = 0, ty = 0;
		sx = 1, sy = 1;
		ttx = 0, tty = 0;
		wwx = 0; wwy = 0;
		FlipAngle = 0;
		LeftArmAngle = 0;
		RightArmAngle = 0;
		SleepAngle = 0;
		AppleAngle = 0;
		frame = 0;
	}
	fprintf(stdout, "Frame number= %i\n", frame);
	glFlush();
	}
	

void Timer(int value)
{
	if (value) glutPostRedisplay();
	glutTimerFunc(10, Timer, value);
}

void visibility(int state)
{
	switch (state)
	{
	case GLUT_VISIBLE:
		Timer(1);
		break;
	case GLUT_NOT_VISIBLE:
		Timer(0);
		break;
	default:
		break;
	}
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Be Healthy!");
	init();
	glutDisplayFunc(Display);
	glutVisibilityFunc(visibility);
	glutMainLoop();
	return 0;
}