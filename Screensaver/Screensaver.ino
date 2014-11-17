
/*
  Screensaver.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 4 Random dots at random colors loop continuously. You can press the
 A Button for a slight color change.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 
#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()                     // run over and over again

{
CheckButtonsDown();

int e=DimGreen;
if (Button_A)
  e=random(8);  
  
  
random(8);
int x=random(8); 
int y=random(8);
int z=random(8)+1;

int a=random(8); 
int b=random(8);
int c=random(8)+1;

int p=random(8); 
int q=random(8);
int r=random(8)+1;

int t=random(8); 
int u=random(8);
int v=random(8)+1;


for (int i=0; i<8; i++)
for (int j=0; j<8; j++)
{
  DrawPx(i,j,e);
  
}
{

 
  DrawPx(x,y,z);
  DrawPx(a,b,c);
  DrawPx(p,q,r);
  DrawPx(t,u,v);
  
  DisplaySlate();
  delay(100);
}



}



