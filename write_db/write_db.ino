/**************************************************************************
Write to DB
With help from: https://esp32io.com/tutorials/esp32-mysql?utm_content=cmp-true

Author: Nicole Gottschall
Date: 2023-05-13
 **************************************************************************/

 /*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-mysql
 */

#include <WiFi.h>
#include <HTTPClient.h> 

//Wifi Setup
const char WIFI_SSID[] = ""; //paste in your WIFI SSID
const char WIFI_PASSWORD[] = ""; //paste in your WIFI PASSWORD

void setup() {
  Serial.begin(9600);

  //Connect to WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.print(WiFi.localIP());

  //HTTP
  WiFiClient client;
  HTTPClient http;   
  http.begin(client, "http://arduinojson.org/example.json");
  int httpCode = http.GET();

  Serial.print(http.getString());

  //free ressources
  http.end();
}

void loop() {
  
}
