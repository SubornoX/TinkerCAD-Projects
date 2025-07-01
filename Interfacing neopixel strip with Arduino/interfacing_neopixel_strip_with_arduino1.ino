// C++ code

#include<Adafruit_NeoPixel.h>
#define PIN 6
#define N_LEDS 4

Adafruit_NeoPixel Strip= Adafruit_NeoPixel(N_LEDS, PIN , NEO_GRB +NEO_KHZ800);
// GRB mean green red blue 
//and KHZ800 mean 800 kilo hz

void setup()
{
  Strip.begin();
}

void loop()
{
  chase(Strip.Color(255,0,0));
  chase(Strip.Color(0,255,0));
  chase(Strip.Color(0,0,255));
}


static void chase (uint32_t c){
   for(uint16_t i = 0 ;i<Strip.numPixels()+4;i++){
      Strip.setPixelColor(i,c);
      Strip.setPixelColor(i-4,0);
      Strip.show();
      delay(100);
    }
}
        