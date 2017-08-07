#include <iostream>
#include <string>
#include <cstdint>
#include <curl/curl.h>
#include "hareket.h"


using namespace std;

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main(int32_t argc, char** argv  )
{
    wiringPiSetup();
    pinMode(pinbir, OUTPUT);
    pinMode(piniki, OUTPUT);
    pinMode(pinuc, OUTPUT);
    pinMode(pindort, OUTPUT);
    
    
    CURL *curl;
    CURLcode res;
    string readBuffer;
    int i = 0;
    while(1)
    {
        i++;
    curl = curl_easy_init();
        if(curl) {
            curl_easy_setopt(curl, CURLOPT_URL, argv[1]);
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            cout << readBuffer << endl;
            hareket(readBuffer);
            readBuffer = "";
        }
    }
    return 0;
}
