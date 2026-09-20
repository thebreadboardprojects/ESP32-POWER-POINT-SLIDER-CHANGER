# ESP32-POWER-POINT-SLIDER-CHANGER
# ESP32 PowerPoint Remote 🎮
Wireless PowerPoint slide changer using ESP32 DevKit V1 and push buttons via Bluetooth.


## 📌 Project Overview

This project uses the ESP32's Bluetooth capability to control Microsoft PowerPoint wirelessly.

Four push buttons are used to perform presentation functions:

* **F5** – Start the presentation
* **ESC** – Exit the presentation
* **Previous** – Move to the previous slide
* **Next** – Move to the next slide

## 🔧 Hardware Required

* ESP32 DevKit V1
* 4 × 4-pin tactile push buttons
* Jumper wires
* Breadboard
* USB cable
* Laptop with Bluetooth

## 🔌 Pin Connections

| Button         | ESP32 GPIO |
| -------------- | ---------: |
| F5 / Start     |    GPIO 25 |
| ESC            |    GPIO 26 |
| Previous Slide |    GPIO 27 |
| Next Slide     |    GPIO 33 |

The buttons are configured using the ESP32's internal `INPUT_PULLUP` resistors.

## 💻 Software

* Arduino IDE
* ESP32 Board Package
* Bluetooth HID keyboard library
* Microsoft PowerPoint

## ⚙️ Working Principle

The ESP32 acts as a Bluetooth keyboard.

When a push button is pressed, the ESP32 sends the corresponding keyboard command to the connected laptop. PowerPoint receives the keyboard command and performs the required presentation function.

## 📱 Bluetooth

The ESP32 appears as:

**MDV PowerPoint Remote**

Pair the ESP32 with the laptop through Windows Bluetooth settings before starting the presentation.

