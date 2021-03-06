/*  
    Demo of display character's APP
    displayChar(INT8U x,INT8U y,INT16U unicode_Char);
*/

#include <Eink.h>
#include <SPI.h>
INT8U dimensionalData[]=
{
  0x01,0x7D,0x45,0x45,0x45,0x7D,0x01,0xFF,0x09,0xC3,0xE0,0xBE,0x85,0x23,0xEC,0x66,0x15,0xFF,0x01,0x7D,0x45,0x45,0x45,0x7D,0x01, 
  0x6B,0x27,0xD6,0xC0,0x66,0x51,0x55,0x8E,0xA4,0xCB,0x59,0xF4,0x60,0xBF,0x9A,0x88,0xBB,0xBE,0xE4,0x4C,0x99,0x14,0x44,0x22,0x77, 
  0x40,0x5F,0x51,0x51,0x51,0xDF,0x40,0x7F,0xA6,0x5A,0x7D,0x11,0x45,0xDD,0x81,0xFA,0x05,0x72,0x51,0x74,0x06,0x4A,0x22,0xE8,0xEB, 
  0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0xFF,0x7F,0x7F,0xFF,0xFF,0x7F,0xFF,0xFF,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x7F,
 };
 
void setup()
{
SPI.begin();

Eink.clearScreen();// clear the screen

Eink.displayChar(0,130,'A');
Eink.displayChar(0,122,'B');
Eink.displayChar(0,114,'C');
Eink.displayChar(0,106,'D');
Eink.displayChar(0,98,'E');
Eink.displayChar(0,90,'F');
Eink.displayChar(0,82,'G');
 

Eink.displayChar(5,130,'0');
Eink.displayChar(5,122,'1');
Eink.displayChar(5,114,'2');
Eink.displayChar(5,106,'3');
Eink.displayChar(5,98,'4');
Eink.displayChar(5,90,'5');
Eink.displayChar(5,82,'6');
Eink.displayChar(5,74,'7');
Eink.displayChar(5,66,'8');
Eink.displayChar(5,58,'9');
 

Eink.displayChar(10,130,0x0e10);
Eink.displayChar(10,122,0x0e11);
Eink.displayChar(10,114,0x0e12);
Eink.displayChar(10,106,0x0e13);
Eink.displayChar(10,98,0x0e14);
Eink.displayChar(10,90,0x0e15);
Eink.displayChar(10,82,0x0e16);
Eink.displayChar(10,74,0x0e17);
Eink.displayChar(10,66,0x0e18);
Eink.displayChar(10,58,0x0e19);
Eink.displayChar(10,50,0x0e1a);

Eink.refreshScreen(); 
}
void loop()
{}
