# SMART DUSTBIN
## Abstract
The main objective of the project is to design a smart dustbin which will help in keeping our environment clean and also eco-friendly. This smart dustbin is built on the microcontroller-based system having ultrasonic sensors on the dustbin. After all hardware and software connection, now Smart Dustbin program will be run. Dustbin lid will when someone comes near at some range than wait for user to put garbage and close it. Seperating fdry and wet waste makes the task of recycling dry non-biodegradable waste easier. It also simplifies the conversion of wet waste like leftover food, used tea leaves, etc. to compost. Hence the bin alerts the user to put only the dry waste by beeping if wet waste is detected. 

## DESCRIPTION
* Ultrasonic sensor: It the measures the distance to an object approching the dustbin
* Servo Motor: It is responsible for opening and closing the lid of the dustbin
* LED: It indicates the level of garbage in the bin
* Power supply: It supplies the appropriate volatge to the controller 
* ADC & DAC: They are responsible in converting the signals according to the requirements.
* Moisture sensor: detects the wet waste
* Buzzer: It Beeps when wet waste is detected and alert the person to not put inside the bin. 

## COMPONENTS
### Ultrasonic sensor
![image](https://user-images.githubusercontent.com/66207959/157237935-f961f376-1bf7-4426-a320-83a1694c955e.png)
An ultrasonic sensor is an instrument that measures the distance to an object using ultrasonic sound waves. An ultrasonic sensor uses a transducer to send and receive ultrasonic pulses that relay back information about an object's proximity. 
#### It the measures the distance to an object approching the dustbin

### Servo motor
![image](https://user-images.githubusercontent.com/66207959/157238223-833f310c-eb90-46c8-8749-732aa28d6fce.png)
A servomotor (or servo motor) is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback.
####  It is responsible for opening and closing the lid of the dustbin

### LED
![image](https://user-images.githubusercontent.com/66207959/157238350-12f52ca3-28b9-4cce-ba33-142d03dadfc8.png)
A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. 
#### It indicates the level of garbage in the bin

### Moisture Sensor
![image](https://user-images.githubusercontent.com/66207959/157238697-ca967d79-7e8f-46dd-9322-6a93810416d2.png)
Humidity sensors are electronic devices that measure and report the moisture and air temperature of the surrounding environment where they are deployed 
####  Detects the wet waste

### Buzzer
![image](https://user-images.githubusercontent.com/66207959/157238825-c4d216ae-4d3e-46de-9ffd-2c1fdd6304d6.png)
A buzzer or beeper is an audio signaling device, which may be mechanical, electromechanical, or piezoelectric (piezo for short).
#### It Beeps when wet waste is detected and alert the person to not put inside the bin. 

## WORKING
This Smart Dustbin sense the person or object using Ultrasonic Sensor which send the message to Servo Motor using Arduino Uno. When the person Comes closer to Smart Dustbin then the Dustbin Cap will automatically open for your waste and after some time it will automatically Close. It also contains the Moisture sensor, which senses the moisture in waste and it alerts the user by beeping, indicating that the user must not throw the wet waste in dustbin. The ultrasonic sensor is placed beneath the lid, which keeps track of garbage level. Once the waste reaches the limit, the LED glows, indicating the dustbin is full.

## 4W'S 1-H
### What
* Description of the problem
    * It's unhygienic to touch the dustbin lid while disposing waste
    * Mixture of dry and wet waste leads to pollution and recycling related issues
    * Improper dispoing of waste
    * Growth of micro-organisms if exposed to enviroment

### Who
* The responsible parties
    * Human beings

### Where
* The location of the problem
    * House, restaurants, Office
    * Streets
    * Airports, bus stand, railway station, etc

### Why
* Motivation of the problem
    * To maintain environmental hygiene
    * To simplify the waste recycle process

### How
* The effects of the problem
    * Causes unwanted disease if not treated well
    * Effects environmental hygiene


## HIGH LEVEL REQUIREMENTS
|ID  | Requirements|
|----|-------------|
|HLR1| It should be contactless|
|HLR2| It should indicate the garbage leve|
|HLR3| The garbage should not exposed to environment|
|HLR4| Only dry waste should be disposed|

## LOW LEVEL REQUIREMENTS
|ID|Requirements|
|--|------------|
|LLR1.1|It shall sense the objects approaching to it|
|LLR1.2|It shall have a automatic movable lid|
|LLR2.1|It shall have a proximity sensor to detect the garbage level|
|LLR2.2|It shall have a LED which glows once the maximum limit has reached|
|LLR2.3|It shall beep one time after reaching the limit|
|LLR3.1|It shall have a sliding lid to open and close|
|LLR3.2|It is closed when no object is detected| 
|LLR4.1|It shall alert the user if moisture is detected|
|LLR4.2|It Shal close the lid within a sec if moisture is detected| 
