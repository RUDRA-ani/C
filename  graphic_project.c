 #include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
int centreX = 300;
    int centreY = 200;
    int sunRadius = 60;
    int mercuryRadius=5;
    int venusRadius=15;
    int earthRadius = 18;
    int marsRadius=13;
    int jupiterRadius=32;
    int saturnRadius=26;
    int uranusRadius=22;
    int neptuneRadius=25;
    int moonRadius=5;
    int mercuryOrbitRadius = 100;
    int venusOrbitRadius = 130;
    int earthOrbitRadius = 160;
    int marsOrbitRadius = 190;
    int jupiterOrbitRadius = 230;
    int saturnOrbitRadius = 260;
    int uranusOrbitRadius = 290;
    int neptuneOrbitRadius = 320;
    int mercuryX ;
    int mercuryY;
     int venusX;
    int venusY;
     int earthX;
    int earthY;
     int marsX;
    int marsY;
     int jupiterX;
    int jupiterY;
     int saturnX;
    int saturnY;
     int uranusX ;
    int uranusY;
     int neptuneX;
    int neptuneY;
     
    int moonX,moonY,i;
      
    float mercuryangle = 0,venusangle =0,earthangle=0,marsangle=0,jupiterangle=0,saturnangle=0,uranusangle=0,neptuneangle=0,moonangle=0;

void drawPlanet(int x, int y, int radius, int color) {
    setfillstyle(1,color);
    fillellipse(x, y, radius, radius);
}
 

void drawearth(int x,int y,int radius){
     
     
     setfillstyle(11,BLUE);
     fillellipse(x,y,radius,radius);
      
     }


void solarsystem(){
int mercuryX=centreX+mercuryOrbitRadius; 
    mercuryY = centreY;
     venusX = centreX + venusOrbitRadius;
    venusY = centreY;
     earthX = centreX + earthOrbitRadius;
    earthY = centreY;
     marsX = centreX + marsOrbitRadius;
    marsY = centreY;
     jupiterX = centreX + jupiterOrbitRadius;
    jupiterY = centreY;
    saturnX = centreX + saturnOrbitRadius;
    saturnY = centreY;
    uranusX = centreX + uranusOrbitRadius;
    uranusY = centreY;
     neptuneX = centreX + neptuneOrbitRadius;
    neptuneY = centreY;
while (!kbhit()) {
	cleardevice();

	mercuryX = centreX + mercuryOrbitRadius * cos(mercuryangle);
	mercuryY = centreY + mercuryOrbitRadius * sin(mercuryangle);
	mercuryangle += 0.6;
	venusX = centreX +venusOrbitRadius * cos(venusangle);
	venusY = centreY + venusOrbitRadius * sin(venusangle);
	venusangle += 0.5;
	earthX = centreX +earthOrbitRadius * cos(earthangle);
	earthY = centreY + earthOrbitRadius * sin(earthangle);
	earthangle += 0.4;
	marsX = centreX +marsOrbitRadius * cos(marsangle);
	marsY = centreY + marsOrbitRadius * sin(marsangle);
	marsangle += 0.3;
	jupiterX = centreX +jupiterOrbitRadius * cos(jupiterangle);
	jupiterY = centreY + jupiterOrbitRadius * sin(jupiterangle);
	jupiterangle += 0.2;
	saturnX = centreX +saturnOrbitRadius * cos(saturnangle);
	saturnY = centreY + saturnOrbitRadius * sin(saturnangle);
	saturnangle += 0.1;
	uranusX= centreX +uranusOrbitRadius * cos(uranusangle);
	uranusY = centreY +uranusOrbitRadius * sin(uranusangle);
    uranusangle += 0.09;
	neptuneX = centreX + neptuneOrbitRadius * cos(neptuneangle);
	neptuneY = centreY +earthOrbitRadius * sin(neptuneangle);
	neptuneangle += 0.08;

	drawPlanet(centreX, centreY, sunRadius, YELLOW);
	drawPlanet(mercuryX, mercuryY, mercuryRadius,BROWN);
drawPlanet(venusX, venusY, venusRadius, CYAN);
drawPlanet(earthX, earthY, earthRadius, BLUE);
drawPlanet(marsX, marsY, marsRadius, RED);
drawPlanet(jupiterX, jupiterY, jupiterRadius, MAGENTA);
drawPlanet(saturnX, saturnY, saturnRadius, LIGHTRED);
drawPlanet(uranusX, uranusY, uranusRadius,LIGHTBLUE);
drawPlanet(neptuneX, neptuneY, neptuneRadius,LIGHTCYAN);

	delay(110);
    } 
    } 
    


void earthandmoon(){
     while (!kbhit()) {
	cleardevice();
	earthOrbitRadius=200;

	earthX = centreX + earthOrbitRadius * cos(earthangle);
	earthY = centreY + earthOrbitRadius * sin(earthangle);
	earthangle += 0.1;
	moonX=earthX+30*cos(2*moonangle);
	moonY=earthY+30*sin(2*moonangle);
     moonangle=+0.05;
	drawPlanet(centreX, centreY, sunRadius, YELLOW);
	drawPlanet(earthX, earthY, earthRadius, BLUE);
	drawPlanet(moonX,moonY,moonRadius,WHITE);

	delay(110);
    }
}  
 



void earth(){
  cleardevice();
    earthRadius=190;
    drawearth(centreX, centreY, earthRadius);
    rectangle(200,150,500,250);
     
        
    
    
    }
    void displayfirst(){
    settextstyle(1,0,3);
    outtext("PRESS ANY KEY IF YOU WANT TO SEE MY PROJECT"
    
    );
    }
    void displaysecond(){
    settextstyle(1,0,3);
    outtext("IT IS AS FOLLOWS");
    }
    void displaythird(){
    settextstyle(1,0,3);
    outtext("L")
    delay(500);
     outtext("E")
    delay(500);
     outtext("T")
    delay(500);
     outtext("  U")
    delay(500);
     outtext("S")
    delay(500);
     outtext("  S")
    delay(500);
     outtext("E")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  E")
    delay(500);
     outtext("A")
    delay(500);
     outtext("R")
    delay(500);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext(".")
    delay(500);
    
     outtext(" O")
    delay(500);
     outtext("U")
    delay(500);
     outtext("R")
    delay(500);
     outtext("  H")
    delay(500);
     outtext("O")
    delay(500);
     outtext("M")
    delay(500);
     outtext("E")
    delay(500);
      
    
    
    }
    void displayfourth(){
    settextstyle(1,0,3);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  E")
    delay(500);
     outtext("A")
    delay(500);
     outtext("R")
    delay(500);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("  R")
    delay(500);
     outtext("O")
    delay(500);
     outtext("T")
    delay(500);
     outtext("A")
    delay(500);
     outtext("T")
    delay(500);
     outtext("E")
    delay(500);
     outtext("S")
    delay(500);
     outtext("  A")
    delay(500);
     outtext("R")
    delay(500);
     outtext("O")
    delay(500);
     outtext("U")
    delay(500);
     outtext("N")
    delay(500);
     outtext("D")
    delay(500);
     outtext("  T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  S")
    delay(500);
     outtext("U")
    delay(500);
     outtext("N")
    delay(500);
     outtext("  A")
    delay(500);
     outtext("N")
    delay(500);
     outtext("D")
    delay(500);
     outtext("  T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("R")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  I")
    delay(500);
     outtext("S")
    delay(500);
     outtext("  A")
    delay(500);
     outtext("  S")
    delay(500);
     outtext("A")
    delay(500);
     outtext("T")
    delay(500);
     outtext("E")
    delay(500);
     outtext("L")
    delay(500);
     outtext("L")
    delay(500);
     outtext("I")
    delay(500);
     outtext("T")
    delay(500);
     outtext("E")
    delay(500);
     outtext(" C")
    delay(500); 
    outtext("A")
    delay(500);
     outtext("L")
    delay(500);
     outtext("L")
    delay(500);
     outtext("E")
    delay(500);
     outtext("D")
    delay(500);
     outtext("  M")
    delay(500);
     outtext("O")
    delay(500);
     outtext("O")
    delay(500);
     outtext("N")
    delay(500);
     outtext(".")
    delay(500);
     outtext(" I")
    delay(500);
     outtext("T ")
    delay(500);
     outtext("  I")
    delay(500);
     outtext("S")
    delay(500);
     outtext("  S")
    delay(500);
     outtext("H")
    delay(500);
     outtext("O")
    delay(500);
     outtext("W")
    delay(500);
     outtext("N")
    delay(500);
     outtext("  B")
    delay(500);
     outtext("E")
    delay(500);
     outtext("L")
    delay(500);
     outtext("O")
    delay(500);
     outtext("W")
    delay(500);
     outtext(":")
    delay(500);
     
    
    
    
    }
    void displayfifth()
    {
    settextstyle(1,0,3);
     outtext("E")
    delay(500);
     outtext("A")
    delay(500);
     outtext("L")
    delay(500);
     outtext("O")
    delay(500);
     outtext("N")
    delay(500);
     outtext("G")
    delay(500);
     outtext("W")
    delay(500);
     outtext("I")
    delay(500);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("  E")
    delay(500);
     outtext("A")
    delay(500);
     outtext("R")
    delay(500);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("  T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("R")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  A")
    delay(500);
     outtext("R")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  O")
    delay(500);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("R")
    delay(500);
     outtext("  P")
    delay(500);
     outtext("L")
    delay(500);
     outtext("A")
    delay(500);
     outtext("N")
    delay(500);
     outtext("E")
    delay(500);
     outtext("T")
    delay(500);
     outtext("S")
    delay(500);
     outtext(".")
    delay(500);
     outtext(" T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("Y")
    delay(500);
     outtext("  A")
    delay(500);
     outtext("L")
    delay(500);
     outtext("L")
    delay(500);
     outtext("  R")
    delay(500);
     outtext("E")
    delay(500);
     outtext("V")
    delay(500);
     outtext("O")
    delay(500);
     outtext("L")
    delay(500);
     outtext("V")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  A")
    delay(500);
     outtext("R")
    delay(500);
     outtext("O")
    delay(500);
     outtext("N")
    delay(500);
     outtext("D")
    delay(500);
     outtext("  T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("  S")
    delay(500);
     outtext("U")
    delay(500);
     outtext("N")
    delay(500);
     outtext("I")
    delay(500);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("E")
    delay(500);
     outtext("I")
    delay(500);
     outtext("R")
    delay(500);
     outtext("  P")
    delay(500);
     outtext("A")
    delay(500);
     outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("S")
    delay(500);
 outtext(".");
    delay(500);
        
    
    }
    void displaysixth()
    {
    settextstyle(1,0,3);
    outtext("T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("A")
    delay(500);
     outtext("T")
    delay(500);
     outtext("  S")
    delay(500);
     outtext("U")
    delay(500);
     outtext("M")
    delay(500);
     outtext("S")
    delay(500);
     outtext("  U")
    delay(500);
     outtext("P")
    delay(500);
     outtext("  M")
    delay(500);
     outtext("Y")
    delay(500);
     outtext("  P")
    delay(500);
     outtext("R")
    delay(500);
     outtext("O")
    delay(500);
     outtext("J")
    delay(500);
     outtext("E")
    delay(500);
     outtext("C")
    delay(500);
     outtext("T")
    delay(500);
     outtext(".")
    delay(500);
     outtext(" T")
    delay(500);
     outtext("H")
    delay(500);
     outtext("A")
    delay(500);
     outtext("N")
    delay(500);
     outtext("K")
    delay(500);
     outtext("  Y")
    delay(500);
     outtext("O")
    delay(500);
     outtext("U")
    delay(500);
    
    
    }
    void displayseventh()
    {
    settextstyle(1,0,3);
    outtext("THANKYOU");
    }    
       
     
int main() {
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     displayfirst();
     getch();
     cleardevice();
     displaysecond();
     getch();
     cleardevice();
     displaythird();
     getch();
     cleardevice();
     solarsystem();
    getch();
    cleardevice();
    displayfourth();
     getch();
     cleardevice();
    earthandmoon();
    getch();
    cleardevice();
     displayfifth();
     getch();
     cleardevice();
    earth();
    getch();
     closegraph();
    return 0;
}
