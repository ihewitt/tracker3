#define LED_PIN         NRF_GPIO_PIN_MAP(0, 26)
#define CHG_DET         NRF_GPIO_PIN_MAP(0, 30) // TP4056 CHRG
#define BAT_RDY         NRF_GPIO_PIN_MAP(0, 31) // TP4056 STDBY
#define BAT_ALRT        NRF_GPIO_PIN_MAP(0, 25) // Fuel Gauge ALRT
#define BUT1            NRF_GPIO_PIN_MAP(1, 0)
#define BUT2            NRF_GPIO_PIN_MAP(1, 3)
#define BUT3            NRF_GPIO_PIN_MAP(1, 1)
#define BUT4            NRF_GPIO_PIN_MAP(1, 2)
#define PIN_IO0         NRF_GPIO_PIN_MAP(0, 2)  // Qwiic 2
#define PIN_IO1         NRF_GPIO_PIN_MAP(0, 3)
#define SCL_PIN         NRF_GPIO_PIN_MAP(0, 28) // Qwiic 1
#define SDA_PIN         NRF_GPIO_PIN_MAP(0, 29)

#define GPS_TX2_PIN     NRF_GPIO_PIN_MAP(1, 8)
#define GPS_RX2_PIN     NRF_GPIO_PIN_MAP(0, 8)
#define GPS_TX3_PIN     NRF_GPIO_PIN_MAP(0, 16) // GPS stream
#define GPS_RX3_PIN     NRF_GPIO_PIN_MAP(0, 13)
#define GPS_TXD_PIN     NRF_GPIO_PIN_MAP(0, 5)  // GSM io 
#define GPS_RXD_PIN     NRF_GPIO_PIN_MAP(0, 4)
#define GPS_CTS_PIN     NRF_GPIO_PIN_MAP(0, 7)
#define GPS_RTS_PIN     NRF_GPIO_PIN_MAP(0, 12)

#define GSM_EN_PIN      NRF_GPIO_PIN_MAP(0, 14) // antenna power
#define GSM_RESET_PIN   NRF_GPIO_PIN_MAP(0, 19)
#define GSM_PWRKEY_PIN  NRF_GPIO_PIN_MAP(0, 22)
#define GSM_DISABLE_PIN NRF_GPIO_PIN_MAP(0, 21) // aka airplane mode
#define GSM_STATUS      NRF_GPIO_PIN_MAP(0, 11)
#define GSM_AP_READY    NRF_GPIO_PIN_MAP(0, 24)

#define PIN_RESET       NRF_GPIO_PIN_MAP(0, 18) // nrf reset line 
