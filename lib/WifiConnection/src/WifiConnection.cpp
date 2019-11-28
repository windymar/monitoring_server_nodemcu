#include <WifiConnection.hpp>
#include <Logger.hpp>

WifiConnection::WifiConnection()
{
}

WifiConnection::~WifiConnection()
{
    WiFi.disconnect();
}

void WifiConnection::connect(const String& p_ssid, const String& p_password) const
{
    WiFi.begin(p_ssid, p_password);
    serial_logln(F("Wifi connecting to "), p_ssid);
    waitForWifiConnectionEstablishedForSeconds(10);
    if(not isConnected())
    {
        serial_logln(F(""));
        serial_logln(F("Cannot establish Wifi connection."));
        return;
    }
    serial_logln(F(""));
    serial_logln(F("Wifi connection established"));
    serial_logln(F("Ip address "), WiFi.localIP().toString());
}

bool WifiConnection::isConnected() const
{
    return WiFi.status() == WL_CONNECTED;
}

void WifiConnection::disconnect() const
{
    serial_logln(F("Wifi diconnecting"));
    WiFi.disconnect();
    serial_logln(F("Wifi diconnected"));
}

void WifiConnection::waitForWifiConnectionEstablishedForSeconds(uint8_t p_timeoutInSeconds) const
{
    int timout = p_timeoutInSeconds;
    while((WiFi.status() != WL_CONNECTED) and (timout-- > 0))
    {
        delay(1000);
        serial_log(F("."));
    }
}