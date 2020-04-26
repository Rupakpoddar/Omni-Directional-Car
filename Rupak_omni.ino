//Written By Rupak Poddar
//www.youtube.com/RupakPoddar
int a1 = 12;
int a2 = 11;
int b1 = 10;
int b2 = 9;
int c1 = 8;
int c2 = 7;
int d1 = 6;
int d2 = 5;
int led= 13;

String readString;

void setup() {
Serial.begin(9600);
pinMode(a1, OUTPUT);
pinMode(a1, OUTPUT); 
pinMode(b1, OUTPUT);
pinMode(b2, OUTPUT);
pinMode(c1, OUTPUT);
pinMode(c2, OUTPUT);
pinMode(d1, OUTPUT);
pinMode(d2, OUTPUT);
pinMode(led, OUTPUT);
}

void loop() {
while (Serial.available()) {
delay(3); 
char c = Serial.read();
readString += c; 
}
if (readString.length() >0) {
Serial.println(readString);
if (readString == "f") 
{
digitalWrite(b2, HIGH);
digitalWrite(d1, HIGH);
}
if (readString == "b")
{
digitalWrite(b1, HIGH);
digitalWrite(d2, HIGH);
}
if (readString == "l")
{
digitalWrite(a2, HIGH);
digitalWrite(c1, HIGH);
}
if (readString == "r")
{
digitalWrite(a1, HIGH);
digitalWrite(c2, HIGH);
}
if (readString == "fr")
{
digitalWrite(b2, HIGH);
digitalWrite(d1, HIGH);
digitalWrite(a1, HIGH);
digitalWrite(c2, HIGH);
}
if (readString == "br")
{
digitalWrite(b1, HIGH);
digitalWrite(d2, HIGH);
digitalWrite(a1, HIGH);
digitalWrite(c2, HIGH);
}
if (readString == "fl")
{
digitalWrite(b2, HIGH);
digitalWrite(d1, HIGH);
digitalWrite(a2, HIGH);
digitalWrite(c1, HIGH);
}
if (readString == "bl")
{
digitalWrite(b1, HIGH);
digitalWrite(d2, HIGH);
digitalWrite(a2, HIGH);
digitalWrite(c1, HIGH);
}
if (readString == "cw")
{
digitalWrite(a1, HIGH);
digitalWrite(b1, HIGH);
digitalWrite(c1, HIGH);
digitalWrite(d1, HIGH);
}
if (readString == "aw")
{
digitalWrite(a2, HIGH);
digitalWrite(b2, HIGH);
digitalWrite(c2, HIGH);
digitalWrite(d2, HIGH);
}
if (readString == "s")
{
digitalWrite(a1, LOW);
digitalWrite(a2, LOW);
digitalWrite(b1, LOW);
digitalWrite(b2, LOW);
digitalWrite(c1, LOW);
digitalWrite(c2, LOW);
digitalWrite(d1, LOW);
digitalWrite(d2, LOW);
}
if (readString == "lo")
{
  digitalWrite(led, HIGH);
}
if (readString == "lf")
{
  digitalWrite(led, LOW);
}
readString="";
} 
}
