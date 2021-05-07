#include <Arduino.h>
#include <ESP8266WiFi.h>        // for ESP8266

#include <ESP8266mDNS.h> // For OTA w/ ESP8266
#include <WiFiUdp.h>     // For OTA
#include <ArduinoOTA.h>  // For OTA

char ssid[] = "";
char pass[] = "";

void setup()
{
  WiFi.begin(ssid, pass);

  ArduinoOTA.setHostname("Esp8266"); // For OTA - Use your own device identifying name
  ArduinoOTA.begin();                // For OTA
}

void loop()
{
  ArduinoOTA.handle(); // For OTA
}