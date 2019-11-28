#include <Arduino.h>
#include <WifiConnection.hpp>
#include <Config.hpp>

WifiConnection g_wifiConnection;

void setup()
{
    Serial.begin(9600);
    g_wifiConnection.connect(cfg::SSID, cfg::PASSWORD);

}

void loop()
{
    
}