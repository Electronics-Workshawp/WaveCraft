#include <WaveCraft.h>

WaveCraft wave1(1, 100);
WaveCraft wave2(1, 100);
WaveCraft wave3(1, 100);
WaveCraft wave4(1, 100);
WaveCraft wave5(1, 100);
WaveCraft wave6(1, 100);

void setup() {
  Serial.begin(115200);
  pinMode(13,OUTPUT);
}

void loop() {
 
  wave1.setFrequency(1.5);
  wave1.setLow(0);
  wave1.setPhase(0);
  wave1.setHigh(255);

  wave2.setFrequency(1.5);
  wave2.setLow(0);
  wave2.setPhase(60);
  wave2.setHigh(255);

  wave3.setFrequency(1.5);
  wave3.setLow(0);
  wave3.setPhase(120);
  wave3.setHigh(255);

  wave4.setFrequency(1.5);
  wave4.setLow(0);
  wave4.setPhase(180);
  wave4.setHigh(255);

  wave5.setFrequency(1.5);
  wave5.setLow(0);
  wave5.setPhase(240);
  wave5.setHigh(255);

  wave6.setFrequency(1.5);
  wave6.setLow(0);
  wave6.setPhase(300);
  wave6.setHigh(255);
  
  Serial.print(wave1.getValue());
  Serial.print(" ");
  Serial.print(wave2.getValue());
  Serial.print(" ");
  Serial.print(wave3.getValue());
  Serial.print(" ");
  Serial.print(wave4.getValue());
  Serial.print(" ");
  Serial.print(wave5.getValue());
  Serial.print(" ");   
  Serial.print(wave6.getValue());
  Serial.print(" ");        
  Serial.print(255);
  Serial.print(" ");
  Serial.print(0);
  Serial.print(" ");
  Serial.println(" ");
  
}
