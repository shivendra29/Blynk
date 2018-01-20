#include <Blynk.h>
#define BLYNK_PRINT Serial
#define BLYNK_DEBUG

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "/BlynkAuthKey\";

//WiFi credentials.
char ssid[] = "/Your ssid\";
char pass[] = "/YourPassword\";

void setup()
{
  //Debug
  Serial.begin(115200);
  WiFi.begin(ssid,pass);
  Blynk.config(auth);
}

void loop()
{
  Blynk.run();
}

