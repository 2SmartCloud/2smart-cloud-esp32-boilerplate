#pragma once
#include <Arduino.h>

// ----------------------------------------------------------Variables--------------------
bool erase_flag = false;

// ----------------------------------------------------------HTTP-----------
String ssid_name = "Wifi_Name";  // WiFi name
String ssid_password = "";       // WiFi password
String person_mail = "";
String person_id = "";
String token = "";
String host = "cloud.2smart.com";
String broker_port = "1883";
String web_auth_password = "";
const char* http_username = "admin";
// -------------------------------------------------------Production settings
String device_id = "";                  // DeviceID/ MAC:adress
String product_id = "Your_product_id";  // production id 1625479282444746
// -------------------------------------------------------MQTT variables

const char* device_name = "2Smart Relay";
const char* device_version = "1";
const char* firmware_name = "Your_firmware_name";  // production name 1625479282444746

void HandleMessage(char* topic, byte* payload, unsigned int length);
