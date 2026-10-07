# nRF52832 Embedded Systems Workshop — IIT Ropar

Hands-on embedded systems work completed during a two-day workshop by **IIT Ropar** using the **Nordic nRF52832 development platform**.

The workshop focused on practical interaction with the nRF52832 and connected peripherals, progressing from basic LED control to sensor interfacing, remote control, and transferring sensor data to a mobile application.

## What I Worked On

The repository contains the workshop exercises and code used while working with:

* **LED and GPIO control**
* **Button-controlled LED operation**
* **Remote LED control**
* **Temperature and humidity sensing**
* **Accelerometer interfacing**
* **Sensor data acquisition**
* **Displaying sensor data through a mobile application**
* **nRF52832 peripheral interaction**

## Repository Structure

| Folder                    | Focus                                                        |
| ------------------------- | ------------------------------------------------------------ |
| `Led_Blink`               | Basic LED control and GPIO output                            |
| `Button_with_Led`         | Button input combined with LED control                       |
| `Led_Control_Remote`      | Remote control of LED functionality                          |
| `AHT20`                   | AHT20 temperature and humidity sensor                        |
| `SHT40`                   | SHT40 temperature and humidity sensor                        |
| `SHT40_nRF_UI_Code`       | nRF-side UI / sensor-related exercise                        |
| `SHT_Data_on_MobileApp`   | Temperature/humidity sensor data with mobile-app interaction |
| `lis3dhSensor`            | LIS3DH accelerometer interfacing                             |
| `Extended_Accelerometer`  | Extended accelerometer functionality                         |
| `LIS3DH_Data_OnMobileApp` | Accelerometer data with mobile-app interaction               |

## Learning Progression

The exercises provided a progression from basic embedded control toward sensor-connected applications:

```text
Basic GPIO
    ↓
LED & Button Control
    ↓
Remote Control
    ↓
Temperature / Humidity Sensors
    ↓
Accelerometer
    ↓
Sensor Data Acquisition
    ↓
Mobile Application Interaction
```

This gave me practical exposure to how a microcontroller-based system can move from **basic hardware control to sensing and connected-device applications**.

## Hardware

* Nordic **nRF52832** development board
* LEDs / onboard LEDs
* Push-button input
* AHT20 temperature & humidity sensor
* SHT40 temperature & humidity sensor
* LIS3DH accelerometer
* Supporting workshop hardware and peripherals

## Workshop Context

This repository documents work completed during a **two-day hands-on workshop conducted at IIT Ropar**.

The base exercise code was provided as part of the workshop. The repository is intended to document the exercises I worked through and the embedded-systems concepts I practiced rather than present the workshop material as independently authored software.

Where applicable, personal modifications or work performed during the exercises should be identified separately from the provided source material.

## Why This Repository

I created this repository as a record of my first hands-on experience with the **Nordic nRF52832 platform** and embedded wireless/connected-device development.

It complements my other embedded and robotics work involving **ESP32, C/C++, sensors, actuators, UDP communication, computer vision, and hardware/software integration**.

## Technologies & Concepts

* Nordic nRF52832
* Embedded C
* GPIO
* Sensor interfacing
* Temperature & humidity sensing
* Accelerometer interfacing
* Remote control
* Mobile-app sensor interaction
* Embedded hardware/software integration

## Note on Source Code

Some source material in this repository originated from the workshop exercises provided to participants. It is retained here for educational documentation of my workshop work.

This repository should not be interpreted as representing all code as independently authored by me.
