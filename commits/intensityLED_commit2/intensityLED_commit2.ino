#include <runtimer.h>     //Library for the timer

#define led 6
#define sensor A3

intervalTimer timer1(2000);         //Timer with an interval of 2000ms

int input;
int sensorHigh = 255;

void setup() 
{
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.flush();
}

void loop() {
  input = map(analogRead(sensor), 0, 1023, 0, 255); //Convert the input of the sensor of 0 - 1023 to 0 - 255
  analogWrite(led,(sensorHigh-input));

}
