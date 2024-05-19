#include <Arduino.h>
#include <M5Core2.h>
void SetVibration(int time){
M5.Axp.SetVibration(true);
delay(time);
M5.Axp.SetVibration(false);
}
void setup() {
M5.begin();
M5.Lcd.setTextFont(2);
M5.Lcd.setTextSize(2);
M5.Lcd.setTextColor(GREEN , BLACK);
M5.Lcd.setCursor(80, 100);
M5.Lcd.println("M5Stack Core2");
}
void loop() {
M5.update();
if (M5.BtnA.wasReleased() || M5.BtnA.pressedFor(1000, 200)) {
M5.Lcd.clearDisplay();
M5.Lcd.setCursor(80, 100);
M5.Lcd.println("Boton1 Pulsado");
SetVibration(100);
} else if (M5.BtnB.wasReleased() || M5.BtnB.pressedFor(1000, 200)) {
M5.Lcd.clearDisplay();
M5.Lcd.setCursor(80, 100);
M5.Lcd.println("Boton2 Pulsado");
SetVibration(100);
} else if (M5.BtnC.wasReleased() || M5.BtnC.pressedFor(1000, 200)) {
M5.Lcd.clearDisplay();
M5.Lcd.setCursor(80, 100);
M5.Lcd.println("Boton3 Pulsado");
SetVibration(100);
}
}