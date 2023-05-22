/**************************************************************************
HTTP request to web server

Author: Nicole Gottschall
Date: 2023-05-13
 **************************************************************************/

#include <WiFi.h>
#include <HTTPClient.h> 

//Wifi Setup
const char WIFI_SSID[] = "FRITZ!Box 7362 SL";
const char WIFI_PASSWORD[] = "02410992552527263645";

//declare request method
int HTTP_PORT = 80;
String HTTP_METHOD = "POST";
char HOST_NAME[] = "http://192.168.178.31";
String PATH_NAME = "/insert_temp.php";

void setup() {
  Serial.begin(9600);

  //connect to Wifi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  HTTPClient http;

  //connect to web server on port 80
  if(client.connect(HOST_NAME, HTTP_PORT)) {
    // if connected:
    Serial.println("Connected to server");
    // make a HTTP request:
    // send HTTP header
    client.println(HTTP_METHOD + " " + PATH_NAME + " HTTP/1.1");
    client.println("Host: " + String(HOST_NAME));
    client.println("Connection: close");
    client.println(); // end HTTP header

    // send HTTP body
    client.println(queryString);

    while(client.connected()) {
      if(client.available()){
        // read an incoming byte from the server and print it to serial monitor:
        char c = client.read();
        Serial.print(c);
      }
    }

    // the server's disconnected, stop the client:
    client.stop();
    Serial.println();
    Serial.println("disconnected");
  } else {// if not connected:
    Serial.println("connection failed");
  }


}

void loop() {
 
}
