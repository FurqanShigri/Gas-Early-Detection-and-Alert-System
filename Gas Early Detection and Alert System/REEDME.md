# Arduino-Based Gas Early Detection and Alert System

## Project Overview

The **Arduino-Based Gas Early Detection and Alert System** is a safety project designed to detect the presence of harmful or flammable gases using an MQ-2 gas sensor. When the gas concentration exceeds a predefined threshold, the system immediately activates a buzzer to alert nearby people and displays the gas level along with the warning message on a 16x2 I2C LCD.

This project is suitable for homes, laboratories, kitchens, industries, and educational purposes where early gas leak detection is important.

---

## Features

- Detects LPG, propane, methane, smoke, and other combustible gases.
- Displays real-time gas sensor readings on a 16x2 LCD.
- Activates a buzzer when gas concentration exceeds the threshold.
- Easy to build using an Arduino Uno.
- Low-cost and beginner-friendly project.
- Threshold value can be adjusted in the Arduino code.

---

## Components Required

| Component | Quantity |
|-----------|----------|
| Arduino Uno | 1 |
| MQ-2 Gas Sensor | 1 |
| 16x2 LCD with I2C Module | 1 |
| Active Buzzer | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |
| USB Cable | 1 |

---

## Circuit Connections

### MQ-2 Gas Sensor

| MQ-2 Pin | Arduino Uno |
|----------|-------------|
| VCC | 5V |
| GND | GND |
| AO | A0 |

### Buzzer

| Buzzer | Arduino Uno |
|--------|-------------|
| Positive (+) | D8 |
| Negative (-) | GND |

### 16x2 I2C LCD

| LCD Pin | Arduino Uno |
|---------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

---

## Working Principle

1. The MQ-2 gas sensor continuously monitors the surrounding air.
2. Arduino reads the analog value from the gas sensor.
3. The gas value is displayed on the LCD in real time.
4. If the sensor reading exceeds the predefined threshold:
   - The buzzer turns ON.
   - The LCD displays **"GAS LEAK!"**
5. If the gas level is below the threshold:
   - The buzzer remains OFF.
   - The LCD displays **"Air Safe"**.

---

## Software Requirements

- Arduino IDE
- LiquidCrystal_I2C Library
- Wire Library

---

## Installation

1. Install the Arduino IDE.
2. Connect the Arduino Uno to your computer.
3. Install the **LiquidCrystal_I2C** library.
4. Open the project code in the Arduino IDE.
5. Select:
   - Board: **Arduino Uno**
   - Port: **COM Port**
6. Upload the code to the Arduino.

---

## Project Structure

```
Gas-Early-Detection-System/
│
├── Gas_Detector.ino
├── README.md
├── Circuit_Diagram.png
├── Working_Video.mp4
└── Images/
```

---

## Expected Output

### Normal Condition

```
Gas: 245
Air Safe
```

### Gas Leakage Detected

```
Gas: 612
GAS LEAK!
```

The buzzer will sound continuously until the gas concentration drops below the threshold.

---

## Applications

- Home kitchens
- LPG cylinder monitoring
- Laboratories
- Industrial safety
- Chemical storage rooms
- Educational demonstrations
- Smart home safety systems

---

## Future Improvements

- Add Wi-Fi (ESP8266/ESP32) for IoT monitoring.
- Send SMS or Email alerts.
- Display gas concentration on a mobile app.
- Add a relay to automatically turn on an exhaust fan.
- Store gas readings on cloud platforms such as ThingSpeak.

---

## Author

**Furqan Ali**

---

## License

This project is created for educational purposes and is free to use, modify, and distribute.