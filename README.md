# WaveCraft

A simple sine wave generator library for Arduino.

## Features
- Generates sine wave values based on frequency, amplitude, and phase
- Provides methods for setting and getting frequency, amplitude, and phase values
- Provides a `getValue()` method that returns the current sine wave value based on the current time
- Provides a `mapFloat` method that maps a value from one range to another.

## Usage

1. Download the WaveCraft library and add it to your Arduino libraries directory
2. Include the WaveCraft.h header in your sketch 
3. Create a WaveCraft object and set the desired frequency, amplitude, and phase values
4. Use the `getValue()` method to get the current sine wave value
