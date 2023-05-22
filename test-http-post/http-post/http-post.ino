
#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "MagentaWLAN-BHS8";
const char* password =  "20907683879274549283";

void setup() {
  Serial.begin(9600);
  delay(4000);   //Delay needed before calling the WiFi.begin
 
  WiFi.begin(ssid, password); 
 
  while (WiFi.status() != WL_CONNECTED) { //Check for the connection
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network with IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {

  //check WiFi connection status
  if(WiFi.status() == WL_CONNECTED) {

  HTTPClient http;
  http.begin("http://jsonplaceholder.typicode.com/posts"); //Specify destination for HTTP request

  http.addHeader("Content-Type", "text/plain"); //Specify content-type header

  int httpResponseCode = http.POST("POSTING from ESP32"); //Send the actual POST request
  
  if(httpResponseCode>0){
    String response = http.getString();  //Get the response to the request

    Serial.println(httpResponseCode);   //Print return code
    Serial.println(response);           //Print request answer

    //call end method on http object to free the resources
    http.end();  //Free resources

  } else {
    Serial.print("Error on sending POST: ");
    Serial.println(httpResponseCode);
  }

  } else {
    Serial.println("Error in WiFi connection");   
  }

  delay(10000);  //Send a request every 10 seconds

}
