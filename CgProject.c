#include<stdio.h>
#include<GL/glut.h>
int slide,df;
void drawstring(float x,float y,float z,char *string, void *font)
{
      int len, i;

           glRasterPos3f(x,y,z);
           len=(int) strlen(string);
           for (i = 0; i < len; i++)
			{
             glutBitmapCharacter(font,string[i]);
			}
}
void frontscreen(void)
{	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1,0,0);
	drawstring(50,450.0,0.0,"MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.7,0,1);
	drawstring(60,410,0.0,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0.5,0);
	drawstring(73,360,0.0,"A MINI PROJECT ON GRAPHICAL VISUALIZATION OF",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,0);
	drawstring(170,320,0.0," \"THE GOOD CHOICE\"",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0.5,0);
	drawstring(230,280,0.0,"BY",GLUT_BITMAP_TIMES_ROMAN_24);	
	glColor3f(0.8, 0, 0.5);
	drawstring(80,260,0.0,"KEERTHAN  KUMAR                          4MT18CS039",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(80,240,0.0,"NIKHIL                                                   4MT18CS057",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0.5, 0);
	drawstring(215,200,0.0,"GUIDES",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.8, 0, 0.5);
	drawstring(155,170,0.0,"MRS JEEVITHA SAMPATH",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(0.8, 0.8, 0.5);
	drawstring(165,150,0.0,"Assistant Professor of CSE",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(190,130,0.0,"MITE , Moodabidri",GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1, 0.1, 1);
	drawstring(170,50,0.0,"PRESS 'a' OR 'A' TO START",GLUT_BITMAP_TIMES_ROMAN_24);	
	glFlush();
}
//Mark
void right_mark()
{
	
	glPushMatrix();
	glTranslatef(206,13,0);
	glLineWidth(5.0);
	glColor3f(0,1,0);
	glBegin(GL_LINES);
	glVertex2f(100,35);
	glVertex2f(103,27);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(103,27);
	glVertex2f(110,40);
	glEnd();
	glPopMatrix();
	
}

void wrong_mark()
{
	glPushMatrix();
	glTranslatef(-31,11,0);
	glLineWidth(5.0);
	glColor3f(1,0,0);
	glBegin(GL_LINES);
		glVertex2f(95,40);
		glVertex2f(105,30);
		glVertex2f(105,40);
		glVertex2f(95,30);
	glEnd();
	glPopMatrix();
}
//slide1
float sun_x=0, sun_y=0,color1=-0.09,color2=-0.3,color3=0-1.8,rotate=10,head_y=0,eye_x=0,sleep,w1,w2,w3;
void timer_sun(int e)
{
	if(slide==1)
	{
	sleep=sleep+0.5;
	if(sleep==15)
	{
		sleep=0;
	}
	sun_y=sun_y+0.9;
	if(sun_y>=20)
	{
		sun_y=20;
		sun_x=sun_x+0.9;
		if(sun_x>60)
		{
			sun_x=60;
		}
	}
	if(sun_x>=55)
	{
		eye_x=eye_x+0.9;
			if(eye_x>=6)
			{
				eye_x=6;
			}
	}	
	color1=color1+0.009;
	color2=color2+0.009;
	color3=color3+0.009;
	if(color1>=0.99)
	{
		color1=0.99;
	}
	if (color2>=0.77)
	{
		color2=0.77;
	}
	if (color3>=0.45)
	{
		color3=0.45;
	}
	}
	glutPostRedisplay();
	glutTimerFunc(70, timer_sun, 0);
}
void wall(int a,int b,int c,int d)
{	int i;
glColor3f(w1,w2,w3);
	for(i=0;i<30;i++)
	{
		glBegin(GL_POLYGON);
			glVertex2f(a,b);
			glVertex2f(a,c);
			glVertex2f(d,c);
			glVertex2f(d,b);
		glEnd();
		a=a+30;
		d=d+30;
	}
}
void sleep_zzz() 
{
	glPushMatrix();
	glTranslatef(-4,-1,0);
	glRectf(250,136,256,138);
	glBegin(GL_POLYGON);
	glVertex2f(258,138);
	glVertex2f(251,130);
	glVertex2f(249,130);
	glVertex2f(256,138);
	glEnd();
	glRectf(251,130,257,132);
	glPopMatrix();
}
void lamp()
{
	glPushMatrix();
	glTranslatef(-48.5,0,0);
	glBegin(GL_POLYGON);
		glColor3f(1.0,0.1,0.1);
		glVertex2f(7,15);
		glColor3f(1.0,0.1,0.1);
		glVertex2f(20,45);
		glColor3f(1.0,0.0,0.1);
		glVertex2f(30,45);
		glColor3f(1.0,1.0,0.1);
		glVertex2f(43,15);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glLineWidth(5);
	glBegin(GL_LINES);
		glVertex2f(25,-5);
		glVertex2f(25,15);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glLineWidth(8);
	glBegin(GL_LINES);
		glVertex2f(10,-5);
		glVertex2f(40,-5);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glLineWidth(2);
	glBegin(GL_LINES);
		glVertex2f(35,15);
		glVertex2f(35,5);
	glEnd();
	glPointSize(4);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POINTS);
		glVertex2f(35,5);
	glEnd();
	glPopMatrix();	
}
void curton()
{	
	glBegin(GL_POLYGON);
	glColor3f(0.97,0.22,0.37);
		glVertex2f(90,220);
		glColor3f(0.97,0.22,0.37);
		glVertex2f(90,300);
		glColor3f(0.98,0.58,0.66);
		glVertex2f(108,300);
		glColor3f(0.98,0.58,0.66);
		glVertex2f(120,220);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.97,0.22,0.37);
		glVertex2f(90,300);
		glColor3f(0.97,0.22,0.37);
		glVertex2f(90,410);
		glColor3f(0.98,0.58,0.66);
		glVertex2f(122,410);
		glColor3f(0.97,0.22,0.37);
		glVertex2f(108,300);
	glEnd();
	glColor3f(0.0,0.14,0.14);
	glLineWidth(6);
	glBegin(GL_LINES);
		glVertex2f(90,300);
		glVertex2f(108.5,300);
	glEnd();	
	glColor3f(0.0,0.0,0.0);//rod
	glLineWidth(8);
	glBegin(GL_LINES);
		glVertex2f(80,420);
		glVertex2f(300,420);
	glEnd();
	int e=92,f=410,g=420;
	for(int i=0;i<8;i++)
	{	glColor3f(1.0,1.0,1.0);
		glLineWidth(3);
		glBegin(GL_LINES);
			glVertex2f(e,f);
			glVertex2f(e,g);
		glEnd();
			e=e+4;
	}
	glPointSize(17);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
		glVertex2f(80,420);
	glEnd();
	glPointSize(17);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POINTS);
		glVertex2f(300,420);
	glEnd();
}
void drawer()
{
	glColor3f(0.28,0.28,0.28);
	glBegin(GL_POLYGON);
		glVertex2f(-96,-154);
		glVertex2f(-96,-88);
		glVertex2f(-62,-88); 
		glVertex2f(-62,-154);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(-93,-145);
		glVertex2f(-93,-123);
		glVertex2f(-65,-123);
		glVertex2f(-65,-145);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(-93,-115);
		glVertex2f(-93,-93);
		glVertex2f(-65,-93);
		glVertex2f(-65,-115);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(-87,-135);
		glVertex2f(-87,-138);
		glVertex2f(-71,-138);
		glVertex2f(-71,-135);
	glEnd();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(-87,-107);
		glVertex2f(-87,-104);
		glVertex2f(-71,-104);
		glVertex2f(-71,-107);
	glEnd();		
}
void mirror()
{
	glColor3f(1.0,1.0,1.0);
	glRectf(390,200,480,350);
	glColor3f(0.63,1.0,0.95);
	glRectf(394,204,476,346);
	glColor3f(0.87,1.0,0.99);
	glBegin(GL_POLYGON);
	glVertex2f(394,224);
	glVertex2f(394,250);
	glVertex2f(450,346);
	glVertex2f(466,346);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(404,204);
	glVertex2f(420,204);
	glVertex2f(476,305);
	glVertex2f(476,330);
	glEnd();
}
void morning()
{
	glColor3f(0.99,0.79,0.01);//sun
	glPushMatrix();
	glTranslatef(105+sun_x,300+sun_x,0);
	glutSolidSphere(15,500,100);
	glPopMatrix();
	glPushMatrix();	//cloud 1
	glTranslatef(-40.0+sun_x,0,0);
	glColor3f(1.0,1.0,1.0);  
	glPushMatrix();            
	glTranslatef(140,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(160,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(150,295,0);
	glutSolidSphere(11,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-2,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(130,284);
	glVertex2f(150,295);
	glVertex2f(172,284);
	glEnd();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();	//cloud 2
	glTranslatef(146-sun_x,65,0);
	glColor3f(1.0,1.0,1.0);  
	glPushMatrix();            
	glTranslatef(140,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(160,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(150,295,0);
	glutSolidSphere(11,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(130,284);
	glVertex2f(150,295);
	glVertex2f(172,284);
	glEnd();
	glPopMatrix();
	glPopMatrix();	
}
void slide1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.6,0.73,0.82);//	floor
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,90);
		glVertex2f(1000,90);
		glVertex2f(1000,0);
	glEnd();
	glColor3f(1.0,1.0,1.0);//white Border
	glBegin(GL_POLYGON);
		glVertex2f(-1,90);
		glVertex2f(-1,100);
		glVertex2f(1000,100);
		glVertex2f(1000,90);
	glEnd();
	 glColor3f(0.02,0.04,0.34);//wall
	glBegin(GL_POLYGON);
		glVertex2f(0,100);
		glVertex2f(0,1000);
		glVertex2f(1000,1000);
		glVertex2f(1000,100);
	glEnd();
	w1=0.164;w2=0.615;w3=0.956;
	wall(5,100,500,10);//wall grid
	glPushMatrix();	//drawer
	glTranslatef(200,220,0);
	drawer();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(550,220,0);
	drawer();
	glPopMatrix();
//Bed
	glColor3f(0.0,0.0,0.0);	//section1
	glBegin(GL_POLYGON);
		glVertex2f(140,35);
		glVertex2f(140,50);
		glVertex2f(360,50);
		glVertex2f(360,35);
	glEnd();
	glColor3f(0.38,0.28,0.28);
	glBegin(GL_POLYGON);
		glVertex2f(140,50);
		glVertex2f(140,65);
		glVertex2f(360,65);
		glVertex2f(360,50);
	glEnd();
	glColor3f(0.0,0.0,0.0); //leg
	glBegin(GL_POLYGON);
		glVertex2f(160,25);
		glVertex2f(160,35);
		glVertex2f(170,35);
		glVertex2f(170,25);
	glEnd();
	glColor3f(0.0,0.0,0.0); //leg
	glBegin(GL_POLYGON);
		glVertex2f(340,25);
		glVertex2f(340,35);
		glVertex2f(330,35);
		glVertex2f(330,25);
	glEnd();
	glColor3f(0.0,0.32,0.32); //leg
	glBegin(GL_POLYGON);
		glVertex2f(160,20);
		glVertex2f(160,25);
		glVertex2f(170,25);
		glVertex2f(170,20);
	glEnd();
	glColor3f(0.0,0.32,0.32);//leg
	glBegin(GL_POLYGON);
		glVertex2f(340,20);
		glVertex2f(340,25);
		glVertex2f(330,25);
		glVertex2f(330,20);
	glEnd();
	glColor3f(0.28,0.31,0.39);	//section2
	glBegin(GL_POLYGON);
		glVertex2f(160,65);
		glVertex2f(160,160);
		glVertex2f(340,160);
		glVertex2f(340,65);
	glEnd();
	glColor3f(0.85,0.85,0.85); //pillow
	glBegin(GL_POLYGON);
		glVertex2f(175,65);
		glVertex2f(175,140);
		glVertex2f(325,140);
		glVertex2f(325,65);
	glEnd();
		glPushMatrix();
	glTranslatef(200,97.5,0);
	glScalef(0.8,0.8,0.0);
	glRotatef(10,0,1,1);
//Person
	glPushMatrix();	//Neck
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(50.5,22);
	glVertex2f(59.5,22);
	glVertex2f(59.5,10);
	glVertex2f(50.5,10);	
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(48,14);
	glVertex2f(62,14);
	glVertex2f(55.,4);
	glEnd();
	glPopMatrix();

	glPushMatrix();//Hair
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55,45,0.0); 
	glutSolidSphere(25,100,500); 
	glPopMatrix();
	glPushMatrix();//Face
	glColor3f(1.0,0.8,0.8);
	glTranslatef(51.,43,0.0);  
	glutSolidSphere(20,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(59,43,0.0);  
	glutSolidSphere(20,100,500); 
	glPopMatrix();
	glPushMatrix();//Beard
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55.5,23,0.0);  
	glutSolidSphere(2.7,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(53.9,22.,0.0);  
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(57.5,21.9,0.0); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
	glBegin(GL_POLYGON);//Hair
	glVertex2i(42,65);
	glVertex2i(35,45);
	glVertex2i(30,45);
	glVertex2i(38,65);
	glEnd();
	
	glPushMatrix();
	glTranslatef(44,61,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();
	
	glBegin(GL_POLYGON);
	glVertex2i(48,55);
	glVertex2i(48,65);
	glVertex2i(72,63);
	glVertex2i(76,55);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(71,57);
	glVertex2i(75,59);
	glVertex2i(79,48);
	glVertex2i(77,46);
	glEnd();
	glPushMatrix();
	glTranslatef(56,60,0.0);  
	glutSolidSphere(10.4,100,500); 
	glPopMatrix();
	glPushMatrix();
	glTranslatef(68,59,0.0);  
	glutSolidSphere(5.8,100,500); 
	glPopMatrix();

	glPushMatrix();
	glColor3f(.6,0.3,0.3);
	glTranslatef(56,34,0.0);  
	glutSolidSphere(8,100,500); 
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(56,35,0.0); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();

	glColor3f(.0,0.,0.);//eyebrow
	glPushMatrix();
	glTranslatef(44,40.5,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(44.5,39.5,0.0); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(43,38,0.0); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	

	glPushMatrix();
	glTranslatef(52.5,43.,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();
//	
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(67,40.5,0.0); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(66.5,39.5,0.0); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(72,37,0.0);  
	glutSolidSphere(3,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(57.5,43.,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();//eye	left
	glColor3f(0.1,0.0,0.0);
	glTranslatef(43,41,0.0); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
	
	glPushMatrix();//eye right
	glTranslatef(67,41,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(43.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(67.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
	
	glPushMatrix();//eye cover	 left
	glColor3f(1.0,0.8,0.8);
	glTranslatef(43,41,0.0); 
	glutSolidSphere(3,100,500); 
	glPopMatrix();
	glPushMatrix();//eye cover right
	glTranslatef(67,41,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(3,100,500); 
	glPopMatrix();

	glColor3f(1.0,0.8,0.8);//ear
	glPushMatrix();
	glTranslatef(33.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(76.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	
	glColor3f(0.0,0.58,0.29);//Blanket
		glColor3f(1.,0.28,0.28);
	glBegin(GL_POLYGON);
		glVertex2f(145,65);
		glVertex2f(145,95);
		glVertex2f(355,95);
		glVertex2f(355,65);
	glEnd();
	
	glColor3f(0.0,0.58,0.39);
		glColor3f(1,0.38,0.38);
	glBegin(GL_POLYGON);
		glVertex2f(150,95);
		glVertex2f(150,115);
		glVertex2f(350,115);
		glVertex2f(350,95);
	glEnd();

	glPushMatrix();	//window
	glBegin(GL_POLYGON);
		glColor3f(0.0+color3,0.0+color1,0.0+color1); 
		glVertex2f(129,230);
		glColor3f(0.0+color1,0.0+color2,0); 
		glVertex2f(129,400);
		glColor3f(0.0+color3,0.0+color1,0.0+color1);
		glVertex2f(280,400);
		glColor3f(0.0+color3,0.0+color1,0.0+color1);
		glVertex2f(280,230);
	glEnd();
	glPopMatrix();

	morning();
	glPushMatrix();
	glColor3f(0.0,0.14,0.14);
	glLineWidth(7);
	glBegin(GL_LINES);
		glVertex2f(205,230);
		glVertex2f(205,400);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(125,400);
		glVertex2f(282.5,400);
		glVertex2f(125,230);
		glVertex2f(282.5,230);
	glEnd();
	glRectf(276.5,230,282,400);
	glRectf(125,229,130,400);	
	glPopMatrix();

	glColor3f(0.02,0.04,0.34);//window side wall
	glRectf(80,260,125,400);
	glRectf(281,200,319,400);
	
	glColor3f(0.164,0.615,0.956);
	glRectf(305,200,310,400);
	glPushMatrix();//Curtton
	curton();
	glPopMatrix();
	glPushMatrix();	//Lamp
	glTranslatef(145,140,0);
	lamp();
	glPopMatrix();
	mirror();

	glColor3f(0.0,0.390,0.4);    //Book Stand
	glBegin(GL_POLYGON);
		glVertex2f(320,300);
		glVertex2f(320,310);
		glVertex2f(370,310);
		glVertex2f(370,300);
	glEnd();
	
	glColor3f(0.0,0.168,0.168);
	glLineWidth(15);
	glBegin(GL_LINES);
		glVertex2f(330,300);
		glVertex2f(330,290);
	glEnd();
	
	glColor3f(0.0,0.168,0.168);
	glLineWidth(15);
	glBegin(GL_LINES);
		glVertex2f(360,300);
		glVertex2f(360,290);
	glEnd();

	glBegin(GL_POLYGON);            //book
			glColor3f(0.93,0.11,0.14);
		glVertex2f(322,310);
		glVertex2f(322,355);
		glVertex2f(332,355);
		glVertex2f(332,310);
	glEnd();
	glBegin(GL_POLYGON);              //book
		glColor3f(1.0,1.0,0.0);
		glVertex2f(332.5,310);
		glVertex2f(332.5,355);
		glColor3f(0.0,1.0,0.2);
		glVertex2f(341,355);
		glVertex2f(341,310);
	glEnd();
	glBegin(GL_POLYGON);              //book
	glColor3f(0.99,0.01,0.75);
		glVertex2f(340,345);
		glVertex2f(345,353);
		glVertex2f(361,316);
		glVertex2f(355,310);
	glEnd();
	glColor3f(1,0,0);//sleep zzz
	glPushMatrix();
	glTranslatef(sleep,sleep,0);
	sleep_zzz();
	glPushMatrix();
	glTranslatef(6.8,4.5,0);
	sleep_zzz();
	glTranslatef(6.8,4.5,0);
	sleep_zzz();
	glPopMatrix();
	glPopMatrix();
	glColor3f(1,1,1);
	drawstring(50,30,0.0,"Person 1",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(190,10,0.0,"Press 'b' or 'B' for next slide",GLUT_BITMAP_TIMES_ROMAN_24);
	glPushMatrix();
	glTranslatef(+31,-11,0);
	wrong_mark();
	glPopMatrix();
	glFlush();
}
//slide2
float sun_x1=0, sun_y1=0,color11=-0.09,color21=-0.3,color31=0-1.8,rotate1=10,head_y1=0,eye_x1=0;
void timer_sun1(int e)
{
	if(slide==2)
	{
	sun_y1=sun_y1+0.9;
	if(sun_y1>=20)
	{
		sun_y1=20;
		sun_x1=sun_x1+0.9;
		if(sun_x1>60)
		{
			sun_x1=60;
		}
		if(sun_x1>=45)
		{
			rotate1=rotate1-0.4;
			if(rotate1<=0)
			{
			rotate1=0;
			}
		}	
	}
	if(rotate1>=-5){
		head_y1=head_y1+0.08;
			if(head_y1>=6)
			{
				head_y1=6;
			}
	}
	if(sun_x1>=55)
	{
		eye_x1=eye_x1+0.9;
			if(eye_x1>=6)
			{
				eye_x1=6;
			}
	}
	color11=color11+0.009;
	color21=color21+0.009;
	color31=color31+0.009;
	if(color11>=0.99)
	{
		color11=0.99;
	}
	if (color21>=0.77)
	{
		color21=0.77;
	}
	if (color31>=0.45)
	{
		color31=0.45;
	}
	}
	glutPostRedisplay();
	glutTimerFunc(60, timer_sun1, 0);
}
void morning1()
{
	glColor3f(0.99,0.79,0.01);//sun
	glPushMatrix();
	glTranslatef(105+sun_x1,300+sun_x1,0);
	glutSolidSphere(15,500,100);
	glPopMatrix();

	glPushMatrix();	//cloud 1
	glTranslatef(-40.0+sun_x1,0,0);
	glColor3f(1.0,1.0,1.0);  
	glPushMatrix();            
	glTranslatef(140,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(160,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(150,295,0);
	glutSolidSphere(11,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-2,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(130,284);
	glVertex2f(150,295);
	glVertex2f(172,284);
	glEnd();
	glPopMatrix();
	glPopMatrix();	
	glPushMatrix();//cloud 2
	glTranslatef(146-sun_x1,65,0);
	glColor3f(1.0,1.0,1.0);  
	glPushMatrix();            
	glTranslatef(140,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(160,293,0);
	glutSolidSphere(7,500,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(150,295,0);
	glutSolidSphere(11,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(130,284);
	glVertex2f(150,295);
	glVertex2f(172,284);
	glEnd();
	glPopMatrix();
	glPopMatrix();	
}
void slide2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.23,0.25,0.3); //floor
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,90);
		glVertex2f(1000,90);
		glVertex2f(1000,0);
	glEnd();

	glColor3f(1.0,1.0,1.0);//white Border
	glBegin(GL_POLYGON);
		glVertex2f(-1,90);
		glVertex2f(-1,100);
		glVertex2f(1000,100);
		glVertex2f(1000,90);
	glEnd();

	 glColor3f(0.15,0.2,0.25);	//wall
	glBegin(GL_POLYGON);
		glVertex2f(0,100);
		glVertex2f(0,1000);
		glVertex2f(1000,1000);
		glVertex2f(1000,100);
	glEnd();
	w1=w2=w3=0.75;
	wall(5,100,1000,10);//wall grid
	glPushMatrix();//drawer
	glTranslatef(200,220,0);
	drawer();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(470,220,0);
	drawer();
	glPopMatrix();
//Bed
	glColor3f(0.0,0.0,0.0);//section1
	glBegin(GL_POLYGON);
		glVertex2f(140,35);
		glVertex2f(140,50);
		glVertex2f(360,50);
		glVertex2f(360,35);
	glEnd();
	glColor3f(0.28,0.28,0.28);
	glBegin(GL_POLYGON);
		glVertex2f(140,50);
		glVertex2f(140,65);
		glVertex2f(360,65);
		glVertex2f(360,50);
	glEnd();

	glColor3f(0.0,0.0,0.0); //leg
	glBegin(GL_POLYGON);
		glVertex2f(160,25);
		glVertex2f(160,35);
		glVertex2f(170,35);
		glVertex2f(170,25);
	glEnd();
	glColor3f(0.0,0.0,0.0); //leg
	glBegin(GL_POLYGON);
		glVertex2f(340,25);
		glVertex2f(340,35);
		glVertex2f(330,35);
		glVertex2f(330,25);
	glEnd();
	
	glColor3f(0.0,0.32,0.32); //leg
	glBegin(GL_POLYGON);
		glVertex2f(160,20);
		glVertex2f(160,25);
		glVertex2f(170,25);
		glVertex2f(170,20);
	glEnd();
	
	glColor3f(0.0,0.32,0.32);//leg
	glBegin(GL_POLYGON);
		glVertex2f(340,20);
		glVertex2f(340,25);
		glVertex2f(330,25);
		glVertex2f(330,20);
	glEnd();
	//section2
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_POLYGON);
		glVertex2f(160,65);
		glVertex2f(160,160);
		glVertex2f(340,160);
		glVertex2f(340,65);
	glEnd();
	glColor3f(0.85,0.85,0.85); //pillow
	glBegin(GL_POLYGON);
		glVertex2f(175,65);
		glVertex2f(175,140);
		glVertex2f(325,140);
		glVertex2f(325,65);
	glEnd();

	glPushMatrix();
	glTranslatef(200,95.5+head_y1,0);
	glScalef(0.8,0.8,0.0);
	glRotatef(rotate1,0,1,1);
//Person
	glPushMatrix();//Neck
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(50.5,22);
	glVertex2f(59.5,22);
	glVertex2f(59.5,10);
	glVertex2f(50.5,10);	
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glVertex2f(48,14);
	glVertex2f(62,14);
	glVertex2f(55.,4);
	glEnd();
	glPopMatrix();
	glPushMatrix();//Hair
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55,45,0.0);  
	glutSolidSphere(25,100,500); 
	glPopMatrix();

	glPushMatrix();//Face
	glColor3f(1.0,0.8,0.8);
	glTranslatef(51.,43,0.0);  
	glutSolidSphere(20,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(59,43,0.0); 
	glutSolidSphere(20,100,500); 
	glPopMatrix();

	glPushMatrix();//Beard
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55.5,23,0.0); 
	glutSolidSphere(2.7,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(53.9,22.,0.0); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(57.5,21.9,0.0);  
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
	
	glBegin(GL_POLYGON);//Hair
	glVertex2i(42,65);
	glVertex2i(35,45);
	glVertex2i(30,45);
	glVertex2i(38,65);
	glEnd();
	
	glPushMatrix();
	glTranslatef(44,61,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();
	
	glBegin(GL_POLYGON);
	glVertex2i(48,55);
	glVertex2i(48,65);
	glVertex2i(72,63);
	glVertex2i(76,55);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(71,57);
	glVertex2i(75,59);
	glVertex2i(79,48);
	glVertex2i(77,46);
	glEnd();
	
	glPushMatrix();
	glTranslatef(56,60,0.0); 
	glutSolidSphere(10.4,100,500); 
	glPopMatrix();

	glPushMatrix();
	glTranslatef(68,59,0.0); 
	glutSolidSphere(5.8,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(.6,0.3,0.3);
	glTranslatef(56,34,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(56,35,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();
	if(sun_x1>=60)
	{
		glColor3f(.6,0.3,0.3);
		glRectf(48,32.8,64.1,33.6);
	}	
//eyebrow
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(44,40.5,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(44.5,39.5,0.0); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(43,38,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	

	glPushMatrix();
	glTranslatef(52.5,43.,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//	
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(67,40.5,0.0); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(66.5,39.5,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(72,37,0.0);  
	glutSolidSphere(3,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(57.5,43.,0.0);  
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//eye	left
	glPushMatrix();
	glColor3f(0.1,0.0,0.0);
	glTranslatef(43,41,0.0); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
//eye right
	glPushMatrix();
	glTranslatef(67,41,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(43.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(67.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
//eye cover	 left
glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(43-eye_x1,41,0.0); 
	glutSolidSphere(3,100,500); 
	glPopMatrix();
//eye cover right	
	glPushMatrix();
	glTranslatef(67+eye_x1,41,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(3,100,500); 
	glPopMatrix();
//ear
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(33.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(76.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
//Blanket
	glColor3f(0.0,0.58,0.29);	
	glBegin(GL_POLYGON);
		glVertex2f(145,65);
		glVertex2f(145,95);
		glVertex2f(355,95);
		glVertex2f(355,65);
	glEnd();
	
	glColor3f(0.0,0.58,0.39);
	glBegin(GL_POLYGON);
		glVertex2f(150,95);
		glVertex2f(150,115);
		glVertex2f(350,115);
		glVertex2f(350,95);
	glEnd();	
//window
	glPushMatrix();
	glBegin(GL_POLYGON);
		glColor3f(0.0+color31,0.0+color11,0.0+color11); 
		glVertex2f(129,230);
		glColor3f(0.0+color11,0.0+color21,0); 
		glVertex2f(129,400);
		glColor3f(0.0+color31,0.0+color11,0.0+color11);
		glVertex2f(280,400);
		glColor3f(0.0+color31,0.0+color11,0.0+color11);
		glVertex2f(280,230);
	glEnd();
	glPopMatrix();
	morning1();
//Window Border
	glPushMatrix();
	glColor3f(0.0,0.14,0.14);
	glLineWidth(7);
	glBegin(GL_LINES);
		glVertex2f(205,230);
		glVertex2f(205,400);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(125,400);
		glVertex2f(282.5,400);
		glVertex2f(125,230);
		glVertex2f(282.5,230);
	glEnd();
	glRectf(276.5,230,282,400);
	glRectf(125,229,130,400);	
	glPopMatrix();
//window side wall
	glColor3f(0.15,0.2,0.25);
	glRectf(80,260,125,400);
	glRectf(281,200,319,400);
	glColor3f(0.75,0.75,0.75);
	glRectf(305,200,310,400);
//Curtton
	glPushMatrix();
	curton();
	glPopMatrix();
//Lamp
	glPushMatrix();
	glTranslatef(145,140,0);
	lamp();
	glPopMatrix();
	mirror();
//Book Stand
	glColor3f(0.0,0.390,0.4);    
	glBegin(GL_POLYGON);
		glVertex2f(320,300);
		glVertex2f(320,310);
		glVertex2f(370,310);
		glVertex2f(370,300);
	glEnd();
	
	glColor3f(0.0,0.168,0.168);
	glLineWidth(15);
	glBegin(GL_LINES);
		glVertex2f(330,300);
		glVertex2f(330,290);
	glEnd();
	
	glColor3f(0.0,0.168,0.168);
	glLineWidth(15);
	glBegin(GL_LINES);
		glVertex2f(360,300);
		glVertex2f(360,290);
	glEnd();
	glBegin(GL_POLYGON);            //book
		glColor3f(0.99,0.01,0.75);
		glVertex2f(322,310);
		glVertex2f(322,355);
		glVertex2f(332,355);
		glVertex2f(332,310);
	glEnd();
	glBegin(GL_POLYGON);  
		glColor3f(0.93,0.11,0.14);            //book
		glVertex2f(332.5,310);
		glVertex2f(332.5,355);
		glVertex2f(341,355);
		glVertex2f(341,310);
	glEnd();
	glBegin(GL_POLYGON);              //book
		glColor3f(1.0,1.0,0.0);
		glVertex2f(340,345);
		glColor3f(1.0,1.0,0.0);
		glVertex2f(345,353);
		glColor3f(0.0,1.0,0.2);
		glVertex2f(361,316);
		glColor3f(0.0,1.0,0.2);
		glVertex2f(355,310);
	glEnd();
	glColor3f(1,1,1);
	drawstring(50,30,0.0,"Person 2",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(190,10,0.0,"Press 'c' or 'C' for next slide.",GLUT_BITMAP_TIMES_ROMAN_24);
	glPushMatrix();
	glTranslatef(-206,-11,0);
	right_mark();
	glPopMatrix();
	glFlush();
}
//slide3
float  s1=0.0,s2=0.0,s3=0.0,s4=0.0,s5=0.0,s6=0.0,s7,s8,s9;
float hand_y=0,hand_x=0,hand_up=0,hand_down=0,chips_y=0,count_eat=0,mouth_x=0,mouth_y=0 ,m1=0,m2=3,flag_eat=0,food_y=0;
void timer_eat(int e)
{
	if(slide==3)
	{
	if(count_eat==1)
	{
		food_y=0;
	}
	else
	{
		food_y=hand_y;
		chips_y=hand_y;
	}
	if(hand_y<=47 && flag_eat==1)
	{	
		if(m1>3)
		{ 	
			m2=m2-0.2;
			mouth_y=m2;
			if(m2<0.0)
			{
				m1=0.0;
			}	
		}
		else
		{
			m1=mouth_y+0.2;
			mouth_y=m1;
			if(m1==3)
			{
				m2=3;
			}
		}
	}
	else	
	{
		mouth_y=0;
	}	
	if(hand_up>50)
	{	
		hand_down=hand_down-1.0;
		hand_y=hand_down;
		count_eat=1;
		if(hand_down<0.0)
		{
			hand_up=0.0;
		}	
	}
	else
	{
		hand_up=hand_up+1.0;
		hand_y=hand_up;
		count_eat=0;
		if(hand_up==50)
		{
			hand_down=50;
			flag_eat=1;
			
		}
		
		if(hand_y>2)
		{
			hand_x=hand_x+0.5;
			if(hand_x>=13)
			{
				hand_x=13;
			}
		}
	}
	}
	glutPostRedisplay();
	glutTimerFunc(50, timer_eat, 0);
}
void shelfs()
{
//shelfs
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(0,380);
		glVertex2f(0,480);
		glVertex2f(80,480);
		glVertex2f(80,380);
	glEnd();
		
	glColor3f(0.9,0.9,0.9);
	glBegin(GL_POLYGON);
		glVertex2f(0,385);
		glVertex2f(0,475);
		glVertex2f(75,475);
		glVertex2f(75,385);
	glEnd();
	
	glColor3f(0,0,0);
	glLineWidth(2);
	glBegin(GL_LINES);
		glVertex2f(0,395);
		glVertex2f(80,395);
		glVertex2f(0,465);
		glVertex2f(80,465);
	glEnd();
	
	glColor3f(0,0,0);
	glLineWidth(4.5);
	glBegin(GL_LINES);
		glVertex2f(20,380);
		glVertex2f(20,480);
	glEnd();
	
	glColor3f(0,0,0);   //handle
	glLineWidth(3.5);
	glBegin(GL_LINES);
		glVertex2f(10,415);
		glVertex2f(10,445);
		
		glVertex2f(30,415);
		glVertex2f(30,445);
	glEnd();			
}
void shelfs1()
{
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(85,410);
		glVertex2f(85,480);
		glVertex2f(245,480);
		glVertex2f(245,410);
	glEnd();
	
	glColor3f(s1,s2,s3);
	glBegin(GL_POLYGON);
		glVertex2f(90,415);
		glVertex2f(90,475);
		glVertex2f(240,475);
		glVertex2f(240,415);
	glEnd();
	
	glLineWidth(2);
		glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(85,420);
		glVertex2f(245,420);
		
		glVertex2f(85,470);
		glVertex2f(245,470);
	glEnd();
	
	glLineWidth(5);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(165,410);
		glVertex2f(165,480);
	glEnd();
	
	glLineWidth(3.5);
	glBegin(GL_LINES);
		glVertex2f(125,410);
		glVertex2f(125,480);
		
		glVertex2f(205,410);
		glVertex2f(205,480);
	glEnd();
	
	glLineWidth(3.5);             //handle
	glBegin(GL_LINES);
		glVertex2f(120,430);
		glVertex2f(120,455);
		
		glVertex2f(130,430);
		glVertex2f(130,455);
		
		glVertex2f(200,430);
		glVertex2f(200,455);
		
		glVertex2f(210,430);
		glVertex2f(210,455);
	glEnd();

}
 
void kitchen_setup()
{   
//fridge
	glBegin(GL_POLYGON);
		glColor3f(0.313,0.312,0.312);
		glVertex2f(190,150);
		glColor3f(0.113,0.112,0.112);
		glVertex2f(190,320);
		glColor3f(s7,s8,s9)	;
		glVertex2f(250,320);
		glVertex2f(250,150);		
	glEnd();
	
	glLineWidth(4);
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_LINES);
		glVertex2f(190,250);
		glVertex2f(250,250);
	glEnd();
	
	glLineWidth(5);           //handle
	glColor3f(0.1,0.1,0.1);
	glBegin(GL_LINES);
		glVertex2f(200,300);
		glVertex2f(200,270);
		
		glVertex2f(200,220);
		glVertex2f(200,190);
	glEnd();
	//Spoons
	glColor3f(s4,s5,s6);
	glLineWidth(10);
	glBegin(GL_LINES);
		glVertex2f(0,350);
		glVertex2f(60,350);
	glEnd();
	
	glColor3f(1,1,1);       //spoon1
	glLineWidth(7);
	glBegin(GL_LINES);
		glVertex2f(15,310);
		glVertex2f(15,350);
	glEnd();
	
	glBegin(GL_POLYGON);
		glVertex2f(6,285);
		glVertex2f(8,310);
		glVertex2f(22,310);
		glVertex2f(24,285);
	glEnd();
	
	glColor3f(s1,s2,s3);
	glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2f(11,290);
		glVertex2f(11,305);
		
		glVertex2f(15,290);
		glVertex2f(15,305);
		
		glVertex2f(19,290);
		glVertex2f(19,305);
	glEnd();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(14.8,350,0);
	glutSolidSphere(2,100,100);
	glPopMatrix();   
	
	glPushMatrix();
		glColor3f(s4,s5,s6);
	glTranslatef(14.8,350,0);
	glutSolidSphere(1,100,100);
	glPopMatrix();       
	glColor3f(1,1,1);       //spoon2
	glLineWidth(7);
	glBegin(GL_LINES);
		glVertex2f(45,310);
		glVertex2f(45,350);
	glEnd();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(45,300,0);
	glutSolidSphere(12,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(44.8,350,0);
	glutSolidSphere(2,100,100);
	glPopMatrix();   
	
	glPushMatrix();
	glColor3f(s4,s5,s6);
	glTranslatef(44.8,350,0);
	glutSolidSphere(1,100,100);
	glPopMatrix();
	
	glColor3f(s1,s2,s3);
	glPointSize(1.5);
	glBegin(GL_POINTS);
	glVertex2f(42,293);
	glVertex2f(48,293);

	glVertex2f(38,297);
	glVertex2f(44,297);
	glVertex2f(50,297);
	
	glVertex2f(42,301);
	glVertex2f(48,301);
	glVertex2f(36,301);
	glVertex2f(54,301);
	
	glVertex2f(38,305);
	glVertex2f(44,305);
	glVertex2f(50,305);
	glEnd();
}
void person()
{
	//Person
	glPushMatrix();
	glTranslatef(50,225,0);
	glScalef(1.3,1.5,1);
   //body
	glColor3f(s1,s2,s3);
	glBegin(GL_POLYGON);
	glVertex2f(30,-43.5);
	glVertex2f(30,8);
	glVertex2f(40,14);
	glVertex2f(70,14);
	glVertex2f(80,8);
	glVertex2f(80,-43.5);
	glEnd();
//hand	left
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(12,-28);
	glVertex2f(2,-20);
	glVertex2f(34,10);
	glVertex2f(34,00);
	glEnd();
	glPopMatrix();
//hand	right
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(92,-20);
	glVertex2f(105,-18);
	glVertex2f(76,10);
	glVertex2f(76,00);
	glEnd();
	glPopMatrix();
//Shirt Hand Left
	glPushMatrix();
	glColor3f(s1,s2,s3);
	glBegin(GL_POLYGON);
	glVertex2f(10,-5);
	glVertex2f(40,14.2);
	glVertex2f(40,-1);
	glVertex2f(20,-20);
	glEnd();
//shirt hand right
	glBegin(GL_POLYGON);
	glVertex2f(100,-5);
	glVertex2f(70,14.2);
	glVertex2f(70,-1);
	glVertex2f(90,-20);
	glEnd();
	glPopMatrix();
//Neck
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(50.5,22);
	glVertex2f(59.5,22);
	glVertex2f(59.5,10);
	glVertex2f(50.5,10);	
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(48,14);
	glVertex2f(62,14);
	glVertex2f(55.,4);
	glEnd();
	glPopMatrix();
//Hair
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55,45,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(25,100,500); 
	glPopMatrix();
//Face
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(51.,43,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(20,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(59,43,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(20,100,500); 
	glPopMatrix();
//Beard
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55.5,23,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.7,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(53.9,22.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(57.5,21.9,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
//Hair
	glBegin(GL_POLYGON);
	glVertex2i(42,65);
	glVertex2i(35,45);
	glVertex2i(30,45);
	glVertex2i(38,65);
	glEnd();
	
	glPushMatrix();
	glTranslatef(44,61,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();
	
	glBegin(GL_POLYGON);
	glVertex2i(48,55);
	glVertex2i(48,65);
	glVertex2i(72,63);
	glVertex2i(76,55);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2i(71,57);
	glVertex2i(75,59);
	glVertex2i(79,48);
	glVertex2i(77,46);
	glEnd();
	
	glPushMatrix();
	glTranslatef(56,60,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(10.4,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(68,59,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.8,100,500); 
	glPopMatrix();
//mouth
	glPushMatrix();
	glColor3f(.6,0.3,0.3);
	glTranslatef(56,35+mouth_y,0.0); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(56,36.3+mouth_y,0.0); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();
	glRectf(45,33.65,64.3,40);
	
	glColor3f(.6,0.3,0.3);
	glRectf(48,32.8,64.1,33.6);	
			
	glColor3f(1.0,0.8,0.8);
	glRectf(45,32.8,47+mouth_y,34);
	glRectf(64.3-mouth_y,32.8,65,34);		
//eyebrow
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(44,40.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(44.5,39.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(43,38,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	

	glPushMatrix();
	glTranslatef(52.5,43.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//	
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(67,40.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(66.5,39.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(72,37,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(3,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(57.5,43.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//eye	left
	glPushMatrix();
	glColor3f(0.1,0.0,0.0);
	glTranslatef(43,41,0.0); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
//eye right
	glPushMatrix();
	glTranslatef(67,41,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(43.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(67.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
//ear
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(33.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(76.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
//hand	left
	glPushMatrix();
	glTranslatef(0,0,0);
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(8,-15);
	glVertex2f(-2,-24);
	glVertex2f(45,-38);
	glVertex2f(48,-34);
	glEnd();
	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
}
void cola()
{
	glColor3f(0.905,0.07,0.301);
	glRectf(65,130,80,158);
	glColor3f(0.78,0.78,0.78);
	glBegin(GL_POLYGON);
	glVertex2f(65,130);
	glVertex2f(80,130);
	glVertex2f(78,126);
	glVertex2f(67,126);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(65,158);
	glVertex2f(80,158);
	glVertex2f(78,161);
	glVertex2f(67,161);
	glEnd();
	glColor3f(0.65,0.65,0.65);
	glRectf(67,161,78,163);
}
void finger()
{	
//hand	right
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(98,-18,.0); 
	glutSolidSphere(5.8,100,500); 
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,0,0);
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2f(100,-12);
	glVertex2f(60,-20+hand_y);
	glVertex2f(60,-26+hand_y);
	glVertex2f(107-hand_x,-23);
	glEnd();
	glPopMatrix();
//Left finger
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(42,-30);
		glVertex2f(49,-28);
		glVertex2f(49,-30);
		glVertex2f(35,-33);
	glEnd();
	
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(30,-31);
		glVertex2f(50,-32);
		glVertex2f(50,-34);
		glVertex2f(30,-34);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(30,-32);
		glVertex2f(49,-36);
		glVertex2f(49,-38);
		glVertex2f(31,-34);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(30,-32);
		glVertex2f(47,-39);
		glVertex2f(47,-41);
		glVertex2f(31,-34);
	glEnd();
//Right finger
	glPushMatrix();
	glTranslatef(0,hand_y,0);
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(61,-20);
		glVertex2f(60,-23);
		glVertex2f(55,-18);
		glVertex2f(55,-16);
	glEnd();
	glPopMatrix();
//Right hand finger
	glPushMatrix();
	glTranslatef(0,hand_y,0);
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(61,-22);
		glVertex2f(60,-24);
		glVertex2f(53,-22);
		glVertex2f(53,-20);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(61,-22);
		glVertex2f(60,-26);
		glVertex2f(53,-26);
		glVertex2f(53,-24);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(63,-22);
		glVertex2f(63,-26);
		glVertex2f(54,-29);
		glVertex2f(54,-28);
	glEnd();
	glPopMatrix();	
}
void food()
{
	glPushMatrix();
	glTranslatef(236.5,116,0);
	glutSolidSphere(4,200,200);
	glColor3f(0.9,0.9,0.8);
	glutSolidSphere(1.5,200,200);
	glPopMatrix();
}
void chips()
{
	glPushMatrix();
	glTranslatef(0,0,0);
	glColor3f(1,1,0);
	glBegin(GL_TRIANGLES);
	glVertex2f(113,189);
	glVertex2f(122,189);
	glVertex2f(117,179);
	glEnd();
	glPopMatrix();
}
void foods()
{	glPushMatrix();
	glScalef(1.5,1.5,1);
	glPushMatrix();
	glColor3f(1.0,0.1,0.1);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(3,4,0);
	glColor3f(0.99,1.0,0.0);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(7,5,0);
	glColor3f(0.99,0.0,0.0);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(11,6+food_y,0);
	glColor3f(0,0.89,0.0);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(11,6,0);
	glColor3f(0,0.89,0.0);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(5,00,0);
	glColor3f(0.2,0.9,0.0);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(11,0,0);
	glColor3f(0.99,0.6,0.10);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(15,6,0);
	glColor3f(0.99,1.0,0.10);
	food();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(15,-0.2,0);
	glColor3f(0.0,1.0,0.50);
	food();
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(18.5,2,0);
	glColor3f(0.99,0.0,0.10);
	food();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(22,0,0);
	glColor3f(0.99,1.0,0.10);
	food();
	glPopMatrix();
//food bowl
	glPushMatrix();
	glTranslatef(148,0,0);
	glColor3f(0.79,0.47,0.43);
	glBegin(GL_POLYGON);
		glVertex2f(85,115);	
		glVertex2f(100,115);
		glVertex2f(100,100);
		glVertex2f(92.4,100);
		glVertex2f(85,110);
	glEnd();
	glColor3f(0.73,0.33,0.27);
	glBegin(GL_POLYGON);
		glVertex2f(115,115);	
		glVertex2f(100,115);
		glVertex2f(100,100);
		glVertex2f(107.6,100);
		glVertex2f(115,110);
	glEnd();
	glPopMatrix();
	glPopMatrix();
}
void slide3()
{
	glClear(GL_COLOR_BUFFER_BIT);
//scene1
	glColor3f(1.0,0.43,0.11);//wall
	glBegin(GL_POLYGON);
		glVertex2f(0,100);
		glVertex2f(0,500);
		glVertex2f(250,500);
		glVertex2f(250,100);
	glEnd();	
//table
	glColor3f(0,0.11,0.23);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,150);
		glVertex2f(250,150);
		glVertex2f(250,0);
	glEnd();
//scene2
	glColor3f(0.99,0.89,0.02);  //wall 
	glBegin(GL_POLYGON);
		glVertex2f(250,100);
		glVertex2f(250,500);
		glVertex2f(500,500);
		glVertex2f(500,100);
	glEnd();	
//table
	glColor3f(0,0.11,0.23);
	glBegin(GL_POLYGON);
		glVertex2f(250,0);
		glVertex2f(250,150);
		glVertex2f(500,150);
		glVertex2f(500,0);
	glEnd();
	s1=0.99 ;s2=0.89 ; s3=0.02;s7=0.73;s8=0.98;s9=0.98;
	glPushMatrix();
	glTranslatef(250,0,0);
	s4=1;s5=s6=0;
	kitchen_setup();
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(190,-20,0);
	s1=0.941;s2=0.67; s3=0.0;
	shelfs1();
	glPopMatrix();
	
	s1=0.6; s2=0.0; s3=0.8;
	glPushMatrix();
	glTranslatef(0,-10,0);
	person();
	glPopMatrix();	
//Chips pack
	glPushMatrix();
	glTranslatef(64,-40,0);
	glColor3f(0.8,0.2,0.3);
	glBegin(GL_POLYGON);
	glVertex2f(45,230);
	glVertex2f(68,220);
	glVertex2f(55,185);
	glVertex2f(32,190);
	glEnd();
	glPopMatrix();
//chips
	glPushMatrix();
	glScalef(1.5,1.5,0);
	glTranslatef(11-47,6-71+food_y,0);
	chips();
	glPopMatrix();
	glPushMatrix();
	glScalef(1.5,1.5,0);
	glTranslatef(11-47,6-71,0);
	chips();
	glPopMatrix();
	
	glPushMatrix();
	glScalef(1.5,1.5,0);
	glTranslatef(11-43,6-74,0);
	chips();
	glPopMatrix();
	
	glPushMatrix();
	glScalef(1.5,1.5,0);
	glTranslatef(11-53,6-72,0);
	chips();
	glPopMatrix();
//chips pack
	glPushMatrix();
	glTranslatef(64,-40,0);
	glColor3f(1,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(44,221);
	glVertex2f(67,211);
	glVertex2f(55,185);
	glVertex2f(32,190);
	glEnd();
	glPopMatrix();
//
	glPushMatrix();
	glColor3f(0.58,0.58,0.58);
	glTranslatef(113,161,0);
	glutSolidSphere(10,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glScalef(1.5,1.5,0);
	glTranslatef(-92,-23.5,0);
	glRotatef(-30,0,1,1);
	chips();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(50,215,0); //Left side finger
	glScalef(1.3,1.5,1);
	finger();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(-13,8,0);
	cola();
	glPopMatrix();
	cola();
	glPushMatrix();
	glTranslatef(-100,200,0);
	glRotatef(-90,0,0,1);
	cola();
	glPopMatrix();
	
	s1=0.36; s2=0.38;s3=0.0;
	glPushMatrix();
	glTranslatef(250,-10,0);
	person();
	glPopMatrix();
//food	
	glPushMatrix();
	foods();
	glPopMatrix();
//glass
	glColor3f(0.73,0.98,0.98);	
	glBegin(GL_POLYGON);
	glVertex2f(410,160);
	glVertex2f(430,160);
	glVertex2f(425,130);
	glVertex2f(415,130);
	glEnd();
	glColor3f(0.02,0.83,0.79); //water
	glBegin(GL_POLYGON);
	glVertex2f(412,153);
	glVertex2f(428,153);
	glVertex2f(425,134);
	glVertex2f(415,134);
	glEnd();
//fruits
	glColor3f(0.93,0.75,0.07);//banana
	glBegin(GL_POLYGON);
	glVertex2f(334,152);
	glVertex2f(337,152);
	glVertex2f(337.8,146);
	glVertex2f(335.2,146);
	glEnd();
	
	glBegin(GL_POLYGON);
	glVertex2f(331,152);
	glVertex2f(334,152);
	glVertex2f(332.8,146);
	glVertex2f(329.2,146);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(300,137);
		glVertex2f(299,140);
	glColor3f(0.9,0.9,0);	
	glVertex2f(300,145);
		glColor3f(0.93,0.75,0.07);
	glVertex2f(310,143);
	glVertex2f(315,142);
	glVertex2f(325,140);
	glVertex2f(329.5,148);
	glVertex2f(331.5,146);
	glVertex2f(330,137);
	glVertex2f(310,132);
	glEnd();
	
	glColor3f(0.85,0.85,0);
	glBegin(GL_POLYGON);
	glVertex2f(310,132);
	glVertex2f(303,131);
		glColor3f(0.93,0.75,0.07);
	glVertex2f(302,128);
	glVertex2f(303,126);
	glVertex2f(310,120);
	glVertex2f(322,122.5);
	glVertex2f(328,126);
	glVertex2f(332,136);
	glVertex2f(333,148);
	glEnd();

	glBegin(GL_POLYGON);
		glColor3f(0.880,0.680,0.03);
	glVertex2f(333,134);
	glVertex2f(325,123);
	glVertex2f(320,122);
	glVertex2f(315,121);
	glVertex2f(310,120);
		glColor3f(0.93,0.75,0.07);
	glVertex2f(311,114);
	glVertex2f(317,113);
	glVertex2f(326,112);
	glVertex2f(330,115);
	glVertex2f(333,117);
	glVertex2f(338,120);
	glVertex2f(342,128);
	glVertex2f(341.5,137);
	glVertex2f(340,142);
	glVertex2f(338,148);
	glVertex2f(335,148);
		glEnd();
	
	glPushMatrix();//tip
	glColor3f(0.5,0.25,0.25);
	glTranslatef(335,153,0.0); 
	glutSolidSphere(3.5,100,100); 
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.74,0.48,0.48);
	glTranslatef(335,154,0.0); 
	glutSolidSphere(2,100,100); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(300,215,0);//   right side finger
	glScalef(1.3,1.5,1);
	finger();
	glPopMatrix();
	glPopMatrix();
//kitchen setup
	s1=1.0; s2=0.43 ; s3=0.11 ;s4=s5=s6=0; s7=s8=s9=1;
	kitchen_setup();
	shelfs();
	s1=s2=s3=0.9;
	shelfs1();
//divider line
	glColor3f(0,0,0);
	glRectf(247,0,254,500);
	glColor3f(1,1,1);
	drawstring(20,40,0.0,"Person 1",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(260,40,0.0,"Person 2",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(190,10,0.0,"Press 'd' or 'D' for next slide.",GLUT_BITMAP_TIMES_ROMAN_24);
	wrong_mark();
	right_mark();
	glFlush();
}
//slide4
int office_i,office_x,office_y;
float cursor_x=0 ,cursor_y=0,cur_down=0,cur_up=0,c1,c2,c3,c4,c5,c6;
void timer_office(int e)
{
	if(cur_up>30)
	{ 	
		cur_down=cursor_y-0.3;
		cursor_y=cur_down;
		if(cur_down<0.0)
		{
			for(int i=0;i<=99999999;i++);
			cur_up=0.0;
		}
	}
	else
	{
		cur_up=cursor_y+0.3;
		cursor_y=cur_up;
		if(cur_up>=30)
		{
			for(int i=0;i<=99999999;i++);
			cur_down=30;
		}
	
	}
	
	glutPostRedisplay();
	glutTimerFunc(10, timer_office, 0);
	
}
void wall4()
{//wall
	glColor3f(c1,c2,c3);  
	glBegin(GL_POLYGON);
		glVertex2f(0,100);
		glVertex2f(0,500);
		glVertex2f(250,500);
		glVertex2f(250,100);
	glEnd();
}
void computer1()
{
//computer
	glBegin(GL_POLYGON);          
	glColor3f(0.0,0.0,0.0);
		glVertex2f(100,190);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(100,290);
		glColor3f(0.18,0.18,0.18);
		glVertex2f(245,290);
		glColor3f(0.18,0.18,0.18);
		glVertex2f(245,190);
	glEnd();	
//cables
	glColor3f(0,0,0);
	glLineWidth(2);
	glBegin(GL_LINES);
		glVertex2f(240,160);
		glVertex2f(240,190);
	glEnd();
//base
	glBegin(GL_POLYGON);          
		glColor3f(0.0,0.0,0.0);
		glVertex2f(155,160);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(165,190);
		glColor3f(0.2,0.2,0.2);
		glVertex2f(179,190);
		glColor3f(0.2,0.2,0.2);
		glVertex2f(189,160);
	glEnd();
//buttons
	glPushMatrix();             //button 1
	glColor3f(1,1,1);
	glTranslatef(210,195,0);
	glutSolidSphere(1,100,100);
	glPopMatrix();
	
	glPushMatrix();         //button 2
	glColor3f(1,1,1);        
	glTranslatef(220,195,0);
	glutSolidSphere(1,100,100);
	glPopMatrix();
	
	glPushMatrix();         //button 3
	glColor3f(1,1,1);
	glTranslatef(230,195,0);
	glutSolidSphere(1,100,100);
	glPopMatrix(); 
//display
	glBegin(GL_POLYGON);          
	glColor3f(0.86,0.86,0.86);
		glVertex2f(105,203);
		glVertex2f(105,285);
		glVertex2f(240,285);
		glVertex2f(240,203);
	glEnd();
//cross mark
	glLineWidth(3);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(230,281);
		glVertex2f(235,284);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(230,284);
		glVertex2f(235,281);
	glEnd();
		
	glBegin(GL_POLYGON);            //facebook page blue
	glColor3f(0,0.33,0.66);
		glVertex2f(105,268);
		glVertex2f(105,280);
		glVertex2f(240,280);
		glVertex2f(240,268);
	glEnd();
	
	glBegin(GL_POLYGON);   //search bar          
	glColor3f(1,1,1);
		glVertex2f(110,272);
		glVertex2f(110,276);
		glVertex2f(153,276);
		glVertex2f(153,272);
	glEnd();
	
	glPushMatrix();       //logos
	glColor3f(0,0.14,0.29);
	glTranslatef(165,274,0);
	glutSolidSphere(4.5,100,100);
	glPopMatrix();
	
	glPushMatrix();      
	glColor3f(1.0,1.0,1.0);
	glTranslatef(165,275,0);
	glutSolidSphere(2,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0,0.14,0.29);
	glTranslatef(180,274,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0,0.14,0.29);
	glTranslatef(195,274,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0,0.14,0.29);
	glTranslatef(210,274,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();    
	
	glPushMatrix();
	glColor3f(0,0.14,0.29);
	glTranslatef(225,274,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();            
	
	glBegin(GL_POLYGON);            //pages1
	glColor3f(1,1,1);
		glVertex2f(110,230);
		glVertex2f(110,264);
		glVertex2f(190,264);
		glVertex2f(190,230);
	glEnd();
	
	glBegin(GL_POLYGON);            //pages2
	glColor3f(1,1,1);
		glVertex2f(110,203);
		glVertex2f(110,225);
		glVertex2f(190,225);
		glVertex2f(190,203);
	glEnd();
//
	glBegin(GL_POLYGON);            
	glColor3f(0.6,0.6,0.6);
		glVertex2f(115,255);
		glVertex2f(115,260);
		glVertex2f(160,260);
		glVertex2f(160,255);
	glEnd();
	
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_LINES);
		glVertex2f(120,250);
		glVertex2f(180,250);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2f(130,240);
		glVertex2f(160,240);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(165,240);
		glVertex2f(170,240);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2f(115,220);
		glVertex2f(160,220);
	glEnd();
	
	glBegin(GL_POLYGON);            
	glColor3f(0.65,0.65,0.65);
		glVertex2f(115,203);
		glVertex2f(115,215);
		glVertex2f(180,215);
		glVertex2f(180,203);
	glEnd();
//
	glBegin(GL_POLYGON);            //suggetion page
	glColor3f(1,1,1);
		glVertex2f(195,220);
		glVertex2f(195,264);
		glVertex2f(235,264);
		glVertex2f(235,220);
	glEnd();
	
	glPushMatrix();             //dots blue 1
	glColor3f(0,0.33,0.66);
	glTranslatef(200,255,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();
	
	glPushMatrix();         //white
	glColor3f(1,1,1);        
	glTranslatef(200,255,0);
	glutSolidSphere(1,100,100);
	glPopMatrix();
	
	glPushMatrix();         //blue  2
	glColor3f(0,0.33,0.66);
	glTranslatef(200,242,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();  
	
	glPushMatrix();       //white
	glColor3f(1,1,1);        
	glTranslatef(200,242,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();  
	
	glPushMatrix();        //blue   3
	glColor3f(0,0.33,0.66);
	glTranslatef(200,228,0);
	glutSolidSphere(4,100,100);
	glPopMatrix();  
	
	glPushMatrix();      //white
	glColor3f(1,1,1);        
	glTranslatef(200,228,0);
	glutSolidSphere(3,100,100);
	glPopMatrix();
	
	glLineWidth(4);
	glColor3f(0.7,0.7,0.7);   
	glBegin(GL_LINES);
		glVertex2f(210,255);
		glVertex2f(230,255);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(210,242);
		glVertex2f(230,242);
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(210,228);
		glVertex2f(230,228);
	glEnd();
	
	glBegin(GL_POLYGON);            
	glColor3f(1,1,1);
		glVertex2f(195,203);
		glVertex2f(195,218);
		glVertex2f(235,218);
		glVertex2f(235,203);
	glEnd();
	
	glBegin(GL_POLYGON);            
	glColor3f(0,0.33,0.66);
		glVertex2f(198,203);
		glVertex2f(198,214);
		glVertex2f(233,214);
		glVertex2f(233,203);
	glEnd();
//cursor
	glPushMatrix();
	glTranslatef(cursor_y-10,cursor_y-10,0);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(180,230);
	glVertex2f(175,240);
	glVertex2f(183,235);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2f(180,234);
	glVertex2f(185,229);
	glEnd();
	glPopMatrix();
//mouse
	glColor3f(0.2,0.2,0.2);
	glPushMatrix();
	glTranslatef(184.5+cursor_y,160.5,0);
	glutSolidSphere(8,100,100);
	glPopMatrix();	
}
void computer2()
{
//computer
	glBegin(GL_POLYGON);          
	glColor3f(0.0,0.0,0.0);
		glVertex2f(100,190);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(100,290);
		glColor3f(0.18,0.18,0.18);
		glVertex2f(245,290);
		glColor3f(0.18,0.18,0.18);
		glVertex2f(245,190);
	glEnd();
//cables
	glColor3f(0,0,0);
	glLineWidth(2);
	glBegin(GL_LINES);
		glVertex2f(240,160);
		glVertex2f(240,190);
	glEnd();	
//base
	glBegin(GL_POLYGON);          
		glColor3f(0.0,0.0,0.0);
		glVertex2f(155,160);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(165,190);
		glColor3f(0.2,0.2,0.2);
		glVertex2f(179,190);
		glColor3f(0.2,0.2,0.2);
		glVertex2f(189,160);
	glEnd();	
//buttons
	glPushMatrix();             //button 1
	glColor3f(1,1,1);
	glTranslatef(210,195,0);
	glutSolidSphere(1,100,100);
	glPopMatrix();
	
	glPushMatrix();         //button 2
	glColor3f(1,1,1);        
	glTranslatef(220,195,0);
	glutSolidSphere(1,100,100);
	glPopMatrix();
	
	glPushMatrix();         //button 3
	glColor3f(1,1,1);
	glTranslatef(230,195,0);
	glutSolidSphere(1,100,100);
	glPopMatrix(); 
//display
	glBegin(GL_POLYGON);          
	glColor3f(1,1,1);  //white
		glVertex2f(105,203);
		glVertex2f(105,285);
		glVertex2f(240,285);
		glVertex2f(240,203);
	glEnd();
	
	glBegin(GL_POLYGON);          //red
	glColor3f(0.94,0.0,0.0);
		glVertex2f(105,275);
		glVertex2f(105,285);
		glVertex2f(240,285);
		glVertex2f(240,275);
	glEnd();
	
	glColor3f(0.7,0.7,0.7);   //blocks
	glBegin(GL_LINES);
		glVertex2f(105,265);
		glVertex2f(240,265);
		office_x=115;
		for(office_i=0;office_i<13;office_i++)
		{
			glVertex2f(office_x,265);
			glVertex2f(office_x,275);
			office_x=office_x+10;
		}
	glEnd();
	
	glBegin(GL_POLYGON);       //middle
		glVertex2f(105,245);
		glVertex2f(105,260);
		glVertex2f(240,260);
		glVertex2f(240,245);
	glEnd();
	
	glColor3f(1,1,1);     
	glBegin(GL_LINES);
		glVertex2f(150,255);
		glVertex2f(238,255);
		glVertex2f(110,250);
		glVertex2f(180,250);
	glEnd();
	
	glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2f(110,247);
		glVertex2f(228,247);
	glEnd();  
	
	glColor3f(0.94,0,0);   //left-bottom page
	glBegin(GL_POLYGON);
		glVertex2f(105,235);
		glVertex2f(105,242);
		glVertex2f(160,242);
		glVertex2f(160,235);
	glEnd();
	
	glColor3f(0.8,0.8,0.8);
	glLineWidth(1);
	glBegin(GL_LINES);
		glVertex2f(160,203);
		glVertex2f(160,235);
		glVertex2f(140,203);
		glVertex2f(140,235);
		office_y=204;
		for(office_i=0;office_i<7;office_i++)
		{
			glVertex2f(105,office_y);
			glVertex2f(160,office_y);
			office_y=office_y+5;
		}
	glEnd(); 
	
	glBegin(GL_LINES);  //right-bottom page
		office_x=162,office_y=204;
		for(office_i=0;office_i<8;office_i++)   //tables
		{
			glVertex2f(office_x,204);
			glVertex2f(office_x,240);
			office_x=office_x+10;
		}
		
		for(office_i=0;office_i<8;office_i++)
		{
			glVertex2f(162,office_y);
			glVertex2f(240,office_y);
			office_y=office_y+5;
		}
	glEnd();  
//bars chart
	glLineWidth(7);
	glColor3f(0.98,0.14,0.27);
	glBegin(GL_LINES);
		glVertex2f(167,204);
		glVertex2f(167,220);
	glEnd();
	
	glColor3f(0.98,0.44,0.27);
	glBegin(GL_LINES);
		glVertex2f(177,204);
		glVertex2f(177,235);
	glEnd();
	
	glColor3f(0.98,0.14,0.47);
	glBegin(GL_LINES);
		glVertex2f(187,204);
		glVertex2f(187,215);
	glEnd();
	
	glColor3f(1,0.78,0.1);
	glBegin(GL_LINES);
		glVertex2f(197,204);
		glVertex2f(197,238);
	glEnd();
	
	glColor3f(1,0.78,0.1);
	glBegin(GL_LINES);
		glVertex2f(207,204);
		glVertex2f(207,235);
	glEnd();
	
	glColor3f(0.98,0.14,0.17);
	glBegin(GL_LINES);
		glVertex2f(217,204);
		glVertex2f(217,239);
	glEnd();
	
	glColor3f(0.98,0.14,0.27);
	glBegin(GL_LINES);
		glVertex2f(227,204);
		glVertex2f(227,230);
	glEnd();
	
	glColor3f(0.98,0.34,0.27);
	glBegin(GL_LINES);
		glVertex2f(237,204);
		glVertex2f(237,225);
	glEnd();
//cross mark
	glLineWidth(3);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(230,281);
		glVertex2f(235,284);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(230,284);
		glVertex2f(235,281);
	glEnd();
//cursor
	glPushMatrix();
	glTranslatef(cursor_y,cursor_y,0);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(180,230);
	glVertex2f(175,240);
	glVertex2f(183,235);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2f(180,234);
	glVertex2f(185,229);
	glEnd();
	glPopMatrix();
//mouse
	glColor3f(0.2,0.2,0.2);
	glPushMatrix();
	glTranslatef(184.5+cursor_y,160.5,0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
}
void file1()
{
//files
	glBegin(GL_POLYGON);          
	glColor3f(1.0,1.0,1.0);
		glVertex2f(0,160);
		glVertex2f(0,260);
		glVertex2f(40,260);
		glVertex2f(40,160);
	glEnd();
	int office_x=165;
	for(office_i=0;office_i<19;office_i++)
	{	glLineWidth(3);
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_LINES);
			glVertex2f(0,office_x);
			glVertex2f(40,office_x);
		glEnd();
		office_x=office_x+5;
	}
	glColor3f(0.72,0,0);
		glLineWidth(5);
		glBegin(GL_LINES);
		glVertex2f(0,175);
		glVertex2f(45,175);
	glEnd();
	glColor3f(0.72,0,0);
		glLineWidth(5);
		glBegin(GL_LINES);
		glVertex2f(0,161);
		glVertex2f(45,161);
	glEnd();
	glColor3f(0.72,0,0);
		glLineWidth(5);
		glBegin(GL_LINES);
		glVertex2f(45,160);
		glVertex2f(45,176.5);
	glEnd();
	
	office_x=0,office_y=4;
	for(office_i=0;office_i<11;office_i++)
	{
		glColor3f(0.72,0,0);
		glLineWidth(4);
		glBegin(GL_LINES);
		glVertex2f(office_x,160);
		glVertex2f(office_y,176.5);
		glEnd();
		office_x=office_x+4;
		office_y=office_y+4;
	}
}
void file2()
{
//files
	glBegin(GL_POLYGON);          
	glColor3f(1.0,1.0,1.0);
		glVertex2f(0,160);
		glVertex2f(0,200);
		glVertex2f(40,200);
		glVertex2f(40,160);
	glEnd();
	int office_x=165;
	for(office_i=0;office_i<7;office_i++)
	{
		glColor3f(0.7,0.7,0.7);
		glBegin(GL_LINES);
			glVertex2f(0,office_x);
			glVertex2f(40,office_x);
		glEnd();
		office_x=office_x+5;
	}
//tray
	glColor3f(0.72,0,0);
		glLineWidth(5);
		glBegin(GL_LINES);
		glVertex2f(0,175);
		glVertex2f(45,175);
	glEnd();
	glColor3f(0.72,0,0);
		glLineWidth(5);
		glBegin(GL_LINES);
		glVertex2f(0,161);
		glVertex2f(45,161);
	glEnd();
	glColor3f(0.72,0,0);
		glLineWidth(5);
		glBegin(GL_LINES);
		glVertex2f(45,160);
		glVertex2f(45,176.5);
	glEnd();
	office_x=0,office_y=4;
	for(office_i=0;office_i<11;office_i++)
	{
		glColor3f(0.72,0,0);
		glLineWidth(4);
		glBegin(GL_LINES);
		glVertex2f(office_x,160);
		glVertex2f(office_y,176.5);
		glEnd();
		office_x=office_x+4;
		office_y=office_y+4;
	}
}
void scene()
{
//floor
	glColor3f(0.0,0.25,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,100);
		glVertex2f(250,100);
		glVertex2f(250,0);
	glEnd();
//table
	glBegin(GL_POLYGON);         //brown
	glColor3f(0.84,0.419,0.0);
		glVertex2f(0,150);
		glVertex2f(0,160);
		glVertex2f(250,160);
		glVertex2f(250,150);
	glEnd();
	
	glBegin(GL_POLYGON);          //white
	glColor3f(0.45,0.45,0.45);
		glVertex2f(0,140);
		glVertex2f(0,150);
		glVertex2f(250,150);
		glVertex2f(250,140);
	glEnd();
	glColor3f(0.537,0.258,0.0);
	glRectf(0,125,250,145);
//table leg
	glRectf(0,60,15,135);
	glRectf(235,60,250,135);
//person
	glColor3f(0.18,0.18,0.18);   //bump     
	glPushMatrix();
	glTranslatef(97,65,0);
	glutSolidSphere(17,100,100);
	glPopMatrix();
	
	glColor3f(0.18,0.18,0.18);    //leg
	glBegin(GL_POLYGON);
		glVertex2f(90,45);
		glVertex2f(90,64);
		glVertex2f(179,64);
		glVertex2f(179,45);
	glEnd();
	
	glColor3f(0.18,0.18,0.18);    
	glBegin(GL_POLYGON);
		glVertex2f(90,64);
		glVertex2f(90,90);
		glVertex2f(120,90);
		glVertex2f(175,64);
	glEnd();    
	
	glColor3f(0.18,0.18,0.18);
	glBegin(GL_POLYGON);
		glVertex2f(160,0);
		glVertex2f(160,55);
		glVertex2f(182,55);
		glVertex2f(182,00);
	glEnd();    
	
	glColor3f(0.18,0.18,0.18);
	glPushMatrix();
	glTranslatef(170,55,0);
	glutSolidSphere(12,100,100);
	glPopMatrix();             
//hand	
	glColor3f(0.15,0.15,0.15);    
	glBegin(GL_POLYGON);
		glVertex2f(146,125);
		glVertex2f(146,213);
		glVertex2f(148,212.5);
		glVertex2f(162,135);
	glEnd();
	
	glPushMatrix();
	glTranslatef(143,209,0);
	glutSolidSphere(5,100,100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.12,0.15,0.15);        
	glBegin(GL_POLYGON);
		glVertex2f(155,130);
		glVertex2f(155,155);
		glVertex2f(175+cursor_y,162);
		glVertex2f(175+cursor_y,147);
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(cursor_y-20,0,0);
	glColor3f(0.9,0.9,0.9);            
	glBegin(GL_POLYGON);
		glVertex2f(195,149);
		glVertex2f(195,162);
		glVertex2f(198,163.5);
		glVertex2f(198,150);
	glEnd();
//finger
	glColor3f(0.913,0.683,0.403);
	glBegin(GL_POLYGON);
		glVertex2f(198,150);
		glVertex2f(198,161);
		glVertex2f(210,171);
		glVertex2f(214,154);
	glEnd();
	glPopMatrix();
 //back
	glColor3f(0.15,0.15,0.15);    
	glBegin(GL_POLYGON);
		glVertex2f(80,70);
		glVertex2f(80,220);
		glVertex2f(148,213);
		glVertex2f(155,70);
	glEnd();
//ears
	glColor3f(0.913,0.683,0.403);
	glPushMatrix();
	glTranslatef(135,260,0);
	glutSolidSphere(15,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(85,260,0);
	glutSolidSphere(15,100,100);
	glPopMatrix();
//head
	glColor3f(0.2,0.2,0.2);     
	glPushMatrix();
	glTranslatef(110,250,0);
	glutSolidSphere(35,100,100);
	glPopMatrix();
	
	glColor3f(0.2,0.2,0.2);
	glPushMatrix();
	glTranslatef(97,275,0);
	glutSolidSphere(25,100,100);
	glPopMatrix();
	
	glColor3f(0.2,0.2,0.2);
	glPushMatrix();
	glTranslatef(123,275,0);
	glutSolidSphere(25,100,100);
	glPopMatrix();
	
	glColor3f(0.2,0.2,0.2);
	glPushMatrix();
	glTranslatef(110,280,0);
	glutSolidSphere(25,100,100);
	glPopMatrix();
//chair
	glColor3f(c1,c2,c3);
	glBegin(GL_POLYGON);
		glVertex2f(25,80);
		glVertex2f(25,230);
		glVertex2f(135,230);
		glVertex2f(135,80);
	glEnd();
	
	glColor3f(c4,c5,c6);
	glBegin(GL_POLYGON);
		glVertex2f(135,80);
		glVertex2f(135,230);
		glVertex2f(140,225);
		glVertex2f(140,85);
	glEnd();
	
	glColor3f(0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(45,50);
		glVertex2f(45,80);
		glVertex2f(60,80);
		glVertex2f(60,50);
	glEnd();

	glColor3f(c1,c2,c3);
	glBegin(GL_POLYGON);
		glVertex2f(40,00);
		glVertex2f(40,50);
		glVertex2f(165,50);
		glVertex2f(165,00);
	glEnd();
	
	glColor3f(c4,c5,c6);
	glBegin(GL_POLYGON);
		glVertex2f(165,00);
		glVertex2f(165,50);
		glVertex2f(170,45);
		glVertex2f(170,5);
	glEnd();
//calender
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(150,380);
		glVertex2f(150,450);
		glVertex2f(200,450);
		glVertex2f(200,380);
	glEnd();
	
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
		glVertex2f(154,384);
		glVertex2f(154,430);
		glVertex2f(196,430);
		glVertex2f(196,384);
	glEnd();
	
	glColor3f(0.5,0.5,0.5);
	glLineWidth(1);
	glBegin(GL_LINES);
		glVertex2f(150,390);
		glVertex2f(200,390);
		
		glVertex2f(150,400);
		glVertex2f(200,400);
		
		glVertex2f(150,410);
		glVertex2f(200,410);
		
		glVertex2f(150,420);
		glVertex2f(200,420);    
		
		glVertex2f(154,380);
		glVertex2f(154,440);
		
		glVertex2f(160,380);
		glVertex2f(160,440);
		
		glVertex2f(166,380);
		glVertex2f(166,440);
		
		glVertex2f(172,380);
		glVertex2f(172,440);
		
		glVertex2f(178,380);
		glVertex2f(178,440);
		
		glVertex2f(184,380);
		glVertex2f(184,440);
		
		glVertex2f(190,380);
		glVertex2f(190,440);    	
	glEnd();
	
	glColor3f(0.8,0.8,0.8);
	glLineWidth(3);
	glBegin(GL_LINES);
		glVertex2f(160,440);
		glVertex2f(195,440);
		
		glVertex2f(155,435);
		glVertex2f(195,435);
	glEnd();
//clock
	glColor3f(1.0,.0,0.0);
	glPushMatrix();
	glTranslatef(50,450,0);
	glutSolidSphere(20,200,200);
	glPopMatrix();
	
	glColor3f(1.0,1.0,1.0);
	glPushMatrix();
	glTranslatef(50,450,0);
	glutSolidSphere(17,200,200);
	glPopMatrix();
	
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(50,450);
	glVertex2f(60,450);
	
	glVertex2f(50,450);
	glVertex2f(40,438);
	glEnd();
	
	glColor3f(1.0,.0,0.0);
	glPushMatrix();
	glTranslatef(50,450,0);
	glutSolidSphere(2,100,100);
	glPopMatrix();
}
void slide4()
{
	glClear(GL_COLOR_BUFFER_BIT);	
	c1=1; c2=1; c3=0.5;
	wall4();
	file1();
	computer1();
	c1=0; c2=0.607; c3=0.715; c4=0; c5=0.407;c6=0.5;
	scene();
	glPushMatrix();
	glTranslatef(250,0,0);
	c1=0.47; c2=0.32; c3=0.66;
	wall4();
	file2();
	c1=0;c2=0.576; c3=0.388;c4=0; c5=0.415; c6=0.282;
	computer2();
	scene();
	glPopMatrix();
//divider
	glColor3f(1,1,1);
	glRectf(248,0,252,500);
	glColor3f(0,0,0.8);
	drawstring(162,255,0.0,"facebook",GLUT_BITMAP_HELVETICA_12);
	glColor3f(1,1,1);
	drawstring(20,40,0.0,"Person 1",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(260,40,0.0,"Person 2",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(190,10,0.0,"Press 'e' or 'E' for next slide.",GLUT_BITMAP_TIMES_ROMAN_24);
	
	wrong_mark();
	right_mark();
	glFlush();	
}
//slide5
float x5=0 ,x15=0, x25=20, y5=0, y15=0, y25=14, z5=0, z15=0.0,z25=4,m15=0,m25=3,flag5=0;
float hand_y5=0,hand_x5=0,hand_up5=0,hand_down5=0,chips_y5=0,count5=0,mouth_x5=0,mouth_y5=0;
void timer_gym(int e)
{
	if(slide==5)
	{
	if(hand_y5<=47 && flag5==1)
	{	
		if(m15>3)
		{ 	
			m25=m25-0.2;
			mouth_y5=m25;
			if(m25<0.0)
			{
				m15=0.0;
			}	
		}
		else
		{
			m15=mouth_y5+0.2;
			mouth_y5=m15;
			if(m15==3)
			{
				m25=3;
			}
		}
	}
	else	
	{
		mouth_y5=0;
	}	
	if(hand_up5>50)
	{	
		hand_down5=hand_down5-2.0;
		hand_y5=hand_down5;
		count5=1;
		if(hand_down5<0.0)
		{
			hand_up5=0.0;
		}	
	}
	else
	{
		hand_up5=hand_up5+2.0;
		hand_y5=hand_up5;
		count5=0;
		if(hand_up5==50)
		{
			hand_down5=50;
			flag5=1;
			
		}
		if(hand_y5>2)
		{
			hand_x5=hand_x5+0.5;
			if(hand_x5>=14)
			{
				hand_x5=14;
			}
		}
	}
	if(count5==1)
	{
		chips_y5=0;
	}
	else
	{
		chips_y5=hand_y5;
	}
//exercise 
	if(x15>20)
	{ 	
		x25=x25-1.0;
		x5=x25;
		if(x25<0.0)
		{
			x15=0.0;
		}
	}
	else
	{
		x15=x5+1.0;
		x5=x15;
		if(x15==20)
		{
			x25=20;
		}
	}
	if(y15>14)
	{	
		y25=y25-0.35;		
		y5=y25;
		if(y25<0.0)
		{
			y15=0.0;
		}
	}
	else
	{
		y15=y5+0.35;
		y5=y15;
		if(y15==14)
		{
			y25=14;
		}
	}
	}
	glutPostRedisplay();
	glutTimerFunc(1, timer_gym, 0);
}
void dumbbell()
{
	glPushMatrix();
	glColor3f(0.1,0.,0.1);
	glTranslatef(426,183,0.0);  
	glutSolidSphere(9,120,120); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0.45,0.45,0.45);
	glTranslatef(426,183,0.0);  
	glutSolidSphere(3,120,120); 
	glPopMatrix();
}
void shoes()
{
	glColor3f(1.0,0.2,0.11);
	glBegin(GL_POLYGON);
	glVertex2f(37.43,-128);
	glVertex2f(42,-130);
	glVertex2f(46,-142);
	glVertex2f(40,-142);
	glVertex2f(17,-141);
	glVertex2f(17,-137);
	glVertex2f(18,-138);
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(25.6,-130);
	glVertex2f(25.5,-132);
	glVertex2f(29,-136);
	glVertex2f(29,-134);	
	glEnd();
	
	glPushMatrix();
	glTranslatef(4,1,0);
	glBegin(GL_POLYGON);
	glVertex2f(25.6,-130);
	glVertex2f(25.5,-132);
	glVertex2f(29,-136);
	glVertex2f(29,-134);	
	glEnd();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(7.3,3,0);
	glBegin(GL_POLYGON);
	glVertex2f(25.6,-130);
	glVertex2f(25.5,-132);
	glVertex2f(29,-136);
	glVertex2f(29,-134);	
	glEnd();
	glPopMatrix();
	glRectf(17.2,-140,46,-138.5);	
}
//Left scene
void wall5(int a,int b,int c,int d)
{
	for(int i=0;i<10;i++) 
	{
		glColor3f(0.84,0.0,0.466);
		glBegin(GL_POLYGON);
			glVertex2f(a,b);
			glVertex2f(a,c);
			glVertex2f(d,c);
			glVertex2f(d,b);
		glEnd();
		a=a+25;
		d=d+25;
	}
}
void chips5()
{
	glColor3f(1,1,0);
	glBegin(GL_TRIANGLES);
	glVertex2f(54,-31);
	glVertex2f(59,-19);
	glVertex2f(49,-19);
	glEnd();
}
void food5()
{
	glPushMatrix();
	glTranslatef(89,115,0);
	glutSolidSphere(4,200,200);
	glPopMatrix();
	glColor3f(0.0,0.1,0.1);
	glPushMatrix();
	glTranslatef(89,115,0);
	glutSolidSphere(1.5,200,200);
	glPopMatrix();
}
void sofa()
{
//soofa
	glColor3f(0.0,0.239,0.474);   //top
	glBegin(GL_POLYGON);
		glVertex2f(5,150);
		glVertex2f(5,245);
		glVertex2f(125,245);
		glVertex2f(125,150);
	glEnd();
	glColor3f(0.0,0.339,0.774);
	glBegin(GL_POLYGON);
		glVertex2f(0,150);
		glVertex2f(0,250);
		glVertex2f(5,245);
		glVertex2f(5,150);
	glEnd();
	glColor3f(0.0,0.439,0.774);
	glBegin(GL_POLYGON);
		glVertex2f(5,245);
		glVertex2f(0,250);
		glVertex2f(120,250);
		glVertex2f(125,245);
	glEnd();
	glColor3f(0.0,0.239,0.374);  //leg
	glBegin(GL_POLYGON);
		glVertex2f(0,100);
		glVertex2f(0,190);
		glVertex2f(30,190);
		glVertex2f(30,100);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.239,0.374);
		glVertex2f(30,100);
		glColor3f(0.0,0.139,0.374);
		glVertex2f(30,180);
		glColor3f(0.0,0.239,0.374);
		glVertex2f(110,180);
		glColor3f(0.0,0.139,0.374);
		glVertex2f(110,100);
	glEnd();
	glColor3f(0.11,0.159,0.274);    //sitting
	glBegin(GL_POLYGON);
		glVertex2f(30,150);
		glVertex2f(30,185);
		glVertex2f(105,185);
		glVertex2f(110,150);
	glEnd();
	glColor3f(0.0,0.239,0.374);  //leg right
	glBegin(GL_POLYGON);
		glVertex2f(103,100);
		glVertex2f(103,190);
		glVertex2f(133,190);
		glVertex2f(133,100);
	glEnd();
}
void slide5()
{
	glClear(GL_COLOR_BUFFER_BIT);	
//LEFT SCENE
	glColor3f(0,0.11,0.23);//floor
	glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,100);
		glVertex2f(250,100);
		glVertex2f(250,0);
	glEnd();
//wall
	glColor3f(0.91,0.45,0.73);
	glBegin(GL_POLYGON);
		glVertex2f(0,100);
		glVertex2f(0,500);
		glVertex2f(250,500);
		glVertex2f(250,100);
	glEnd();
	wall5(5,100,500,10);       //wall style
//sofa
	glPushMatrix();
	glTranslatef(0,-30,0);
	sofa();
	glPopMatrix();
//lamp
	glBegin(GL_POLYGON);
		glColor3f(0.01,0.06,0.66);
		glVertex2f(190,250);
		glColor3f(1.0,0.1,0.1);
		glVertex2f(200,300);
		glColor3f(1.0,0.0,0.1);
		glVertex2f(230,300);
		glColor3f(1.0,1.0,0.1);
		glVertex2f(240,250);
	glEnd();
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(1.0,0.0,1.0);
		glVertex2f(215,0);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(215,250);
	glEnd();
	glLineWidth(2);
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
		glVertex2f(200,220);
		glVertex2f(200,250);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glPointSize(5);
	glBegin(GL_POINTS);
		glVertex2f(200,220);
	glEnd();
//frame
	glColor3f(0.08,0.1,0.08);
	glBegin(GL_POLYGON);
		glVertex2f(140,320);
		glVertex2f(140,450);
		glVertex2f(200,450);
		glVertex2f(200,320);
	glEnd();
	glColor3f(1.0,0.9,0.9);
	glBegin(GL_POLYGON);
		glVertex2f(150,330);
		glVertex2f(150,440);
		glVertex2f(190,440);
		glVertex2f(190,330);
	glEnd();
	glColor3f(0.96,0.749,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(155,340);
		glVertex2f(155,430);
		glVertex2f(185,430);
		glVertex2f(185,340);
	glEnd();
	glColor3f(0.8,0.4,0.2);
	glBegin(GL_POLYGON);
		glVertex2f(155,340);
		glVertex2f(155,360);
		glVertex2f(185,370);
		glVertex2f(185,340);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
		glVertex2f(160,340);
		glVertex2f(160,380);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(157,370);
	glVertex2f(160,385);
	glVertex2f(163,370);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(170,340);
		glVertex2f(170,390);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(167,380);
	glVertex2f(170,395);
	
	glVertex2f(173,380);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180,340);
		glVertex2f(180,390);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(177,380);
		glVertex2f(180,395);
		glVertex2f(183,380);
	glEnd();
//sofa	
	glPushMatrix();
		glTranslatef(175,420,0);
		glutWireSphere(5,240,240);
	glPopMatrix();
	glPushMatrix();    
		glColor3f(0.0,0.239,0.374);
		glTranslatef(14,155,0);
		glutSolidSphere(17,100,100);
	glPopMatrix();
	glPushMatrix();  
		glColor3f(0.0,0.239,0.374);
		glTranslatef(119,155,0);
		glutSolidSphere(16,100,100);
	glPopMatrix();
//Person
	glPushMatrix();
	glTranslatef(0,200,0);
//body
	glColor3f(0.53,0.57,0.13);
	glBegin(GL_POLYGON);
		glVertex2f(30,-50);
		glVertex2f(30,8);
		glVertex2f(40,14);
		glVertex2f(70,14);
		glVertex2f(80,8);
		glVertex2f(80,-50);
	glEnd();
//leg
	glColor3f(0.9,.4,0.4);
	glPushMatrix();
	glTranslatef(55,-55,0.0);  
	glutSolidSphere(25,120,120); 
	glPopMatrix();
//shirt stomach
	glColor3f(0.53,0.57,0.13);
	glBegin(GL_POLYGON);
		glVertex2f(30,-20);
		glVertex2f(80,-20);
		glVertex2f(78,-60);
		glVertex2f(33,-60);
	glEnd();
// Leg left
	glColor3f(0.9,.1,0.1);
	glPushMatrix();
	glTranslatef(41,-67,0.0);  
	glutSolidSphere(8,120,120); 
	glPopMatrix();
	
	glBegin(GL_POLYGON);
		glVertex2f(32,-65);
		glVertex2f(50,-65);
		glVertex2f(68,-125);
		glVertex2f(54,-125);
	glEnd();
//
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(56,-125);
		glVertex2f(66,-125);
		glVertex2f(76,-136);
		glVertex2f(76,-138);
		glVertex2f(55,-132);
		glVertex2f(55,-127);
	glEnd();
//Leg right
	glColor3f(0.9,.1,0.1);
	glPushMatrix();
	glTranslatef(66,-67,0.0);  
	glutSolidSphere(8,120,120); 
	glPopMatrix();
	glBegin(GL_POLYGON);
		glVertex2f(57,-65);
		glVertex2f(75,-65);
		glVertex2f(93,-125);
		glVertex2f(79,-125);
	glEnd();
//
	glPushMatrix();
	glTranslatef(24,0,0);
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(56,-125);
		glVertex2f(66,-125);
		glVertex2f(76,-136);
		glVertex2f(76,-138);
		glVertex2f(55,-132);
		glVertex2f(55,-127);
	glEnd();
	glPopMatrix();
//hand	left
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(12,-28);
		glVertex2f(2,-20);
		glVertex2f(34,10);
		glVertex2f(34,00);
	glEnd();
	glPopMatrix();
//hand	right
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(92,-20);
		glVertex2f(105,-18);
		glVertex2f(76,10);
		glVertex2f(76,00);
	glEnd();
	glPopMatrix();
//Shirt Hand Left
	glPushMatrix();
	glColor3f(0.53,0.57,0.13);
	glBegin(GL_POLYGON);
		glVertex2f(10,-5);
		glVertex2f(40,14.2);
		glVertex2f(40,0);
		glVertex2f(20,-20);
	glEnd();
//shirt hand right
	glColor3f(0.53,0.57,0.13);
	glBegin(GL_POLYGON);
		glVertex2f(100,-5);
		glVertex2f(70,14.2);
		glVertex2f(70,0);
		glVertex2f(90,-20);
	glEnd();
	glPopMatrix();
	//Neck
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(50.5,22);
		glVertex2f(59.5,22);
		glVertex2f(59.5,10);
		glVertex2f(50.5,10);	
	glEnd();
	
	glBegin(GL_TRIANGLES);
		glVertex2f(48,14);
		glVertex2f(62,14);
		glVertex2f(55.,4);
	glEnd();
	glPopMatrix();
//Hair
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55,45,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(25,100,500); 
	glPopMatrix();
//Face
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(51.,43,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(20,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(59,43,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(20,100,500); 
	glPopMatrix();
//Beard
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55.5,23,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.7,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(53.9,22.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(57.5,21.9,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
//Hair
	glBegin(GL_POLYGON);
		glVertex2i(42,65);
		glVertex2i(35,45);
		glVertex2i(30,45);
		glVertex2i(38,65);
	glEnd();
	
	glPushMatrix();
	glTranslatef(44,61,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();
	
	glBegin(GL_POLYGON);
		glVertex2i(48,55);
		glVertex2i(48,65);
		glVertex2i(72,63);
		glVertex2i(76,55);
	glEnd();

	glBegin(GL_POLYGON);
		glVertex2i(71,57);
		glVertex2i(75,59);
		glVertex2i(79,48);
		glVertex2i(77,46);
	glEnd();
	
	glPushMatrix();
	glTranslatef(56,60,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(10.4,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(68,59,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.8,100,500); 
	glPopMatrix();
//mouth
	glPushMatrix();
	glColor3f(.6,0.3,0.3);
	glTranslatef(56,35+mouth_y5,0.0); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(56,36.3+mouth_y5,0.0);  
	glutSolidSphere(8,100,500); 
	glPopMatrix();
	glRectf(45,33.65,64.3,40);
	
	glColor3f(.6,0.3,0.3);
	glRectf(48,32.8,64.1,33.6);	
			
	glColor3f(1.0,0.8,0.8);
	glRectf(45,32.8,47+mouth_y5,34);
	glRectf(64.3-mouth_y5,32.8,65,34);	
//eyebrow
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(44,40.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(44.5,39.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(43,38,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	

	glPushMatrix();
	glTranslatef(52.5,43.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//	
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(67,40.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(66.5,39.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(72,37,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(3,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(57.5,43.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//eye	left
	glPushMatrix();
	glColor3f(0.1,0.0,0.0);
	glTranslatef(43,41,0.0); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
//eye right
	glPushMatrix();
	glTranslatef(67,41,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(44,40.8,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(68.5,40.8,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
//ear
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(33.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(76.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
//hand	right
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(98,-18,.0); 
	glutSolidSphere(5.8,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0,0,0);
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(100,-12);
		glVertex2f(60,-20+hand_y5);
		glVertex2f(60,-26+hand_y5);
		glVertex2f(107-hand_x5,-23);
	glEnd();
	glPopMatrix();
//hand	left
	glPushMatrix();
	glTranslatef(0,0,0);
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(8,-15);
		glVertex2f(-2,-24);
		glVertex2f(45,-38);
		glVertex2f(48,-34);
	glEnd();
	glPopMatrix();
//	Chips pack
	glColor3f(0.8,0.2,0.3);
	glBegin(GL_POLYGON);
		glVertex2f(45,-19);
		glVertex2f(65,-29);
		glVertex2f(55,-54);
		glVertex2f(35,-49);
	glEnd();
//Chips
	glPushMatrix();
	glTranslatef(0,chips_y5,0);
	chips5();
	glPopMatrix();	
	chips5();
	glPushMatrix();
	glTranslatef(-4,-2,0);
	chips5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(6,-3,0);
	chips5();
	glPopMatrix();
//	Chips pack	
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(45,-24);
		glVertex2f(65,-34);
		glVertex2f(55,-54);
		glVertex2f(35,-49);
	glEnd();
	glPushMatrix();
	glColor3f(0.58,0.58,0.58);
	glTranslatef(50,-41,0);
	glutSolidSphere(8,100,100);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(03,-51,0);
	glRotatef(50,0,1,1);
	chips5();
	glPopMatrix();
//Left finger
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(42,-30);
		glVertex2f(49,-28);
		glVertex2f(49,-30);
		glVertex2f(35,-33);
	glEnd();
	
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(30,-31);
		glVertex2f(50,-32);
		glVertex2f(50,-34);
		glVertex2f(30,-34);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(30,-32);
		glVertex2f(49,-36);
		glVertex2f(49,-38);
		glVertex2f(31,-34);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(30,-32);
		glVertex2f(47,-39);
		glVertex2f(47,-41);
		glVertex2f(31,-34);
	glEnd();
//Right finger
	glPushMatrix();
	glTranslatef(0,hand_y5,0);
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(61,-20);
		glVertex2f(60,-23);
		glVertex2f(55,-18);
		glVertex2f(55,-16);
	glEnd();
	glPopMatrix();
//Right hand finger
	glPushMatrix();
	glTranslatef(0,hand_y5,0);
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(61,-22);
		glVertex2f(60,-24);
		glVertex2f(53,-22);
		glVertex2f(53,-20);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(61,-22);
		glVertex2f(60,-26);
		glVertex2f(53,-26);
		glVertex2f(53,-24);
	glEnd();
	glColor3f(1,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(63,-22);
		glVertex2f(63,-26);
		glVertex2f(54,-29);
		glVertex2f(54,-28);
	glEnd();
	glPopMatrix();
	glPopMatrix();
//RIGHT SCENE
//land
	glColor3f(0.1,0.2,0.3);
	glRectf(250,0,500,140);
//wall
	glColor3f(0.7,0.8,0.7);
	glRectf(250,140,500,500);
//bottom 1
	glColor3f(0.1,0.15,0.25);
	glRectf(250,140,500,150);
//bottom 2
	glColor3f(0.9,0.9,0.9);
	glRectf(250,150,500,155);
//top 1
	glColor3f(0.75,0.75,0.75);
	glRectf(250,460,500,500);
//top 2
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(250,430);
		glVertex2f(250,460);
		glVertex2f(500,480);
		glVertex2f(500,430);
	glEnd();
//top line
	glColor3f(0.9,0.9,0.9);
	glRectf(250,448,500,450);
//top 3
	glColor3f(0.84,0.84,0.84);
	glRectf(250,400,500,425);
//Light 1
	glColor3f(0.65,0.65,0.65);
	glBegin(GL_TRIANGLES);
		glVertex2f(295,410);
		glVertex2f(283,395);
		glVertex2f(307,395);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(295,430);
		glVertex2f(295,406);
	glEnd();
//Light 2
	glColor3f(0.65,0.65,0.65);
	glBegin(GL_TRIANGLES);
		glVertex2f(375,420);
		glVertex2f(359,400);
		glVertex2f(391,400);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(375,480);
		glVertex2f(375,416);
	glEnd();
//Light 3
	glColor3f(0.65,0.65,0.65);
	glBegin(GL_TRIANGLES);
		glVertex2f(485,410);
		glVertex2f(473,395);
		glVertex2f(497,395);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(485,435);
		glVertex2f(485,406);
	glEnd();
//Machine
	glPushMatrix();
	glTranslatef(-15,0,0);
	glColor3f(0,0,0); 
	glRectf(310,130,340,140); //base
	glColor3f(0.45,0.45,0.45);
	glRectf(280,160,370,165);
	glColor3f(0.0,0.25,0.0);
	glRectf(310,155,340,160);
	glColor3f(0.7,0.7,0.7);
	glRectf(320,140,330,160);
	glColor3f(0.59,0.59,0.59);
	glRectf(318,165,332,260);
	glColor3f(0.0,0.40,0.0);
	glRectf(305,160,345,165);
	glColor3f(0.0,0.58,0.39);
	glRectf(305,165,345,170);
//side rod left
	glColor3f(0.45,0.45,0.45);
	glRectf(293,165,304,190);
	glRectf(296,190,302,210);
	
	glBegin(GL_POLYGON);
		glVertex2f(296,210);
		glVertex2f(302,210);
		glVertex2f(283,231);
		glVertex2f(277,231);
	glEnd();
	glRectf(278,230,283,280);
	glRectf(278,280,300,285);
	glColor3f(0.15,0.1,0.0);
	glRectf(290,279,305,286);
// side rod right
	glColor3f(0.45,0.45,0.45);
	glRectf(346,165,357,190);
	glRectf(349,190,355,210);
	glBegin(GL_POLYGON);
		glVertex2f(355,210);
		glVertex2f(349,210);
		glVertex2f(370,231);
		glVertex2f(376,231);
	glEnd();
	glRectf(370,230,375,280);
	glRectf(375,280,353,285);
	glColor3f(0.15,0.1,0.0);
	glRectf(347,279,362,286);
// seating	
	glColor3f(0.0,0.58,0.39);
	glRectf(306,174,344,230);
	glRectf(314,232,336,245);
	glRectf(314,247,336,262);
	glPopMatrix();
//doumbbell placer
	glColor3f(0.45,0.45,0.45);
	glRectf(410,140,415,180);
	glRectf(490,140,495,180);
	
	glRectf(410,180,495,185);
	glRectf(410,160,495,165);
	
	glColor3f(0,0,0);
	glRectf(405,135,420,142);
	glRectf(485,135,500,142);
//dumbbell
	dumbbell();
	glPushMatrix();
	glTranslatef(25,0,0);
	dumbbell();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(50,0,0);
	dumbbell();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(0,-20,0);
	dumbbell();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(25,-20,0);
	dumbbell();
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(50,-20,0);
	dumbbell();
	glPopMatrix();
 //
	glPushMatrix();
	glTranslatef(200,200,0);
	
	glPushMatrix();
	glTranslatef(120,30,0);
//body
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(30,-50);
		glVertex2f(30,14);
		glVertex2f(80,14);
		glVertex2f(80,-50);
	glEnd();
//hand	left
	glPushMatrix();
	glTranslatef(z5,x5,0);
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(2,45);
		glVertex2f(5,45);
		glVertex2f(10,10);
		glVertex2f(-1,02);
	glEnd();
	glPopMatrix();
// 
glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(-1+z5,02+x5);
		glVertex2f(10+z5,12+x5);
		glVertex2f(38,12);
		glVertex2f(38,02);
	glEnd();
	glPopMatrix();
//hand	right
	glPushMatrix();
	glTranslatef(-z5,x5,0);
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(107,45);
		glVertex2f(104,45);
		glVertex2f(100,10);
		glVertex2f(110,02);
	glEnd();
	glPopMatrix();
// 
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(110-z5,02+x5);
		glVertex2f(102-z5,12+x5);
		glVertex2f(74,12);
		glVertex2f(74,02);
	glEnd();
	glPopMatrix();
//Doumbbell left
	glPushMatrix();
	glTranslatef(z5,x5,0);
	glColor3f(0.4,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(-10,43);
		glVertex2f(-10,47);
		glVertex2f(20,47);
		glVertex2f(20,43);
	glEnd();
//Left side	1
	glColor3f(0.1,0.,0.1);
	glBegin(GL_POLYGON);
		glVertex2f(-8,58);
		glVertex2f(0,58);
		glVertex2f(0,32);
		glVertex2f(-8,32);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(-14,54);
		glVertex2f(-8,54);
		glVertex2f(-8,36);
		glVertex2f(-14,36);
	glEnd();
//left side 2
	glBegin(GL_POLYGON);
		glVertex2f(16,58);
		glVertex2f(8,58);
		glVertex2f(8,32);
		glVertex2f(16,32);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(22,54);
		glVertex2f(16,54);
		glVertex2f(16,36);
		glVertex2f(22,36);
	glEnd();
	glPopMatrix();
//Doumbbell Right
	glPushMatrix();
	glTranslatef(-z5,x5,0);
	glColor3f(0.4,0.5,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(90.5,43);
		glVertex2f(90.5,47);
		glVertex2f(120.5,47);
		glVertex2f(120.5,43);
	glEnd();
//Right side1
	glColor3f(0.1,0.,0.1);
	glBegin(GL_POLYGON);
		glVertex2f(92.5,58);
		glVertex2f(100.5,58);
		glVertex2f(100.5,32);
		glVertex2f(92.5,32);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(86.5,54);
		glVertex2f(92.5,54);
		glVertex2f(92.5,36);
		glVertex2f(86.5,36);
	glEnd();
//Rigt side 2
	glBegin(GL_POLYGON);
		glVertex2f(118,58);
		glVertex2f(110,58);
		glVertex2f(110,32);
		glVertex2f(118,32);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(124,54);
		glVertex2f(118,54);
		glVertex2f(118,36);
		glVertex2f(124,36);
	glEnd();
	glPopMatrix();
// Finger left
	glPushMatrix();
	glTranslatef(z5,x5,0);
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(6,46);
		glVertex2f(7,46);
		glVertex2f(6,40);
		glVertex2f(4,40);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(1.3,48);
		glVertex2f(2.4,48);
		glVertex2f(2.4,45);
		glVertex2f(1.3,45);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(3.,48);
		glVertex2f(4.1,48);
		glVertex2f(4.1,45);
		glVertex2f(3.,45);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(5.,48);
		glVertex2f(6.3,48);
		glVertex2f(6.3,46);
		glVertex2f(5.,46);
	glEnd();
	glPopMatrix();
// Finger Right
	glPushMatrix();
	glTranslatef(-z5,x5,0);
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(107.5,46);
		glVertex2f(108.5,46);
		glVertex2f(107.5,40);
		glVertex2f(105.5,40);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(103,48);
		glVertex2f(103.9,48);
		glVertex2f(103.9,45);
		glVertex2f(103,45);
	glEnd();	
	glBegin(GL_POLYGON);
		glVertex2f(104.5,48);
		glVertex2f(105.7,48);
		glVertex2f(105.7,45);
		glVertex2f(104.5,45);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(106.5,48);
		glVertex2f(107.7,48);
		glVertex2f(107.7,46);
		glVertex2f(106.5,46);
	glEnd();
	glPopMatrix();
//Shirt Hand Left
	glPushMatrix();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(13+z5+3,14+x5);
		glVertex2f(40,14);
		glVertex2f(40,-1);
		glVertex2f(13,0+x5-6);
	glEnd();
//shirt hand right
	glBegin(GL_POLYGON);
		glVertex2f(97-z5-3,14+x5);
		glVertex2f(70,14);
		glVertex2f(70,-1);
		glVertex2f(97,00+x5-6);
	glEnd();
	glPopMatrix();
//Neck
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(50.5,22);
		glVertex2f(59.5,22);
		glVertex2f(59.5,10);
		glVertex2f(50.5,10);	
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex2f(48,14);
		glVertex2f(62,14);
		glVertex2f(55.,4);
	glEnd();
	glPopMatrix();
//Hair
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55,45,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(25,100,500); 
	glPopMatrix();
//Face
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(51.,43,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(20,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(59,43,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(20,100,500); 
	glPopMatrix();
//Beard
	glPushMatrix();
	glColor3f(0.0,0.0,0.0);
	glTranslatef(55.5,23,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.7,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(53.9,22.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(57.5,21.9,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2.,100,500); 
	glPopMatrix();
//
	glBegin(GL_POLYGON);
		glVertex2i(42,65);
		glVertex2i(35,45);
		glVertex2i(30,45);
		glVertex2i(38,65);
	glEnd();
	glPushMatrix();
	glTranslatef(44,61,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();
	glBegin(GL_POLYGON);
		glVertex2i(48,55);
		glVertex2i(48,65);
		glVertex2i(72,63);
		glVertex2i(76,55);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2i(71,57);
		glVertex2i(75,59);
		glVertex2i(79,48);
		glVertex2i(77,46);
	glEnd();
	glPushMatrix();
	glTranslatef(56,60,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(10.4,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(68,59,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.8,100,500); 
	glPopMatrix();
//mouth
	glPushMatrix();
	glColor3f(.6,0.3,0.3);
	glTranslatef(56,34,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();

	glPushMatrix();
	glColor3f(1.0,0.8,0.8);
	glTranslatef(56,35,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(8,100,500); 
	glPopMatrix();
		
	glColor3f(.6,0.3,0.3);
	glRectf(48,32.8,64.1,33.6);	
//eyebrow
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(44,40.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(44.5,39.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(43,38,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	

	glPushMatrix();
	glTranslatef(52.5,43.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//	
	glColor3f(.0,0.,0.);
	glPushMatrix();
	glTranslatef(67,40.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(66.5,39.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(72,37,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(3,100,500); 
	glPopMatrix();	
	
	glPushMatrix();
	glTranslatef(57.5,43.,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(5.9,100,500); 
	glPopMatrix();	
//eye	
	glPushMatrix();
	glColor3f(0,0.2,0.0);
	glTranslatef(43,41,0.0); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0.0,0.2,0.0);
	glTranslatef(67,41,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(2,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(43.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(1,1,1);
	glTranslatef(67.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(0.5,100,500); 
	glPopMatrix();
//ear
	glColor3f(1.0,0.8,0.8);
	glPushMatrix();
	glTranslatef(33.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(76.5,42.5,0.0); 
	glRotatef(0,1,0,1); 
	glutSolidSphere(6,100,500); 
	glPopMatrix();
//shorts
	glColor3f(0.0,1.0,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(30,-50);
		glVertex2f(60,-50);
		glVertex2f(50,-80);
		glVertex2f(28,-80);
	glEnd();
	glColor3f(0.0,1.0,0.8);
	glBegin(GL_POLYGON);
		glVertex2f(80,-50);
		glVertex2f(82,-80);
		glVertex2f(60,-80);
		glVertex2f(50,-50);
	glEnd();
//leg left
	glColor3f(1.0,0.8,0.6);
	glBegin(GL_POLYGON);
		glVertex2f(30,-80);
		glVertex2f(48,-80);
		glVertex2f(40.5,-130);
		glVertex2f(37.5,-130);	
	glEnd();
// leg right	
	glColor3f(1.0,0.8,0.6);
	glBegin(GL_POLYGON);
		glVertex2f(62,-80);
		glVertex2f(80,-80);
		glVertex2f(72.5,-130);
		glVertex2f(69.5,-130);	
	glEnd();
//Shoes Left
	shoes();
// SHOES right	
	glPushMatrix();
	glTranslatef(110,00,0);
	glRotatef(180,0,1,0);
	shoes();
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
//Left scene continue
//table
	glColor3f(0.45,0.45,0.45);
	glBegin(GL_POLYGON);
		glVertex2f(80,80);
		glVertex2f(80,92);
		glVertex2f(200,92);
		glVertex2f(200,80);
	glEnd();
	glColor3f(1.0,0.78,0.05);
	glBegin(GL_POLYGON);
		glVertex2f(80,92);
		glVertex2f(80,102);
		glVertex2f(200,102);
		glVertex2f(200,92);
	glEnd();
	glColor3f(1.0,0.68,0.05);
	glBegin(GL_POLYGON);
		glVertex2f(60,97);
		glVertex2f(60,105);
		glVertex2f(80,102.5);
		glVertex2f(80,92);
	glEnd();
	glColor3f(0.45,0.45,0.45);
	glBegin(GL_POLYGON);
		glVertex2f(85,0);
		glVertex2f(85,80);
		glVertex2f(97,80);
		glVertex2f(97,0);
	glEnd();	
	glColor3f(0.45,0.45,0.45);
	glBegin(GL_POLYGON);
		glVertex2f(64,0);
		glVertex2f(64,85);
		glVertex2f(74,85);
		glVertex2f(74,0);
	glEnd();
	glColor3f(0.25,0.25,0.25);
	glBegin(GL_POLYGON);
		glVertex2f(60,85);
		glVertex2f(60,97);
		glVertex2f(80,92);
		glVertex2f(80,80);
	glEnd();
//base
	glColor3f(0.96,0.749,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(130,0);
		glVertex2f(130,50);
		glVertex2f(250,50);
		glVertex2f(250,0);
	glEnd();
	glColor3f(1.0,0.84,0.29);
	glBegin(GL_POLYGON);
		glVertex2f(115,0);
		glVertex2f(115,60);
		glVertex2f(130,50);
		glVertex2f(130,0);
	glEnd();
	glColor3f(1.0,0.94,0.39);
	glBegin(GL_POLYGON);
		glVertex2f(130,50);
		glVertex2f(115,60);
		glVertex2f(250,60);
		glVertex2f(250,50);
	glEnd();	
//food	
	glPushMatrix();
	glColor3f(1.0,0.1,0.1);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(3,4,0);
	glColor3f(0.8,1.0,0.0);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(7,5,0);
	glColor3f(0.99,1.0,0.0);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(11,6,0);
	glColor3f(0.99,0.0,0.0);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(5,00,0);
	glColor3f(0.2,0.9,0.0);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(11,0,0);
	glColor3f(0.99,0.6,0.10);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(15,6,0);
	glColor3f(0.99,1.0,0.10);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(15,-0.2,0);
	glColor3f(0.0,1.0,0.50);
	food5();
	glPopMatrix();	
	
	glPopMatrix();
	glPushMatrix();
	glTranslatef(18.5,2,0);
	glColor3f(0.99,0.0,0.10);
	food5();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(22,0,0);
	glColor3f(0.99,1.0,0.10);
	food5();
	glPopMatrix();
//food bowl
	glColor3f(0.79,0.47,0.43);
	glBegin(GL_POLYGON);
		glVertex2f(85,115);	
		glVertex2f(100,115);
		glVertex2f(100,100);
		glVertex2f(92.4,100);
		glVertex2f(85,110);
	glEnd();
	glColor3f(0.73,0.33,0.27);
	glBegin(GL_POLYGON);
		glVertex2f(115,115);	
		glVertex2f(100,115);
		glVertex2f(100,100);
		glVertex2f(107.6,100);
		glVertex2f(115,110);
	glEnd();
//tv
	glColor3f(0.18,0.18,0.18);
	glBegin(GL_POLYGON);
		glVertex2f(120,100);
		glVertex2f(120,200);
		glVertex2f(250,200);
		glVertex2f(250,100);
	glEnd();
	glColor3f(0.08,0.08,0.08);
	glBegin(GL_POLYGON);
		glVertex2f(116,104);
		glVertex2f(116,202);
		glVertex2f(120,200);
		glVertex2f(120,100);
	glEnd();
	glColor3f(0.08,0.18,0.18);
	glBegin(GL_POLYGON);
		glVertex2f(120,200);
		glVertex2f(116,202);
		glVertex2f(250,202);
		glVertex2f(250,200);
	glEnd();
	glColor3f(0.08,0.08,0.08);
	glBegin(GL_POLYGON);
		glVertex2f(160,130);
		glVertex2f(160,170);
		glVertex2f(240,170);
		glVertex2f(240,130);
	glEnd();
	glColor3f(0.08,0.08,0.08);
	glBegin(GL_POLYGON);
		glVertex2f(165,110);
		glVertex2f(165,120);
		glVertex2f(235,120);
		glVertex2f(235,110);
	glEnd();
	glColor3f(0.08,0.08,0.08);
	glBegin(GL_POLYGON);
		glVertex2f(205,55);
		glVertex2f(190,140);
		glVertex2f(215,140);
		glVertex2f(225,55);
	glEnd();
	glColor3f(0.08,0.1,0.08);
	glBegin(GL_POLYGON);
		glVertex2f(200,55);
		glVertex2f(192,135);
		glVertex2f(197,141);
		glVertex2f(205,55);
	glEnd();
	glColor3f(0.08,0.1,0.08);
	glBegin(GL_POLYGON);
		glVertex2f(170,52);
		glVertex2f(170,62);
		glVertex2f(250,62);
		glVertex2f(250,52);
	glEnd();
	glColor3f(1,1,1);
	glRectf(248,0,252,500);
	glColor3f(1,1,1);
	drawstring(20,40,0.0,"Person 1",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(260,40,0.0,"Person 2",GLUT_BITMAP_TIMES_ROMAN_24);
	drawstring(190,10,0.0,"Press 'f' or 'F' for next slide.",GLUT_BITMAP_TIMES_ROMAN_24);
	wrong_mark();
	right_mark();
	glFlush();
}
void slide6()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(0,0);
		glColor3f(0,1,0);
		glVertex2f(0,500);
		glColor3f(1,1,0);
		glVertex2f(500,500);
		glColor3f(0,1,1);
		glVertex2f(500,0);
	glEnd();
	glPushMatrix();
	glTranslatef(200,300,0);
	glScalef(0.01,0.01,0);
	drawstring(200,300,0.0,"THANK YOU",GLUT_BITMAP_TIMES_ROMAN_24);  
	glPopMatrix();
	drawstring(190,10,0.0,"Press 'x' or 'X' for exit.",GLUT_BITMAP_TIMES_ROMAN_24);
		
	glFlush();
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT );
        if (slide==0)
        	frontscreen();
		else if(slide==1)
		{
			slide1();
		}
		else if(slide==2)
		{
			slide2();
		}
		else if(slide==3)
		{
			slide3();
		}
		else if(slide==4)
		{
			slide4();
		}
		else if(slide==5)
		{
			slide5();
		}
		else if(slide==6)
		{
			slide6();
		}
		
		glutPostRedisplay ();	
}
void keyboard(unsigned char key,int x,int y)
{
	if(key=='a' || key=='A')
		slide=1;
	else if(key=='b' || key=='B')
		slide=2;
	else if(key=='c' || key=='C')
		slide=3;
	else if(key=='d' || key=='D')
		slide=4;
	else if(key=='e' || key=='E')
		slide=5;
	else if(key=='f' || key=='F')
		slide=6;
	else if(key=='x' || key=='X' )
		exit(0);
	glutPostRedisplay();
}
void myreshape(int w, int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
		glOrtho(0.0,350.0, 0.0*(GLfloat)h/(GLfloat)w,500.0*(GLfloat)h/(GLfloat)w, 0.0,500);
	else
		glOrtho(0.0*(GLfloat)w/(GLfloat)h,350.0*(GLfloat)w/(GLfloat)h, 0.0,500.0, 0.0,500);
  glMatrixMode(GL_MODELVIEW);
  glutPostRedisplay();
 }

int main(int argc,char **argv)
{
	glutInit(&argc,argv);			
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	
	glutInitWindowSize(1000,700);
	glutInitWindowPosition(00,00);
	glutCreateWindow("THE RIGHT CHOICE");
	glClearColor(0.0,0.0,0.0,0.0);	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,500.0,0.0,500.0,0.0,500.0);	
	glutReshapeFunc(myreshape);		
	glutDisplayFunc(display);
	timer_sun(0);
	timer_sun1(0);
	timer_eat(0);
	timer_office(0);
	timer_gym(0);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return(0);


}
