# arduino-motor

A basic example of controlling a motor using an Arduino.

## Arduino Code

Open up [Arduino Create](https://create.arduino.cc/editor/) and add the following code:

```csharp
int motorPin = 9;
int motorValue = 0;

void setup() {
  
  Serial.begin(9600);
 
}

void loop() {
  
  // Alternate between full speed and off
  if (motorValue == 0) {
    motorValue = 255;
  } else {
    motorValue = 0;
  }
  
  analogWrite(motorPin, motorValue);  
  Serial.println(motorValue);
 
  delay(1000);
 
}
```

[View the Arduino code on Arduino Create](https://create.arduino.cc/editor/professoradam/703dc0ed-a25d-4c01-a3c9-433ba5afcabc/preview)

You will need to setup the following circuit using your Arduino:

![Tinkercad Circuit](https://raw.githubusercontent.com/codeadamca/arduino-motor/main/tinkercad-motor.png)

[View the Circuit on Tinkercad](https://www.tinkercad.com/things/h2MepgtwoSD)


## Tutorial Requirements:

* [Visual Studio Code](https://code.visualstudio.com/) or [Brackets](http://brackets.io/) (or any code editor)
* [Arduino Create](https://create.arduino.cc/editor) 

Full tutorial URL: https://codeadam.ca/learning/arduino-motor.html

<a href="https://codeadam.ca">
<img src="https://codeadam.ca/images/code-block.png" width="100">
</a>
