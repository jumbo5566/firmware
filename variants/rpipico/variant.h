// #define RADIOLIB_CUSTOM_ARDUINO 1
// #define RADIOLIB_TONE_UNSUPPORTED 1
// #define RADIOLIB_SOFTWARE_SERIAL_UNSUPPORTED 1

#define ARDUINO_ARCH_AVR

#define log_e(...) Serial2.printf(__VA_ARGS__)
#define log_i(...) Serial2.printf(__VA_ARGS__)
#define log_d(...) Serial2.printf(__VA_ARGS__)

#define HAS_SCREEN 1
#define HAS_GPS 1

//#define I2C_SDA 4
//#define I2C_SCL 5
#define I2C_SDA1 18
#define I2C_SCL1 19

#define SERIAL2_TX 8
#define SERIAL2_RX 9
//#define PIN_GPS_PPS 16
//#define PIN_GPS_STANDBY 17
//#define GPS_UBLOX
#define GPS_RX_PIN 1
#define GPS_TX_PIN 0
//#define GPS_DEBUG

#define EXT_NOTIFY_OUT 22
#define BUTTON_PIN 17
#define BUTTON_NEED_PULLUP
#define LED_PIN PIN_LED

#define BATTERY_PIN 26
// ratio of voltage divider = 3.0 (R17=200k, R18=100k)
#define ADC_MULTIPLIER 3.1 // 3.0 + a bit for being optimistic
#define BATTERY_SENSE_RESOLUTION_BITS ADC_RESOLUTION
//#define USE_LLCC68
//#define USE_RF95 // RFM95/SX127x
//#define USE_SX1280
//#define USE_SX1262
#define USE_SX1268
#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK 10
#define LORA_MOSI 11
#define LORA_MISO 12
#define LORA_CS 13

#define LORA_DIO0 RADIOLIB_NC
#define LORA_RESET 16
#define LORA_DIO1 20
#define LORA_DIO2 2
#define LORA_DIO3 RADIOLIB_NC

//#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_DIO2
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
//#define SX126X_DIO3_TCXO_VOLTAGE 1.8
//#endif
