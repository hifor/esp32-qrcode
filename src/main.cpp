#include <TFT_eSPI.h>
#include <qrcode.h>

TFT_eSPI tft = TFT_eSPI(135, 240); // Invoke custom library
QRcode qrcode (&tft);

void setup()
{
  // initialize LED digital pin as an output.
  //pinMode(LED_BUILTIN, OUTPUT);
  tft.init();
  tft.setRotation(3);

  qrcode.init();
  // create qrcode
  qrcode.create("https://www.hifor.net");
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  //digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  //delay(1000);
  // turn the LED off by making the voltage LOW
  //digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(1000);
  Serial.println("hello world");
}