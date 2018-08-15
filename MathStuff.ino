void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);//adjust these values to play around with each concept
Serial.print("addition: ");
Serial.println(5+10);
Serial.print("subtraction: ");
Serial.println(10 - 4);
Serial.print("multiplication: ");
Serial.println(5 * 10);
Serial.print("division: ");
Serial.println(10 / 2);
Serial.print("power: ");
Serial.println(pow(9,2));
Serial.print("Root: ");
Serial.println(sqrt(25));
}

void loop() {
  // put your main code here, to run repeatedly:

}
