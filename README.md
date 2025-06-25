COMPANY : CODTECH IT SOLUTIONS

NAME : BHARAT KUMAR MADDILA

INTERN ID : CT04DF2079

DOMAIN : INTERNET OF THINGS

DURATION : 4 WEEKS

MENTOR : NEELA SANTOSH

As part of the IoT internship program, I worked on Task 1, which involved designing a smart light control system. The aim was to control an LED light using a microcontroller and simulate commands that could come from a mobile app. I chose Tinkercad, a popular online circuit simulator, to complete the task. It allowed me to build and test the circuit virtually using components like the Arduino Uno, LED, and a resistor. The goal of this project was to simulate the basic idea behind home automation systems, where lights and appliances can be turned on or off using a smartphone or other digital interface. In this case, the LED acted as a basic home light, and commands were sent through Tinkercad’s built-in Serial Monitor, mimicking the behavior of a mobile app.

For the hardware simulation, I used a simple circuit where the positive leg (anode) of the LED was connected to digital pin 7 of the Arduino, and the negative leg (cathode) was connected to ground (GND) through a resistor to protect the LED. The Arduino was programmed using the Arduino IDE to listen for input values from the Serial Monitor. If the user entered 1, the LED would turn ON, and if the user entered 0, the LED would turn OFF. The code used Serial.parseInt() to read the input and digitalWrite() to control the LED's state. I added a Serial.println() line to display the received value for verification. This setup successfully demonstrated how an LED could be controlled remotely through digital commands, which is a basic concept used in smart lighting systems. The entire process, including the code and circuit, was tested and verified in the Tinkercad environment.

This task helped me understand the basic concept of serial communication in microcontroller-based systems, which is essential in many IoT applications. Although this project was simulated, it closely resembled a real-world setup where a mobile app sends data to a microcontroller using Bluetooth or Wi-Fi. In a real application, a Bluetooth module like HC-05 could be connected to the Arduino, and a mobile app would send 1 or 0 as commands to turn lights on or off. Completing this task gave me hands-on experience in writing simple Arduino code, building virtual circuits, and controlling hardware through external inputs. It laid a strong foundation for more advanced IoT tasks in the internship, such as home automation, security systems, and environmental monitoring. Overall, this project was a great learning experience and helped me gain confidence in working with Arduino and IoT-based control systems.

OUTPUT

![Image](https://github.com/user-attachments/assets/70dea56b-0fe4-4774-b0d7-6fc5ce0cffc7)
