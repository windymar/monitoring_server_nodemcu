#ifndef LOGGER_HPP
#define LOGGER_HPP

void serial_log(const __FlashStringHelper* p_text);
void serial_logln(const __FlashStringHelper* p_text);
void serial_logln(const __FlashStringHelper* p_text, const String& p_option);

#endif