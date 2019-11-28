#ifndef WIFI_CONNECTION_HPP
#define WIFI_CONNECTION_HPP

#include <ESP8266WiFi.h>

class WifiConnection
{
public:
    WifiConnection();
    ~WifiConnection() = default;

    void connect(const String& p_ssid, const String& p_password) const;
    bool isConnected() const;
    void disconnect() const;

private:
    void waitForWifiConnectionEstablishedForSeconds(uint8_t p_timeoutInSeconds) const;
};

#endif