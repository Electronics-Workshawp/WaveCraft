#include <WaveCraft.h>

WaveCraft wave1(1, 100);
WaveCraft wave2(1, 100);

void setup() {
  Serial.begin(115200);
  pinMode(13,OUTPUT);
}

void loop() {
 
  wave1.setFrequency(.2);
  wave1.setLow(0);
  wave1.setPhase(0);
  wave1.setHigh(255);

  wave2.setFrequency(.2);
  wave2.setLow(0);
  wave1.setPhase(60);
  wave2.setHigh(255);
  
  Serial.print(wave1.getValue());
  Serial.print(" ");
  Serial.print(wave2.getValue());
  Serial.print(" ");
  Serial.print(255);
  Serial.print(" ");
  Serial.print(0);
  Serial.print(" ");
  Serial.println(" ");
  
}
