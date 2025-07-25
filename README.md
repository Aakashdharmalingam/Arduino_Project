# Project :


# 🕷️ Quadruped Robot using Arduino Nano + PCA9685 + Inverse Kinematics

This project is an **upgraded version of a classic quadruped (spider-like) robot**, modified to include a **PCA9685 16-channel PWM controller** for more efficient servo control and powered by a **5V 10A SMPS**. The robot uses **12 MG90S servos** and is controlled via **serial commands**, with movement powered by calibrated **inverse kinematics** logic.

## 🔧 Features

- 3 Degrees of Freedom per leg (Coxa, Femur, Tibia)
- Calibrated Inverse Kinematics for leg movement
- Movement via serial commands:
  - `forward`, `backward`
  - `turn_left`, `turn_right`
  - `sit`, `reset`, `handshake`
- PCA9685 for offloaded and smooth PWM signal generation
- Stable servo operation using a 5V 10A SMPS
- Reset and calibration mode included

## 🧠 Tech Stack

- **Microcontroller**: Arduino Nano (ATmega328P)
- **Servo Driver**: PCA9685 16-Channel PWM over I2C
- **Servos**: 12 × MG90S micro servos
- **Power Supply**: 5V 10A SMPS
- **Communication**: Serial interface to send movement commands

## 🖥️ Serial Commands

You can control the robot via the serial monitor or any UART terminal with these commands:

| Command      | Action               |
|--------------|----------------------|
| `forward`    | Walk forward         |
| `backward`   | Walk backward        |
| `turn_left`  | Turn to the left     |
| `turn_right` | Turn to the right    |
| `sit`        | Sit position         |
| `reset`      | Return to default pose |
| `handshake`  | Perform handshake gesture |

## 📐 Inverse Kinematics

Each leg is controlled by solving inverse kinematics for 3 joints (Coxa, Femur, Tibia). Angles are calculated in code and mapped to appropriate servo pulse widths using PCA9685.


## 🔌 Wiring Diagram

| Component     | Connection           |
|---------------|----------------------|
| PCA9685 VCC   | 5V from SMPS         |
| PCA9685 GND   | GND (common with Arduino) |
| PCA9685 SDA   | A4 (Arduino Nano)    |
| PCA9685 SCL   | A5 (Arduino Nano)    |
| Servo PWM     | 16 Channels (0–11 used) |
| SMPS 5V       | To PCA9685 VCC and Servo V+ |
| Arduino Nano  | Powered via USB or VIN |

> ⚠️ Ensure GND is common between Arduino, PCA9685, and SMPS for stable operation.

## 🎥 Demo Video

[📺 Watch the robot in action on LinkedIn!](#) <!-- Replace with your actual LinkedIn post or YouTube video link -->


## 📜 Credits

- Original gait design inspired by open-source quadruped projects
- Inverse kinematics logic adapted and modified for PCA9685 integration

---

## 📫 Contact

Feel free to reach out or connect with me:

**Aakash D**  
🔗 [LinkedIn](https://www.linkedin.com/in/your-profile)  
📬 Email: your.email@example.com  

---

## ⭐ If you like this project, consider starring the repo and giving feedback!



