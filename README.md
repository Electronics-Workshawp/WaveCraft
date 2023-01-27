# WaveCraft

A simple sine wave generator library for Arduino.

## Features
- Generates sine wave values based on frequency, amplitude, and phase
- Provides methods for setting and getting frequency, amplitude, and phase values
- Provides a `getValue()` method that returns the current sine wave value based on the current time
- Provides a `mapFloat` method that maps a value from one range to another.

## Methods
- `WaveCraft(float frequency, float amplitude, float phase = 0)` : constructor that sets the frequency, amplitude, and phase of the wave.
- `void setAmplitude(float amplitude)` : sets the amplitude of the wave
- `void setFrequency(float frequency)` : sets the frequency of the wave
- `void setPhase(float phase)` : sets the phase of the wave
- `void setLow(float low)` : sets the minimum output value
- `void setHigh(float high)` : sets the maximum output value
- `float getLow()` : returns the minimum output value
- `float getHigh()` : returns the maximum output value
- `float mapFloat(float x, float in_min, float in_max, float out_min, float out_max)` : maps a value from one range to another
- `float getValue()` : returns the current value of the sine wave
- `float getIntValue()` : returns the current value of the sine wave as an int

## Usage
1. Download the WaveCraft library and add it to your Arduino libraries directory
2. Include the WaveCraft.h header in your sketch 
3. Create a WaveCraft object and set the desired frequency, amplitude, and phase values
4. Use the `getValue()` method to get the current sine wave value
