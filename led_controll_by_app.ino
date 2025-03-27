#define BLYNK_TEMPLATE_ID "TMPL3-t_yH-DB"
#define BLYNK_TEMPLATE_NAME "ESP 32 led project"
#define BLYNK_PRINT Serial


#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Replace with your network credentials
char ssid[] = "Happy@Wifi";  
char pass[] = "pawar.wifi@8042";  
char auth[] = "q6vUmllpE3P7RCEnTPizm5Pe1DpVUgYu";  

int ledPin = 2; // Change to the GPIO pin of your LED

void setup() {
    Serial.begin(115200);
    Blynk.begin(auth, ssid, pass);
    pinMode(ledPin, OUTPUT);
}

BLYNK_WRITE(V0) { // This function is triggered when the button is pressed
    int ledState = param.asInt(); // Get value from Blynk app
    digitalWrite(ledPin, ledState);
}

void loop() {
    Blynk.run(); // Run Blynk
}
