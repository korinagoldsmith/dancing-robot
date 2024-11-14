Happy Feet 🤖💃
===============================
During exam season or any stressful period, it's easy to feel overwhelmed. Happy Feet was created to be a small yet lively companion, offering breaks that help lift spirits and promote positivity. Imagine a robot that not only dances with you but also brings a smile to your face, even if just for a moment. Happy Feet embodies these little moments of joy, keeping you motivated and helping you stay sane.

<img width="535" alt="Screenshot 2024-11-13 at 7 13 40 PM" src="https://github.com/user-attachments/assets/ee84e9f5-8607-422b-8395-24a189bf1065">

## Features
Fun Dances: Performs a variety of dance moves, including the classic "stanky leg."
Easy-to-Use: Simple setup that brings a joyful distraction when you need it most.
Expandable: Designed with future enhancements in mind, like adding music, voice chat, and mood-based features.

## Technology
Happy Feet is built on an Arduino Uno platform and uses servos to bring it to life. Here’s a quick rundown of the core setup:

Hardware: 4 servos are used (2 for each thigh and 2 for each foot), mounted onto a cardboard platform.
Power Supply: Servos and other components are connected through a breadboard to a reliable power source.
Programming: The robot’s dance moves are programmed using Arduino code and C++, setting up specific angles for the servos to create fun and dynamic movements.

## Initial Prototype
<img width="427" alt="Screenshot 2024-11-13 at 7 14 23 PM" src="https://github.com/user-attachments/assets/7ca02605-4455-40a8-b267-c9e68c82ed83"> \n
Problems: the bread board made the top of the robot too heavy so we had to find a way to connect all of the hardware without throwing the robot off balance.

## The Process
<img width="426" alt="Screenshot 2024-11-13 at 7 13 58 PM" src="https://github.com/user-attachments/assets/5237092d-b28d-40f4-af7b-7147f158cef1">
<img width="424" alt="Screenshot 2024-11-13 at 7 15 04 PM" src="https://github.com/user-attachments/assets/93a5c2ad-d2f9-478f-a10a-21c144cb4470">

## Challenges & Solutions
During development, we encountered several challenges:

Servo Orientation: Some servos were misaligned, requiring recalibration to ensure smooth movement.
Hot Glue Limitations: The glue we used initially restricted servo movement; we later reattached components more carefully.
IR Sensor Issues: We aimed to control Happy Feet with an IR remote, but inconsistent sensor values made it unreliable. A dead remote battery cut our testing short, so we pivoted to manual control.
