# ESP32 Beginner Projects

## write-db

- ESP32 Development: 
    - development with Arduino IDE
- Insert Data into Database:
    - XAMPP Server
    - PHP
    - HTML
    - JSON

### Installation of Arduino IDE
1. [Install Java](http://java.com/download) (if you don't have it already)
2. [Download Arduino IDE](https://www.arduino.cc/en/Main/Software)
3. Run executable file called arduino.exe 

### Add Support for the ESP32 in Arduino IDE
1. Go to File > Preferences
2. Enter following into "Additional Board Manager URLs" field (will add support for ESP32 and ESP8266 boards) \
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json, http://arduino.esp8266.com/stable/package_esp8266com_index.json
4. Click "OK" button
5. Open Boards Manager (Tools > Board > Boards Manager...)
6. Search for ESP32 and install "ESP32 by Espressif Systems"
7. Restart Arduino IDE
8. Go to Tools > Board and check that you have ESP32 boards available

### Select right ESP32
1. Tools > Boards, scroll down to the ESP32 section and select the name of your ESP32 board (in my case: )
2. Tools > Port, select a COM port available (For help see: [How can I easily see which COM port is used by Arduino?](https://arduino.stackexchange.com/questions/21771/how-can-i-easily-see-which-com-port-is-used-by-arduino))

### Set Up XAMPP Server
1. Install [XAMPP Server](https://www.apachefriends.org/download.html) on your local machine
2. Start MySQL Database and Apache Web Server Service via XAMPP Control Panel

#### Create Local Database
1. Start MySQL Database and Apache Web Server Service via XAMPP Control Panel
2. Navigate to localhost/phpmyadmin in browser
3. Click on New
4. Type in the Name of your Database
4. Click Create Button
5. Create table

[Further Introduction to: Insert Form Data into a Database](https://dev.to/anthonys1760/how-to-insert-form-data-into-a-database-using-html-php-2e8)




## References
2023-05-10 \
[Getting Started with the ESP32 Development Board](https://randomnerdtutorials.com/getting-started-with-esp32/) \
[ESP32 OLED Display with Arduino IDE](https://randomnerdtutorials.com/esp32-ssd1306-oled-display-arduino-ide/) \
[How can I easily see which COM port is used by Arduino?](https://arduino.stackexchange.com/questions/21771/how-can-i-easily-see-which-com-port-is-used-by-arduino) \
2023-05-14 \
[How to Insert Form Data into a Database Using HTML & PHP](https://dev.to/anthonys1760/how-to-insert-form-data-into-a-database-using-html-php-2e8)

## Further Readings
[ESP32/ESP8266: DHT Temperature and Humidity Readings in OLED Displays](https://randomnerdtutorials.com/esp32-esp8266-dht-temperature-and-humidity-oled-display/) \
[Learn ESP32 with Arduino IDE](https://randomnerdtutorials.com/learn-esp32-with-arduino-ide/) \
[ESP32 Pinout Reference: Which GPIO pins should you use?](https://randomnerdtutorials.com/esp32-pinout-reference-gpios/) \
[ESP32 Web Server - Arduino IDE](https://randomnerdtutorials.com/esp32-web-server-arduino-ide/) \

ESP32 + MySQL: \
[ESP32 - MySQL](https://esp32io.com/tutorials/esp32-mysql?utm_content=cmp-true) \
[Arduino IDE + ESP32 + PHP + MySQL Database + XAMPP | ESP32 with MySQL Database (localhost)](https://www.youtube.com/watch?v=naOb1M1jy_0) \
[ESP32 Insert Data into MySQL Database using PHP and Arduino IDE](https://microcontrollerslab.com/esp32-mysql-database-php/) \
[ESP32/ESP8266 Insert Data into MySQL Database using PHP and Arduino IDE](https://randomnerdtutorials.com/esp32-esp8266-mysql-database-php/) \
[ESP32 - HTTP Request](https://esp32io.com/tutorials/esp32-http-request) \
[Arduino - HTTP Request](https://arduinogetstarted.com/tutorials/arduino-http-request) \
[ESP32 - HTTPS Request](https://esp32io.com/tutorials/esp32-https-request) \
[ESP32 HTTP GET and HTTP POST with Arduino IDE (JSON, URL Encoded, Text)](https://randomnerdtutorials.com/esp32-http-get-post-arduino/) \
[ESP32: HTTP POST Requests](https://techtutorialsx.com/2017/05/20/esp32-http-post-requests/) \

HTTP GET and HTTP POST: \
[ESP32 HTTP GET and HTTP POST with Arduino IDE (JSON, URL Encoded, Text)](https://randomnerdtutorials.com/esp32-http-get-post-arduino/) \
[ESP32 IoT](https://electronoobs.com/eng_arduino_tut172.php) \
[How to use ArduinoJson with HTTPClient?](https://arduinojson.org/v6/how-to/use-arduinojson-with-httpclient/) \
[Making a http POST request using Arduino](https://stackoverflow.com/questions/3677400/making-a-http-post-request-using-arduino) \
[ESP32/ESP8266 Insert Data into MySQL Database using PHP and Arduino IDE](https://georgochr.sites.sch.gr/?page_id=2087) \
[A reliable Arduino Webserver and how to POST data](https://werner.rothschopf.net/202003_arduino_webserver_post_en.htm) \

ESP32 + LoRa: \
[ESP32 with LoRa using Arduino IDE – Getting Started](https://randomnerdtutorials.com/esp32-lora-rfm95-transceiver-arduino-ide/) \
[Frequency Plans by Country](https://www.thethingsnetwork.org/docs/lorawan/frequencies-by-country/) \
[LoRa // or alternatives? Transmit data from sensor to database/gateway](https://forum.arduino.cc/t/lora-or-alternatives-transmit-data-from-sensor-to-database-gateway/685595) \
[ESP32 LoRa Sensor Monitoring with Web Server (Long Range Communication)](https://randomnerdtutorials.com/esp32-lora-sensor-web-server/) \
[ESP32 & LoRa Sensor Data Monitoring ||Sender + Receiver with OLED Display](https://www.youtube.com/watch?v=El9M5Us8Jdk) \

Timestamp readings: \
[Getting Date and Time with ESP32 on Arduino IDE (NTP Client)](https://randomnerdtutorials.com/esp32-ntp-client-date-time-arduino-ide/) \