#include <ESP8266WiFi.h>
#define AP_MODE      1
#define CLIENT_MODE   2


#define DISCONNECTED  0
#define CONNECTED  1

class QUICK_SETUP_CLASS
{
  public:
    void Start();
    void Handle_Requests();
    String AP_SSID = "WifiPixels";
    String AP_Password = "";
    IPAddress AP_IP;
    int AP_State = DISCONNECTED;

    String CLIENT_SSID = "";
    String CLIENT_Password = "";
    int CLIENT_State = DISCONNECTED;
    IPAddress CLIENT_IP;

    int Mode = AP_MODE;    
};

extern QUICK_SETUP_CLASS * quick_setup;
