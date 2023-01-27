#ifndef WaveCraft_h
#define WaveCraft_h
#include <Arduino.h>
#include <math.h>

class WaveCraft {
public:
 float mapFloat(float x, float in_min, float in_max, float out_min, float out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
  }
  WaveCraft(float frequency, float amplitude, float phase = 0);
  void setAmplitude(float amplitude);
  void setFrequency(float frequency);
  void setPhase(float phase);
  void setLow(float low);
  void setHigh(float high);
  float getLow();
  float getHigh();
  float getValue();
  int getIntValue();

private:
  float _frequency;
  float _amplitude;
  float _phase;
  float _low;
  float _high;
  unsigned long _startTime;
};

#endif
