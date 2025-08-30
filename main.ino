#define BLYNK_TEMPLATE_ID "TMPLxxxxxx"
#define BLYNK_DEVICE_NAME "SmartHome"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "WIFI_NAME";        // Replace with your WiFi name
char pass[] = "WIFI_PASSWORD";    // Replace with your WiFi password

int relay1 = D1; // Light
int relay2 = D2; // Fan

void setup()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);

  Blynk.begin(auth, ssid, pass);
}

BLYNK_WRITE(V1) {
  int pinValue = param.asInt();
  digitalWrite(relay1, pinValue);
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();
  digitalWrite(relay2, pinValue);
}

void loop()
{
  Blynk.run();
}
