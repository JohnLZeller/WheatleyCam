#include <core.h>
#include "Serial.h"
#include <stdlib.h>

void setup() { 
 //Initialize serial and wait for port to open:
  int rate = 9600;//prev 115200;
  Serial.begin(rate); 
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  
  // prints title with ending line break 
//  Serial.println("ASCII Table ~ Character Map"); 
} 

// first visible ASCIIcharacter '!' is number 33:
int thisByte = 33; 
// you can also write ASCII characters in single quotes.
// for example. '!' is the same as 33, so you could also use this:
//int thisByte = '!';  

void loop() { 
/*
  // prints value unaltered, i.e. the raw binary version of the 
  // byte. The serial monitor interprets all bytes as 
  // ASCII, so 33, the first number,  will show up as '!' 
  Serial.write(thisByte);    

  Serial.print(", dec: "); 
  // prints value as string as an ASCII-encoded decimal (base 10).
  // Decimal is the  default format for Serial.print() and Serial.println(),
  // so no modifier is needed:
  Serial.print(thisByte);      
  // But you can declare the modifier for decimal if you want to.
  //this also works if you uncomment it:

  // Serial.print(thisByte, DEC);  


  Serial.print(", hex: "); 
  // prints value as string in hexadecimal (base 16):
  Serial.print(thisByte, HEX);     

  Serial.print(", oct: "); 
  // prints value as string in octal (base 8);
  Serial.print(thisByte, OCT);     

  Serial.print(", bin: "); 
  // prints value as string in binary (base 2) 
  // also prints ending line break:
  Serial.println(thisByte, BIN);   

  // if printed last visible character '~' or 126, stop: 
  if(thisByte == 126) {     // you could also use if (thisByte == '~') {
    // This loop loops forever and does nothing
    //ile(true) { 
    //continue; 
    //
  }
  // go on to the next character
  thisByte++; 
*/  


/*
  if (Serial.available() > 0) {
    // read the incoming byte:
    thisByte = Serial.read();
 
    // say what you got:
    Serial.print("I received: ");
    Serial.println(thisByte, DEC);
    //Serial.println(thisByte, OCT);


  }       
*/

  printf("Argc %d\n", argc);
  if(argc > 1) {
    printf("Command Line Argument: %c \n", argv[1][0]);
    Serial.write(argv[1][0]);
  }
  else
    printf("This program requries a command line argument! usage: <exe> <character to send> \n");

  exit(0);

/*

  printf("On.\n");

  Serial.write('b');

  delay(1000);

  printf("Off.\n");

  Serial.write('o');
 
  delay(1000);

*/
}
