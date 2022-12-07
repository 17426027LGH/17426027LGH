#include <Servo.h>

Servo motor1;
void setup()
{
	Serial.begin(9600);
	motor1.attach(12);
}

void loop()
{
	int pinA1 = analogRead(A1);
	int value = map(pinA1, 0, 1023, 10, 255);
	analogWrite(9, value);

	Serial.print(value);
	Serial.print("\t");
	Serial.println(value);
	motor1.write(value);
}