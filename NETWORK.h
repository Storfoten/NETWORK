#ifndef NETWORK_h
#define NETWORK_h
//#include <ESP8266HTTPClient.h>
#include <ArduinoHttpClient.h>
class NETWORK
{
public:
    NETWORK()
    : ssid_("")
    , password_("")
    , ip_(0,0,0,0)
    , dns_(0,0,0,0)
    , gateway_(0,0,0,0)
    , subnet_(255,255,255,0)
    , DHCP(true)
    {};

    void Setup(std::string ssid, std::string password)
    {
        ssid_ = ssid;
        password_ = password;
    };
    void Setup(std::string ssid, std::string password, IPAddress ip,  IPAddress dns,  IPAddress gateway)
    {
        ssid_ = ssid;
        password_ = password;
        ip_ = ip;
        dns_ = dns;
        gateway_ = gateway;
        DHCP = false;
    };
    
    std::string ssid_ = "";
    std::string password_ = "";
    IPAddress ip_;
    IPAddress dns_;
    IPAddress gateway_;
    IPAddress subnet_;
    bool DHCP;
};
#endif