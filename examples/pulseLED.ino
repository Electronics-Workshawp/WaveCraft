#include <WaveCraft.h>

WaveCraft ledPulse(1, 100);
//this will create a pulse that has a frequency of 1hz and a peak to peak amplitude of 100 (-50 to +50)
void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
 
  ledPulse.setFrequency(2);
  ledPulse.setLow(0);
  ledPulse.setHigh(255);

  //this will map the sine wave to 0 and 255 and change the frequency to 2hz
  //the use of setLow and setHigh overides the amplitude and lets you set your own specific values.
  
  int pulse = ledPulse.getIntValue();
  
  analogWrite(13, pulse);
  
}
