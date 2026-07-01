#include <Wifi.H>
#include <AsyncTCP.h>
#include <ESPAsyncWebserver.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  WiFi.mode(WIFI_AP);

  WiFi.softAP("ESP32 Acces Point",  null);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
