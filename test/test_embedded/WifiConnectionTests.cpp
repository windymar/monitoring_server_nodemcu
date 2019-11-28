
#include <Arduino.h>
#include <WifiConnection.hpp>
#include <Config.hpp>
#include <unity.h>

void wifiConnectionEstablishmentTest()
{
    WifiConnection wifiConnection;
    wifiConnection.connect(cfg::SSID, cfg::PASSWORD);

    TEST_ASSERT_EQUAL(true, wifiConnection.isConnected());
}

void setup()
{
    UNITY_BEGIN();

    RUN_TEST(wifiConnectionEstablishmentTest);

    UNITY_END();
}

void loop()
{

}