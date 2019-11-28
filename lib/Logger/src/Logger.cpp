#include <WString.h>
#include <HardwareSerial.h>

void serial_log(const __FlashStringHelper* p_text)
{
    Serial.print(p_text);
}

void serial_logln(const __FlashStringHelper* p_text)
{
    Serial.println(p_text);
}

void serial_logln(const __FlashStringHelper* p_text, const String& p_option)
{
    Serial.print(p_text);
    Serial.println(p_option);
}