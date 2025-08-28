# 🅿️ Smart Parking System using Arduino + LCD (I2C)
📌 Project Overview

This project is a Smart Parking System using Arduino UNO, IR sensors, and a 16x2 I2C LCD.
It detects whether parking slots are Full or Empty and displays the status in real time on the LCD.

🛠️ Components Required
Arduino UNO 
IR Sensors × 4
16x2 LCD with I2C module
Jumper Wires 
Power Supply

🔌 Circuit Connections
IR Sensors
Slot 1 (S1) → Arduino Pin 2
Slot 2 (S2) → Arduino Pin 3
Slot 3 (S3) → Arduino Pin 4
Slot 4 (S4) → Arduino Pin 5

LCD (I2C)

VCC → 5V
GND → GND
SDA → A4
SCL → A5


📲 Working
Each IR sensor detects whether a parking slot is occupied.
If a slot is blocked (LOW) → "Full" is displayed.
If a slot is free (HIGH) → "Empty" is displayed
The LCD continuously updates slot statuses in real time.

📸 Output
Example LCD Display:
S1:Full   S2:Empty
S3:Empty  S4:Full

🚀 Future Enhancements
Add Buzzer + LED indicators for available slots.
Send Parking Availability Data to IoT Cloud (Blynk / MQTT / Firebase).
Mobile App for real-time parking updates.

👨‍💻 Author
# Developed by
     Paramasivam ✨
