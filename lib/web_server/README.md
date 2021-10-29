# WebServer

A class for working with a web server.

***

## API

- WebServer(Device \*device)
- void Init()


***

**WebServer(Device \*device)**

Creates a client web server object.

- device: pointer to the [device](device/README.md) object

***

**bool Init()**

Initializes a web server. The method sets up handlers for the following routes:

**GET** /  
Opens the admin page index.html.

**GET** /index.html  
Opens the admin page index.html.

**GET** /header.html  
Returns the header.html file.

**GET** /wifi.html  
Opens the wi fi network connection page wifi.html

**GET** /settings.html  
Opens a page with device control modules settings.html

**GET** /static/favicon.png  
Returns the favicon.png file.

**GET** /static/logo.svg  
Returns the logo.svg file.

**GET** /styles.css  
Returns the styles.css file.

**GET** /healthcheck  
Returns the 200 code.

**GET** /reboot  
Reboots the ESP.

**GET** /resetdefault  
Clears user parameters from memory.

**GET** /newauthpass  
Sets a new password and reboots the ESP to apply the changes.
Query params:
  - newpass - new password to be set

**GET** /setwifi  
Saves the login and password for the wifi network. Reloads the ESP to apply the changes.
Query params:
  - ssid - wifi network name;
  - pass - password.

**GET** /scan  
Scans and returns a list of wifi networks.

**GET** /connectedwifi  
Returns the name of the wifi network to which the device is connected.

**GET** /setcredentials  
A method that saves new parameters from the admin panel. Reloads the ESP to apply the changes.
Query params:
  - mail - user's email address.
  - token - user's password.
  - brokerPort - MQTT broker's port.
  - productId - product ID.
  - hostname - the address where the MQTT broker is installed.
  - deviceId - device ID.

**GET** /pair  
A method that saves new parameters from a mobile application. Reloads the ESP to apply the changes.
Query params:
  - ssid - user's email address.
  - psk - user's password.
  - wsp - MQTT broker's port.
  - token - user's password.
  - host - the address where the MQTT broker is installed.
  - brport - MQTT broker's port.


**GET** /update  
Sends the new state of the device.
Query params:
  - output - parameter;
  - state - value.

**GET** /settings  
Returns the state of the device.

**POST** /firmware/upload  
Receives the new firmware file and updates the firmware, then restarts the ESP.
