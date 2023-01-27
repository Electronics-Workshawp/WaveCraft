#include <WaveCraft.h>

WaveCraft wave1(1, 100);
WaveCraft wave2(1, 100);
WaveCraft wave3(1, 100);

void setup() {
  Serial.begin(115200);
  pinMode(13,OUTPUT);
}

void loop() {
 
  wave1.setFrequency(1);
  wave1.setLow(0);
  wave1.setPhase(0);
  wave1.setHigh(255);

  wave2.setFrequency(2);
  wave2.setLow(0);
  wave2.setPhase(0);
  wave2.setHigh(255);

  wave3.setFrequency(3);
  wave3.setLow(0);
  wave3.setPhase(0);
  wave3.setHigh(255);
  float newWave = (wave1.getValue() + wave2.getValue() + wave3.getValue())/3.0;
  Serial.print(newWave);
  Serial.print(255);
  Serial.print(" ");
  Serial.print(0);
  Serial.print(" ");
  Serial.println(" ");
  
}
