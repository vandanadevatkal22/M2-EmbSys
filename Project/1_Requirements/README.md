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