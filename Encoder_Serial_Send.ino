/* Encoder Library - Basic Example
 * http://www.pjrc.com/teensy/td_libs_Encoder.html
 *
 * This example code is in the public domain.
 */

#include <Encoder.h>

// Change these two numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder myEnc(2, 3);
//   avoid using pins with LEDs attached

void setup() {
  Serial.begin(9600);
//  Serial.println("Basic Encoder Test:");
}

unsigned int oldPosition  = 0;

void loop() {
  unsigned int newPosition = myEnc.read();
  if (newPosition > 95) {
  newPosition = 0;
 myEnc.write(0);}
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
  int index_image = (newPosition/24);
  Serial.print(index_image);
  Serial.print(",");
  Serial.print(0);
  Serial.print(",");
  Serial.println(0);
    
  }
}
