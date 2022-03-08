# Test Plan And Output

|Sl.No|Requirements|Expected output|Actual Output|Status|
|-----|------------|---------------|-------------|------|
|1|It should be contactless| Object range within 30 cm, Servo rotates| object = 25cm, servo rotates 90 deg|PASS|
|2|Alert if dustbins full|Object range within 20 cm, LED glows| Object = 10cm, LED = ON|PASS|
|3|Alert if dustbins full|Object range within 20 cm, LED glows| Object = 45cm, LED = OFF|PASS|
|4|Only dry waste should be disposed|Moisture detects, Buzzer beeps| Moisture = 1, Buzzer = ON|PASS|
|5|Only dry waste should be disposed|Moisture detects, Buzzer beeps| Moisture = 0, Buzzer = OFF|PASS|
|6|Should not be exposed to environment|distance>=30, Servo = 00 deg|distance = 45, Servo = 0 deg, lid is closed|PASS|