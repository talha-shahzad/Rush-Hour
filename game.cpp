//============================================================================
// Name        : talhashahzad.cpp
// Author      : FAST CS Department
// Version     :  my own version
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>

#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;


void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

 int total=0;
bool cardimum1=false;
bool cardimum2=false;

 int rostrum=0;

 			// FOR YELLOW CAR / DRIVING CAR 
 			
int firstx = 5, firsty = 850;

void itsmycar() {
    
	DrawSquare(firstx+8, firsty+5, 27, colors[LIGHT_BLUE]);
	DrawRectangle(firstx,firsty,40,20,colors[ORANGE]);
	DrawCircle(firstx+5,firsty,5,colors[BLACK]);
	DrawCircle(firstx+35,firsty,5,colors[BLACK]);
	glutPostRedisplay();
}

void itsmycar0() {
    
	DrawSquare(firstx+8, firsty+5, 27, colors[LIGHT_BLUE]);
	DrawRectangle(firstx,firsty,40,20,colors[RED]);
	DrawCircle(firstx+5,firsty,5,colors[BLACK]);
	DrawCircle(firstx+35,firsty,5,colors[BLACK]);
	glutPostRedisplay();
}



			// FOR BLUE CAR
int secondx = 400, secondy = 50;
void itsmycar1() {
    
	DrawSquare(secondx+8, secondy+5, 27, colors[LIGHT_BLUE]);
	DrawRectangle(secondx,secondy,40,secondy-30,colors[CADET_BLUE]);
	DrawCircle(secondx+5,secondy,5,colors[BLACK]);
	DrawCircle(secondx+35,secondy,5,colors[BLACK]);
	glutPostRedisplay();
}
bool plagind1 = true;
void runcarfast1() {
	
	if (secondx >= 100 && plagind1) {
		secondx -= 10;
		cout << "going left";
		if(secondx < 110)
			plagind1 = false;
			
	}
	else if (secondx < 400 && !plagind1) {
		cout << "go right";
		secondx += 10;
		if (secondx > 390)
			plagind1 = true;
	}
}


			// FOE GREEN CAR
int thirdx = 50, thirdy = 250;
void itsmycar2() {
    
	DrawSquare(thirdx+8, thirdy+5, 27, colors[SLATE_GRAY]);
	DrawRectangle(thirdx,thirdy,40,20,colors[GREEN]);
	DrawCircle(thirdx+5,thirdy,5,colors[BLACK]);
	DrawCircle(thirdx+35,thirdy,5,colors[BLACK]);
	glutPostRedisplay();
}
bool plagind2 = true;
void runcarfast2() {
	
	if (thirdy > 1 && plagind2) {
		thirdy -= 10;
		cout << "going left";
		if(thirdy < 260)
			plagind2 = false;

	}
	else if (thirdy < 1000 && !plagind2) {
		cout << "go right";
		thirdy += 10;
		if (thirdy > 790)
			plagind2 = true;
	}
}

				// FOR SEA GREEN CAR
int fourthx = 250, fourthy = 350;
void itsmycar3() {
    
	DrawSquare(fourthx+8, fourthy+5, 27, colors[SLATE_GRAY]);
	DrawRectangle(fourthx,fourthy,40,20,colors[DARK_SEA_GREEN]);
	DrawCircle(fourthx+5,fourthy,5,colors[BLACK]);
	DrawCircle(fourthx+35,fourthy,5,colors[BLACK]);
	glutPostRedisplay();
}
bool plagind3 = true;
void runcarfast3() {
	
	if (fourthy >1 && plagind3) {
		fourthy -= 10;
		cout << "going left";
		if(fourthy < 360)
			plagind3 = false;

	}
	else if (fourthy < 1000 && !plagind3) {
		cout << "go right";
		fourthy += 10;
		if (fourthy > 540)
			plagind3 = true;
	}
}
				// FOR AQUA CAR
int fifthx = 550, fifthy = 350;
void itsmycar4() {
    
	DrawSquare(fifthx+8, fifthy+5, 27, colors[SLATE_GRAY]);
	DrawRectangle(fifthx,fifthy,40,20,colors[AQUA_MARINE]);
	DrawCircle(fifthx+5,fifthy,5,colors[BLACK]);
	DrawCircle(fifthx+35,fifthy,5,colors[BLACK]);
	glutPostRedisplay();
}
bool plagind4 = true;
void runcarfast4() {
	
	if (fifthy >1 && plagind4) {
		fifthy -= 10;
		cout << "going left";
		if(fifthy < 360)
			plagind4 = false;

	}
	else if (fifthy < 1000 && !plagind4) {
		cout << "go right";
		fifthy += 10;
		if(fifthy > 690)
			plagind4 = true;
	}
}

				// RED CAR
int sixthx = 650, sixthy = 500;
void itsmycar5() {
    
	DrawSquare(sixthx+8, sixthy+5, 27, colors[LIGHT_BLUE]);
	DrawRectangle(sixthx,sixthy,40,20,colors[PURPLE]);
	DrawCircle(sixthx+5,sixthy,5,colors[BLACK]);
	DrawCircle(sixthx+35,sixthy,5,colors[BLACK]);
	glutPostRedisplay();
}
bool plagind5 = true;
void runcarfast5() {
	
	if (sixthy >1 && plagind5) {
		sixthy -= 10;
		cout << "going left";
		if(sixthy < 10)
			plagind5 = false;

	}
	else if (sixthy < 1000 && !plagind5) {
		cout << "go right";
		sixthy += 10;
		if(sixthy > 510)
			plagind5 = true;
	}
}


//  FOR MAKING TREES 

void Treeismylife()
{
DrawCircle(527,640,25,colors[GREEN]);
DrawRectangle(520,600,15,20,colors[BROWN]);

DrawCircle(327,690,25,colors[GREEN]);
DrawRectangle(320,650,15,20,colors[BROWN]);

DrawCircle(777,520,25,colors[GREEN]);
DrawRectangle(770,480,15,25,colors[BROWN]);

DrawCircle(527,290,25,colors[GREEN]);
DrawRectangle(520,250,15,25,colors[BROWN]);
}

int bardockx=720;
int bardocky=810;
void GENTLEMAN1()
{
				//  FIRST PERSON
DrawCircle(bardockx+3,bardocky+30,7,colors[BLACK]); // HEAD
DrawRectangle(bardockx,bardocky,5,25,colors[BLACK]);	// BODY
DrawLine(bardockx+5 , bardocky+15 , bardockx+15,bardocky+10 , 3 , colors[BLACK] );  // RIGHT ARM
DrawLine(bardockx-10 , bardocky+10 , bardockx+5, bardocky+15 , 3 , colors[BLACK] );	// LEFT ARM
DrawLine(bardockx+5 , bardocky , bardockx+15, bardocky-10 , 3 , colors[BLACK] );	// RIGHT LEG
DrawLine(bardockx-10 , bardocky-20 , bardockx+5, bardocky , 3 , colors[BLACK] );	// LEFT LEG
}
int carlopx=470;
int carlopy=510;
void GENTLEMAN2()
{
				// SECOND PERSON
DrawCircle(carlopx+3,carlopy+30,7 ,colors[BLACK]);  //HEAD
DrawRectangle(carlopx,carlopy,5,25,colors[BLACK]);  // BODY
DrawLine(carlopx+5 , carlopy+15 , carlopx+15, carlopy+10 , 3 , colors[BLACK] ); // RIGHT ARM
DrawLine(carlopx-15 , carlopy+10 , carlopx, carlopy+15 , 3 , colors[BLACK] ); // LEFT ARM
DrawLine(carlopx+5 , carlopy , carlopx+15, carlopy-10 , 3 , colors[BLACK] ); // RIGHT LEG
DrawLine(carlopx-15 , carlopy-10 , carlopx, carlopy , 3 , colors[BLACK] ); // LEFT LEG
}

int dragonx=720;
int dragony=360;
void GENTLEMAN3()
{
				// THIRD PERSON
DrawCircle(dragonx+3,dragony+30,7 ,colors[BLACK]);  // HEAD
DrawRectangle(dragonx,dragony,5,25,colors[BLACK]); // BODY
DrawLine(dragonx+5 , dragony+15 , dragonx+15, dragony+10 , 3 , colors[BLACK] ); //RIGHT ARM
DrawLine(dragonx-5 , dragony+10 , dragonx, dragony+15 , 3 , colors[BLACK] ); // LEFT ARM
DrawLine(dragonx+5 , dragony , dragonx+15, dragony-10 , 3 , colors[BLACK] ); // RIGHT LEG
DrawLine(dragonx-10 , dragony-10 , dragonx, dragony , 3 , colors[BLACK] ); // LEFT LEG

}

			// FOR LOCATION OF CARS 
int utopia1=-100,utopia2=-100;
void location1()
{
DrawTriangle( utopia1, utopia2 , utopia1+40, utopia2 , utopia1+20 , utopia2-60, colors[LAWN_GREEN] );
//DrawCircle(utopia1,utopia2,25,colors[LAWN_GREEN]);
} 
int valcano1=-100,valcano2=-100;
void location2()
{
DrawTriangle( valcano1, valcano2 , valcano1+40, valcano2 ,valcano1+20 , valcano2-60, colors[LAWN_GREEN] );
//DrawCircle(valcano1,valcano2,25,colors[LAWN_GREEN]);

} 
int walker1=-100,walker2=-100;
void location3()
{
DrawTriangle( walker1, walker2 , walker1+40, walker2 , walker1+20 , walker2-60, colors[LAWN_GREEN] );
//DrawCircle(walker1,walker2,25,colors[LAWN_GREEN]);

} 

/*
 * Main Canvas drawing function.
 * */
 // \\\-------------------------------------                           -------------------------------------------------------------///
 //                                         \\-----------><-----------//

//>>>>>>>>>>>>>>>>>>>>--------------------------------GAME DISPLAY-----------------------------------------<<<<<<<<<<<<<<<<<<<<<<<<<<<<


void MYOWNFUNCTION()/**/{


	
// BACKGROUND COLOR CHANGING FUNCTION
	glClearColor( 1, 1, 1,1 );
			     
	
	
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Red Square
	//DrawSquare(400, 400, 40, colors[RED]);
	
	//red Circle
	DrawCircle(50,960,10,colors[RED]);
	DrawCircle(70,960,10,colors[RED]);
	DrawCircle(90,960,10,colors[RED]);
	 DrawLine( 0  , 940 , 1000, 940 , 2 , colors[BLACK] );
	
	//Display Score
	DrawString( 50, 980, "Score = ", colors[BLACK]);
	DrawString( 150, 980, Num2Str(total), colors[BLACK]);
	
	// BOUNDRIES START FROM HERE
	
	DrawLine( 1000 , 0 ,  1000 , 900 , 2 , colors[BLACK] );	// right line
	DrawLine( 0  , 0 , 0, 900 , 2 , colors[BLACK] );        // left line
	
	for(int lenght=50;lenght<1000;lenght+=50)
	{
	DrawLine( lenght  , 0 , lenght , 900 , 2 , colors[BLACK] );
	}
	       
	       DrawLine( 0  , 900 , 1000, 900 , 2 , colors[BLACK] ); // up line
	
	// ONLY SQUARE IN CENTER	
	DrawSquare( 500 , 550 ,50,colors[BLACK]);
	
		//   FOR MAKING BALCK TRACK OBSTACLES 
		
	DrawRectangle(850,50,100,50,colors[BLACK]);
	DrawRectangle(500,0,50,150,colors[BLACK]);
	DrawRectangle(250,100,50,250,colors[BLACK]);
	DrawRectangle(100,150,100,150,colors[BLACK]);
	DrawRectangle(400,400,100,50,colors[BLACK]);
	DrawRectangle(500,400,50,100,colors[BLACK]);
	DrawRectangle(700,150,50,155,colors[BLACK]);
	DrawRectangle(700,300,300,50,colors[BLACK]);
	DrawRectangle(900,450,50,250,colors[BLACK]);
	DrawRectangle(450,750,550,50,colors[BLACK]);
	DrawRectangle(100,750,150,50,colors[BLACK]);
	DrawRectangle(150,500,50,105,colors[BLACK]);
	DrawRectangle(100,600,100,50,colors[BLACK]);
	DrawRectangle(250,600,100,50,colors[BLACK]);
	DrawRectangle(350,600,50,150,colors[BLACK]);
	DrawRectangle(600,400,50,300,colors[BLACK]);
	DrawRectangle(650,550,150,50,colors[BLACK]);
	DrawRectangle(350,200,200,50,colors[BLACK]);
	DrawRectangle(550,200,50,150,colors[BLACK]);
	
	
	// MY OWN CAR
	if(cardimum1==true)
	{
	itsmycar();
	}
	else if(cardimum2==true)
	{
	itsmycar0();
	}
	// DRAWING ALL THE CARS
	itsmycar1();
	itsmycar2();
	itsmycar3();
	itsmycar4();
	itsmycar5();
	
	
	// DRAWING ALL THE TREES
	Treeismylife();
	
	
	// DRAWING  THE MAN 
	GENTLEMAN1();
	GENTLEMAN2();
	GENTLEMAN3();
	
	
	
	location1();
	location2();
	location3();
	
	glutSwapBuffers(); // do not modify this line..

}

//      GAME DISPLAY FOR CAR 2  


//  ----------------------------------------------\\    MENU PAGE 1    //------------------------------------------------------------ 
	
	
			
void localDisplay1(){

glClearColor( 0, 255, 0,0 );
glClear (GL_COLOR_BUFFER_BIT);

DrawRectangle(200,200,700,700,colors[TEAL]);
DrawString( 350, 830, "          *-----> MENU <----*    ", colors[CYAN]);
DrawString( 350, 780, "  \" RUSH HOUR \"   ", colors[RED]);
DrawString( 400, 730, "by TALHA SHAHZAD :)", colors[MIDNIGHT_BLUE]);
DrawString( 250, 230, " PRESS 'N' TO CHOOSE THE TAXI OF YOUR CHOICE   ", colors[ORCHID]);



glutPostRedisplay();
glutSwapBuffers();
}



// RED CAR ON MENU

void redCar() {
    
	DrawSquare(250+8, 480+5, 27, colors[LIGHT_BLUE]);
	DrawRectangle(250,480,40,20,colors[RED]);
	DrawCircle(250+5,480,5,colors[BLACK]);
	DrawCircle(250+35,480,5,colors[BLACK]);
	glutPostRedisplay();
	}
	
// YELLOW CAR ON MENU

void yellowCar() {
    
	DrawSquare(650+8, 480+5, 27, colors[LIGHT_BLUE]);
	DrawRectangle(650,480,40,20,colors[ORANGE]);
	DrawCircle(650+5,480,5,colors[BLACK]);
	DrawCircle(650+35,480,5,colors[BLACK]);
	glutPostRedisplay();

}

//  ----------------------------------------------\\    MENU PAGE 2    //------------------------------------------------------------ 

void localDisplay2(){

glClearColor( 0, 0, 255,1 );
glClear (GL_COLOR_BUFFER_BIT);

DrawRectangle(100,200,900,700,colors[CHOCOLATE]);
DrawString( 350, 830, "          *-----> MENU <----*    ", colors[CYAN]);
DrawString( 350, 780, "  \" RUSH HOUR \"   ", colors[RED]);
DrawString( 400, 730, "by TALHA SHAHZAD :)", colors[MIDNIGHT_BLUE]);
DrawString( 250, 630, " SELECT THE TAXI COLOR TO START THE GAME   ", colors[PALE_VIOLET_RED]);
DrawString( 150, 530, " PRESS R FOR RED TAXI   ", colors[RED]);
DrawString( 550, 530, " PRESS Y FOR YELLOW TAXI   ", colors[RED]);
redCar();
yellowCar();
glutPostRedisplay();
glutSwapBuffers();
}


int sub1=0,sub2=0,sub3=0,sub4=0,sub5=0,sub6=0,sub7=0,sub8=0;
int subrostem=0;
void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		firstx -= 10;
	
// ------------------------------------------>>>>> ALL BOUNDRIES CONDITION START FROM HERE <<<<<---------------------------------------
		
	if((firstx>=70&&firstx<=250)&&(firsty>=750&&firsty<=800))
	{
	firstx=firstx+25;
	}	
	if((firstx>=430&&firstx<=1000)&&(firsty>=750&&firsty<=800))
	{
	firstx=firstx+25;
	}
	if((firstx>=880&&firstx<=950)&&(firsty>=450&&firsty<=700))
	{
	firstx=firstx+25;
	}
	if((firstx>=850&&firstx<=950)&&(firsty>=50&&firsty<=100))
	{
	firstx=firstx+25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=0&&firsty<=150))
	{
	firstx=firstx+25;
	}
	if((firstx>=250&&firstx<=290)&&(firsty>=100&&firsty<=350))
	{
	firstx=firstx+25;
	}
	if((firstx>=100&&firstx<=200)&&(firsty>=150&&firsty<=300))
	{
	firstx=firstx+25;
	}
	if((firstx>=350&&firstx<=600)&&(firsty>=200&&firsty<=250))
	{
	firstx=firstx+25;
	}
	if((firstx>=550&&firstx<=600)&&(firsty>=250&&firsty<=350))
	{
	firstx=firstx+25;
	}
	if((firstx>=700&&firstx<=750)&&(firsty>=150&&firsty<=300))
	{
	firstx=firstx+25;
	}
	if((firstx>=700&&firstx<=1000)&&(firsty>=300&&firsty<=350))
	{
	firstx=firstx+25;
	}
	if((firstx>=400&&firstx<=550)&&(firsty>=400&&firsty<=450))
	{
	firstx=firstx+25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=450&&firsty<=500))
	{
	firstx=firstx+25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=550&&firsty<=600))
	{
	firstx=firstx+25;
	}
	if((firstx>=600&&firstx<=650)&&(firsty>=400&&firsty<=700))
	{
	firstx=firstx+25;
	}
	if((firstx>=650&&firstx<=800)&&(firsty>=550&&firsty<=600))
	{
	firstx=firstx+25;
	}
	if((firstx>=100&&firstx<=200)&&(firsty>=600&&firsty<=650))
	{
	firstx=firstx+25;
	}
	if((firstx>=150&&firstx<=200)&&(firsty>=500&&firsty<=600))
	{
	firstx=firstx+25;
	}
	if((firstx>=250&&firstx<=400)&&(firsty>=600&&firsty<=650))
	{
	firstx=firstx+25;
	}
	if((firstx>=350&&firstx<=400)&&(firsty>=650&&firsty<=750))
	{
	firstx=firstx+25;
	}
	if((firstx<=0)&&(firsty>=0&&firsty<=900))
	{
	firstx=firstx+25;
	}
	
	// FOR DEDUCTION OF SCORE
	if((firstx<=310+10&&firstx>=310-10)&&(firsty<=650+10&&firsty>=650-10))
	{
	sub1=sub1-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=600+10&&firsty>=600-10))
	{
	sub2=sub2-3;
	}
	if((firstx<=760+10&&firstx>=760-10)&&(firsty<=480+10&&firsty>=480-10))
	{
	sub3=sub3-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=250+10&&firsty>=250-10))
	{
	sub4=sub4-3;
	}
	
	// FOR DEDUCTION OF SCORE FROM CARS
	
	if((firstx<=secondx+20&&firstx>=secondx-20)&&(firsty<=secondy+20&&firsty>=secondy-20))
	{
	sub5=sub5-5;
	}
	if((firstx<=thirdx+20&&firstx>=thirdx-20)&&(firsty<=thirdy+20&&firsty>=thirdy-20))
	{
	sub6=sub6-5;
	}
	
	
	
// <<<<<<--------------------------------------------// LEFT KEYS ENDS HERE \\\----------------------------------------------->>>>> 


	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		firstx += 10;
		
	if((firstx>=70&&firstx<=250)&(firsty>=750&&firsty<=800))
	{
	firstx=firstx-25;
	}
	if((firstx>=420&&firstx<=1000)&(firsty>=750&&firsty<=800))
	{
	firstx=firstx-25;
	}
	if((firstx>=870&&firstx<=950)&&(firsty>=450&&firsty<=700))
	{
	firstx=firstx-25;
	}
	if((firstx>=820&&firstx<=950)&&(firsty>=50&&firsty<=100))
	{
	firstx=firstx-25;
	}
	if((firstx>=460&&firstx<=550)&&(firsty>=0&&firsty<=150))
	{
	firstx=firstx-25;
	}
	if((firstx>=220&&firstx<=300)&&(firsty>=100&&firsty<=350))
	{
	firstx=firstx-25;
	}
	if((firstx>=60&&firstx<=200)&&(firsty>=150&&firsty<=300))
	{
	firstx=firstx-25;
	}
	if((firstx>=320&&firstx<=600)&&(firsty>=200&&firsty<=250))
	{
	firstx=firstx-25;
	}
	if((firstx>=520&&firstx<=600)&&(firsty>=250&&firsty<=350))
	{
	firstx=firstx-25;
	}
	if((firstx>=670&&firstx<=750)&&(firsty>=150&&firsty<=300))
	{
	firstx=firstx-25;
	}
	if((firstx>=670&&firstx<=1000)&&(firsty>=300&&firsty<=350))
	{
	firstx=firstx-25;
	}
	if((firstx>=370&&firstx<=550)&&(firsty>=400&&firsty<=450))
	{
	firstx=firstx-25;
	}
	if((firstx>=470&&firstx<=550)&&(firsty>=450&&firsty<=500))
	{
	firstx=firstx-25;
	}
	if((firstx>=470&&firstx<=550)&&(firsty>=550&&firsty<=600))
	{
	firstx=firstx-25;
	}
	if((firstx>=570&&firstx<=650)&&(firsty>=400&&firsty<=700))
	{
	firstx=firstx-25;
	}
	if((firstx>=650&&firstx<=800)&&(firsty>=550&&firsty<=600))
	{
	firstx=firstx-25;
	}
	if((firstx>=70&&firstx<=200)&&(firsty>=600&&firsty<=650))
	{
	firstx=firstx-25;
	}
	if((firstx>=120&&firstx<=200)&&(firsty>=500&&firsty<=600))
	{
	firstx=firstx-25;
	}
	if((firstx>=220&&firstx<=400)&&(firsty>=600&&firsty<=650))
	{
	firstx=firstx-25;
	}
	if((firstx>=320&&firstx<=400)&&(firsty>=650&&firsty<=750))
	{
	firstx=firstx-25;
	}
	if(firstx>=970&&(firsty>=0&&firsty<=900))
	{
	firstx=firstx-25;
	}
	
	
	// FOR DEDUCTION OF SCORES FROM TREE
	
	if((firstx<=310+10&&firstx>=310-10)&&(firsty<=650+10&&firsty>=650-10))
	{
	sub1=sub1-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=600+10&&firsty>=600-10))
	{
	sub2=sub2-3;
	}
	if((firstx<=760+10&&firstx>=760-10)&&(firsty<=480+10&&firsty>=480-10))
	{
	sub3=sub3-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=250+10&&firsty>=250-10))
	{
	sub4=sub4-3;
	}
	
	// FOR DEDUCTION OF SCORE FROM CARS
	
	if((firstx<=secondx+20&&firstx>=secondx-20)&&(firsty<=secondy+20&&firsty>=secondy-20))
	{
	sub5=sub5-5;
	}
	if((firstx<=thirdx+20&&firstx>=thirdx-20)&&(firsty<=thirdy+20&&firsty>=thirdy-20))
	{
	sub6=sub6-5;
	}
// <<<<<<--------------------------------------------// RIGHT KEYS ENDS HERE \\\----------------------------------------------->>>>> 
	
	
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		firsty += 10;
		
		
	if((firstx>=70&&firstx<=250)&&(firsty>=730&&firsty<=800))
	{
	firsty=firsty-25;
	}
	if((firstx>=430&&firstx<=1000)&&(firsty>=730&&firsty<=800))
	{
	firsty=firsty-25;
	}
	if((firstx>=880&&firstx<=950)&&(firsty>=420&&firsty<=700))
	{
	firsty=firsty-25;
	}
	if((firstx>=850&&firstx<=950)&&(firsty>=20&&firsty<=100))
	{
	firsty=firsty-25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=0&&firsty<=150))
	{
	firsty=firsty-25;
	}
	if((firstx>=250&&firstx<=300)&&(firsty>=80&&firsty<=350))
	{
	firsty=firsty-25;
	}
	if((firstx>=100&&firstx<=200)&&(firsty>=120&&firsty<=300))
	{
	firsty=firsty-25;
	}
	if((firstx>=350&&firstx<=600)&&(firsty>=180&&firsty<=250))
	{
	firsty=firsty-25;
	}
	if((firstx>=550&&firstx<=600)&&(firsty>=250&&firsty<=350))
	{
	firsty=firsty-25;
	}
	if((firstx>=700&&firstx<=750)&&(firsty>=130&&firsty<=300))
	{
	firsty=firsty-25;
	}
	if((firstx>=700&&firstx<=1000)&&(firsty>=280&&firsty<=350))
	{
	firsty=firsty-25;
	}
	if((firstx>=400&&firstx<=550)&&(firsty>=400&&firsty<=450))
	{
	firsty=firsty-25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=450&&firsty<=500))
	{
	firsty=firsty-25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=520&&firsty<=600))
	{
	firsty=firsty-25;
	}
	if((firstx>=600&&firstx<=650)&&(firsty>=380&&firsty<=700))
	{
	firsty=firsty-25;
	}
	if((firstx>=650&&firstx<=800)&&(firsty>=520&&firsty<=600))
	{
	firsty=firsty-25;
	}
	if((firstx>=100&&firstx<=200)&&(firsty>=600&&firsty<=650))
	{
	firsty=firsty-25;
	}
	if((firstx>=150&&firstx<=200)&&(firsty>=480&&firsty<=600))
	{
	firsty=firsty-25;
	}
	if((firstx>=250&&firstx<=400)&&(firsty>=600&&firsty<=650))
	{
	firsty=firsty-25;
	}
	if((firstx>=350&&firstx<=400)&&(firsty>=650&&firsty<=750))
	{
	firsty=firsty-25;
	}
	if((firstx>=0&&firstx<=1000)&&(firsty>=880))
	{
	firsty=firsty-25;
	}
	
	// FOR DEDUCTYION OF SCORES FROM TREES
	
	if((firstx<=310+10&&firstx>=310-10)&&(firsty<=650+20&&firsty>=650-10))
	{
	sub1=sub1-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=600+20&&firsty>=600-10))
	{
	sub2=sub2-3;
	}
	if((firstx<=760+10&&firstx>=760-10)&&(firsty<=480+20&&firsty>=480-10))
	{
	sub3=sub3-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=250+10&&firsty>=250-10))
	{
	sub4=sub4-3;
	}
	// FOR DEDUCTION OF SCORE FROM MCARS
	
	if((firstx<=secondx+20&&firstx>=secondx-20)&&(firsty<=secondy+20&&firsty>=secondy-20))
	{
	sub5=sub5-5;
	}
	if((firstx<=thirdx+20&&firstx>=thirdx-20)&&(firsty<=thirdy+20&&firsty>=thirdy-20))
	{
	sub6=sub6-5;
	}
// <<<<<<--------------------------------------------// UP KEYS ENDS HERE \\\----------------------------------------------->>>>> 

	}else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		firsty -= 10;
		
	if((firstx>=70&&firstx<=250)&&(firsty>=750&&firsty<=800))
	{
	firsty=firsty+25;
	}
	if((firstx>=430&&firstx<=1000)&&(firsty>=750&&firsty<=800))
	{
	firsty=firsty+25;
	}
	if((firstx>=880&&firstx<=950)&&(firsty>=450&&firsty<=700))
	{
	firsty=firsty+25;
	}
	if((firstx>=850&&firstx<=950)&&(firsty>=50&&firsty<=100))
	{
	firsty=firsty+25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=0&&firsty<=150))
	{
	firsty=firsty+25;
	}
	if((firstx>=250&&firstx<=300)&&(firsty>=100&&firsty<=350))
	{
	firsty=firsty+25;
	}
	if((firstx>=100&&firstx<=200)&&(firsty>=150&&firsty<=300))
	{
	firsty=firsty+25;
	}
	if((firstx>=350&&firstx<=600)&&(firsty>=200&&firsty<=250))
	{
	firsty=firsty+25;
	}
	if((firstx>=550&&firstx<=600)&&(firsty>=250&&firsty<=350))
	{
	firsty=firsty+25;
	}
	if((firstx>=700&&firstx<=750)&&(firsty>=150&&firsty<=300))
	{
	firsty=firsty+25;
	}
	if((firstx>=700&&firstx<=1000)&&(firsty>=300&&firsty<=350))
	{
	firsty=firsty+25;
	}
	if((firstx>=400&&firstx<=550)&&(firsty>=400&&firsty<=450))
	{
	firsty=firsty+25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=450&&firsty<=500))
	{
	firsty=firsty+25;
	}
	if((firstx>=500&&firstx<=550)&&(firsty>=550&&firsty<=600))
	{
	firsty=firsty+25;
	}
	if((firstx>=600&&firstx<=650)&&(firsty>=400&&firsty<=700))
	{
	firsty=firsty+25;
	}
	if((firstx>=650&&firstx<=800)&&(firsty>=550&&firsty<=600))
	{
	firsty=firsty+25;
	}
	if((firstx>=100&&firstx<=200)&&(firsty>=600&&firsty<=650))
	{
	firsty=firsty+25;
	}
	if((firstx>=150&&firstx<=200)&&(firsty>=500&&firsty<=600))
	{
	firsty=firsty+25;
	}
	if((firstx>=250&&firstx<=400)&&(firsty>=600&&firsty<=650))
	{
	firsty=firsty+25;
	}
	if((firstx>=350&&firstx<=400)&&(firsty>=650&&firsty<=750))
	{
	firsty=firsty+25;
	}
	if((firstx>=0&&firstx<=1000)&&(firsty<=0))
	{
	firsty=firsty+25;
	}
	
	// FOR DEDUCTION OF SCORE FROM TREES
	if((firstx<=310+10&&firstx>=310-10)&&(firsty<=650+10&&firsty>=650-10))
	{
	sub1=sub1-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=600+10&&firsty>=600-10))
	{
	sub2=sub2-3;
	}
	if((firstx<=760+10&&firstx>=760-10)&&(firsty<=480+10&&firsty>=480-10))
	{
	sub3=sub3-3;
	}
	if((firstx<=510+10&&firstx>=510-10)&&(firsty<=250+10&&firsty>=250-10))
	{
	sub4=sub4-3;
	}
	
	//FOR DEDUCTION OF SCORE FROM CARS
	
	if((firstx<=secondx+20&&firstx>=secondx-20)&&(firsty<=secondy+20&&firsty>=secondy-20))
	{
	sub5=sub5-5;
	}
	if((firstx<=thirdx+20&&firstx>=thirdx-20)&&(firsty<=thirdy+20&&firsty>=thirdy-20))
	{
	sub6=sub6-5;
	}
	
	
// <<<<<<--------------------------------------------// DOWN KEYS ENDS HERE \\\----------------------------------------------->>>>> 
}
	
	subrostem=sub1+sub2+sub3+sub4+sub5+sub6;
	
	total=rostrum+subrostem;
	
	glutPostRedisplay();

}
 
 int per1=0;
 int per2=0;
 int per3=0;


 
 
void PrintableKeys(unsigned char keyboard, int x, int y) {
	if (keyboard == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (keyboard == 'b' || keyboard == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;
		}
		
		
	if(keyboard==110||keyboard==78){
	
	glutDisplayFunc(localDisplay2);
	
	}
	if(keyboard==89||keyboard==121){
	cardimum1=true;
	glutDisplayFunc(MYOWNFUNCTION);
	}
	if(keyboard==82||keyboard==114){
	cardimum2=true;
	glutDisplayFunc(MYOWNFUNCTION);
	}
	
	
	
	
		 
	if(keyboard == 32 ){
	if(firstx<=bardockx+10&&firstx>=bardockx-10&&firsty<=bardocky+10&&firsty>=bardocky-10)
	{
	utopia1=rand()%900,utopia2=rand()%900;
	bardockx=-500;
	bardocky=-500;
	}
	if(firstx<=utopia1+10&&firstx>=utopia1-10&&firsty<=utopia2+10&&firsty>=utopia2-10)
	{
	utopia1=0;utopia2=0;
	bardockx=firstx;
	bardocky=firsty;
	per1=per1+10;
	}
		// FOR SECOND PERSON 
	}
	if(keyboard == 32 ){
	if(firstx<=carlopx+10&&firstx>=carlopx-10&&firsty<=carlopy+10&&firsty>=carlopy-10)
	{
	carlopx=-600;
	carlopy=-600;
	valcano1=rand()%900,valcano2=rand()%900;
	}
	if(firstx<=valcano1+10&&firstx>=valcano1-10&&firsty<=valcano2+10&&firsty>=valcano2-10)
	{
	valcano1=0;valcano2=0;
	carlopx=firstx;
	carlopy=firsty;
	per2=per2+10;
	}
	}
		
		// FOR THIRD PERSON 
	if(keyboard == 32 ){
	if(firstx<=dragonx+10&&firstx>=dragonx-10&&firsty<=dragony+10&&firsty>=dragony-10)
	{
	dragonx=-700;
	dragony=-700;
	walker1=rand()%900,walker2=rand()%900;
	}
	if(firstx<=walker1+10&&firstx>=walker1-10&&firsty<=walker2+10&&firsty>=walker2-10)
	{
	walker1=0;walker2=0;
	dragonx=firstx;
	dragony=firsty;
	per3=per3+10;
	}
	
	}
	rostrum=per1+per2+per3;
	
	glutPostRedisplay();
}



 //   >>>>>------------------------------------------------------------------------------------------------<<<<
void Timer(int m) {

	// implement your functionality here
	
	// MOVE ALL THE CARS
	
	runcarfast1();
	runcarfast2();
	runcarfast3();
	runcarfast4();
	runcarfast5();
	
	glutTimerFunc(60, Timer, 0);
}


void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 1120, height = 1080; // i have set my window size to be 800 x 600

	char menu;
	cout<<"press y to open the menu press"<<endl;
	cin>>menu;
	
	if(menu=='y'||menu=='Y')
	{
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour bardocky TALHA SHAHZAD"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
	
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	
	//glutDisplayFunc(localDisplay2);
	glutDisplayFunc(localDisplay1);
	//glutDisplayFunc(MYOWNFUNCTION); // tell library which function to call for drawing Canvas
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it seems necessary...
	glutMainLoop();
	return 1;
	}
	
}
#endif /* RushHour_CPP_ */
