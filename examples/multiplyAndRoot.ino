#include <WaveCraft.h>

WaveCraft wave1(1, 100);
WaveCraft wave2(1, 100);


void setup() {
  Serial.begin(115200);
}

void loop() {
 
  wave1.setFrequency(.5);
  wave1.setLow(0);
  wave1.setPhase(0);
  wave1.setHigh(255);

  wave2.setFrequency(1.0);
  wave2.setLow(0);
  wave2.setPhase(0);
  wave2.setHigh(255);

  float newWave = wave1.getValue() * wave2.getValue();
  Serial.print(sqrt(newWave));
  Serial.print(255);
  Serial.print(" ");
  Serial.print(0);
  Serial.print(" ");
  Serial.println(" ");
  
}
