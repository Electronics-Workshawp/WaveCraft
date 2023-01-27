#include <WaveCraft.h>

WaveCraft wave1(1, 100);
WaveCraft wave2(1, 100);


void setup() {
  Serial.begin(115200);
}

void loop() {
  timer.update();

  
  wave1.setAmplitude(50);
  wave1.setFrequency(1);
  wave1.setPhase(0);
  float value1 = wave1.getValue();

  wave2.setAmplitude(50);
  wave2.setFrequency(2);
  wave2.setPhase(0);
  float value2 = wave2.getValue();

  Serial.print(value1);
  Serial.print(" ");
  Serial.print(value2);
  Serial.print(" ");
  Serial.println(" ");
  
  
}
