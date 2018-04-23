#include <FastLED.h>

#define NUM_LEDS 33
#define DATA_PIN 12

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

CRGB leds[NUM_LEDS];

int faceOrders[10] = {0, 8, 1, 7, 2, 6, 3, 5, 4, 9};

#define PIN 12

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(33, PIN, NEO_RGB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code


  //strip.begin();
  //strip.show(); // Initialize all pixels to 'off'

  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  //cycleColors();
  //cycleTopBottom();
  //spiralUp();
  //onTest();
  onTest();
  return;

 #ifdef fred
  // Some example procedures showing how to display to the pixels:
  colorWipe(strip.Color(255, 0, 0), 50); // Red
  colorWipe(strip.Color(0, 255, 0), 50); // Green
  colorWipe(strip.Color(0, 0, 255), 50); // Blue
//colorWipe(strip.Color(0, 0, 0, 255), 50); // White RGBW
  // Send a theater pixel chase in...
  theaterChase(strip.Color(127, 127, 127), 50); // White
  theaterChase(strip.Color(127, 0, 0), 50); // Red
  theaterChase(strip.Color(0, 0, 127), 50); // Blue

  rainbow(20);
  rainbowCycle(20);
  theaterChaseRainbow(50);
#endif
}

void onTest()
{
#if fred
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.show();
    Serial.println("red");
    delay(1000);

    strip.setPixelColor(0, strip.Color(0, 0, 0));
    strip.show();
    Serial.println("black");
    delay(1000);

  return;
  spiralUp(CRGB::Red);
  spiralUp(CRGB::Green);
  spiralUp(CRGB::Blue);
  spiralUp(CRGB::Yellow);
  spiralUp(CRGB::Purple);
  spiralUp(CRGB::Magenta);
  return;
#endif

#if fred
        // Turn the first led red for 1 second
      leds[0] = CRGB::Red;
      leds[32] = CRGB::Yellow;
      FastLED.show();
      Serial.println("red");
      delay(1000);
      
      // Set the first led back to black for 1 second
      leds[0] = CRGB::Black;
      leds[32] = CRGB::Black;
      FastLED.show();
      delay(1000);
#endif

      blockUp(CRGB::Red);
      blockUp(CRGB::Black);
      blockUp(CRGB::White);
      blockUp(CRGB::Blue);
      blockUp(CRGB::Yellow);
      blockUp(CRGB::Magenta);
      blockUp(CRGB::Purple);
      blockUp(CRGB::Green);
}

void blockUp(CRGB color)
{
  faceUp(color);
  return;
      for (int i = 0; i < NUM_LEDS; i += 3)
      {
        leds[i] = color;
        leds[i + 1] = color;
        leds[i + 2] = color;
        FastLED.show();
        delay(100);
      }
}

void faceUp(CRGB color)
{
  for (int i = 0; i < 10; i++)
  {
    int s = faceOrders[i] * 3;
    
        leds[s] = color;
        leds[s + 1] = color;
        leds[s + 2] = color;
        FastLED.show();
        delay(100);
  }

  
}

void spiralUp(CRGB color)
{
  for (int i = 0; i < NUM_LEDS; i += 3)
  {
    leds[i] = color;
    FastLED.show();
    delay(1000);
    leds[i + 1] = color;
    FastLED.show();
    delay(1000);
    leds[i + 2] = color;
    FastLED.show();
  }
  delay(3000);
  
}

#ifdef fred
void onTest()
{
  for (int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, strip.Color(255, 0, 0));
    strip.show();
    Serial.println(i);
    delay(1000);
  }

  for (int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, strip.Color(0, 255, 0));
    strip.show();
    Serial.println(i);
    delay(1000);
  }
}



void cycleColors()
{
  allOneColor(strip.Color(255, 0, 0));
  allOneColor(strip.Color(0, 255, 0));
  allOneColor(strip.Color(0, 0, 255));
  allOneColor(strip.Color(255, 255, 0));
  allOneColor(strip.Color(0, 255, 255));
  allOneColor(strip.Color(255, 0, 255));
}

void spiralUp()
{
  spiralUp(strip.Color(255, 0, 0));
  spiralUp(strip.Color(0, 255, 0));
  spiralUp(strip.Color(0, 0, 255));
  spiralUp(strip.Color(255, 255, 0));
  spiralUp(strip.Color(0, 255, 255));
  spiralUp(strip.Color(255, 0, 255));
}

void cycleTopBottom()
{
  uint32_t red     = strip.Color(255,   0,   0);
  uint32_t green   = strip.Color(  0, 255,   0);
  uint32_t blue    = strip.Color(  0,   0, 255);
  uint32_t yellow  = strip.Color(255, 255,   0);
  uint32_t magenta = strip.Color(255,   0, 255);
  uint32_t purple  = strip.Color(  0, 255, 255);

  topBottom(red, green);
  topBottom(green, blue);
  topBottom(blue, yellow);
  topBottom(yellow, magenta);
  topBottom(magenta, purple);
  topBottom(purple, red);
  
}

void allOneColor(uint32_t color)
{
  for (int i = 0; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, color);
  }
  strip.show();
  delay(1000);
}

void topBottom(uint32_t top, uint32_t bottom)
{
  for (int i = 0; i < 15; i++)
  {
    strip.setPixelColor(i, top);
  }  
  
  for (int i = 15; i < strip.numPixels(); i++)
  {
    strip.setPixelColor(i, bottom);
  }
  strip.show();
  delay(1000);
}

void spiralUp(uint32_t color)
{
  for (int i = 0; i < strip.numPixels(); i += 3)
  {
    strip.setPixelColor(i, color);
    strip.setPixelColor(i + 1, color);
    strip.setPixelColor(i + 2, color);
    strip.show();
    delay(1000);
  }
  delay(3000);
  
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel((i+j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for(j=0; j<256*5; j++) { // 5 cycles of all colors on wheel
    for(i=0; i< strip.numPixels(); i++) {
      strip.setPixelColor(i, Wheel(((i * 256 / strip.numPixels()) + j) & 255));
    }
    strip.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j=0; j<10; j++) {  //do 10 cycles of chasing
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, c);    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j=0; j < 256; j++) {     // cycle all 256 colors in the wheel
    for (int q=0; q < 3; q++) {
      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, Wheel( (i+j) % 255));    //turn every third pixel on
      }
      strip.show();

      delay(wait);

      for (uint16_t i=0; i < strip.numPixels(); i=i+3) {
        strip.setPixelColor(i+q, 0);        //turn every third pixel off
      }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {
    return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if(WheelPos < 170) {
    WheelPos -= 85;
    return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}

#endif
