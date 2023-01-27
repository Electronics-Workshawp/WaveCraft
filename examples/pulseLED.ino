#include <WaveCraft.h>

WaveCraft ledPulse(1, 100);
//this will create a pulse that has a frequency of 1hz and a peak to peak amplitude of 100 (-50 to +50)
void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
 
  ledPulse.setFrequency(1);
  ledPulse.setLow(0);
  ledPulse.setHigh(255);

  //this will generate a pulse between 0 and 255 with a frequency of 1hz
  //the use of setLow and setHigh overides the amplitude and lets you set your own specific values.
  
  int pulse = (int)ledPulse.getValue();

  analogWrite(pulse);
  
}
