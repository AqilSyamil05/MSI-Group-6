// Define the pins for each segment (D0 to D6)
const int segmentA = 2; // D0
const int segmentB = 3; // D1
const int segmentC = 4; // D2
const int segmentD = 5; // D3
const int segmentE = 6; // D4
const int segmentF = 7; // D5
const int segmentG = 8; // D6

void setup() {
// IniƟalize the digital pins as OUTPUTs
pinMode(segmentA, OUTPUT);
pinMode(segmentB, OUTPUT);
pinMode(segmentC, OUTPUT);
pinMode(segmentD, OUTPUT);
pinMode(segmentE, OUTPUT);
pinMode(segmentF, OUTPUT);
pinMode(segmentG, OUTPUT);
}
// 0 = A,B,C,D,E,F
// 1 = B,C
// 2 = A,B,G,E,D
// 3 = A,B,C,D,G
// 4 = A,F,G,C,D
void loop() {
// Turn on each segment one by one
digitalWrite(segmentA, LOW); //0
digitalWrite(segmentB, LOW);
digitalWrite(segmentC, LOW);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentE, LOW);
digitalWrite(segmentF, LOW);
digitalWrite(segmentG, LOW);
delay(500);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentC, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentE, HIGH);
digitalWrite(segmentF, HIGH);
digitalWrite(segmentG, HIGH);
delay(500);
digitalWrite(segmentA, LOW); //1
digitalWrite(segmentG, LOW);
delay(500);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentG, HIGH);
delay(500);
digitalWrite(segmentB, LOW); //2
digitalWrite(segmentA, LOW);
digitalWrite(segmentD, LOW);
digitalWrite(segmentE, LOW);
digitalWrite(segmentF, LOW);
delay(500);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentE, HIGH);
digitalWrite(segmentF, HIGH);
delay(500);
digitalWrite(segmentB, LOW); //3
digitalWrite(segmentA, LOW);
digitalWrite(segmentG, LOW);
digitalWrite(segmentF, LOW);
digitalWrite(segmentD, LOW);
delay(500);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentG, HIGH);
digitalWrite(segmentF, HIGH);
digitalWrite(segmentD, HIGH);
delay(500);
digitalWrite(segmentA, LOW); //4
digitalWrite(segmentC, LOW);
digitalWrite(segmentD, LOW);
digitalWrite(segmentG, LOW);
delay(500);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentC, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentG, HIGH);
delay(500); // Delay for 1/2 second before repeaƟng */
digitalWrite(segmentB, LOW); //5
digitalWrite(segmentC, LOW);
digitalWrite(segmentD, LOW);
digitalWrite(segmentG, LOW);
digitalWrite(segmentF, LOW);
delay(500);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentC, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentG, HIGH);
digitalWrite(segmentF, HIGH);
delay(500);
digitalWrite(segmentB, LOW); //6
digitalWrite(segmentC, LOW);
digitalWrite(segmentD, LOW);
digitalWrite(segmentE, LOW);
digitalWrite(segmentF, LOW);
digitalWrite(segmentG, LOW);
delay(500);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentC, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentE, HIGH);
digitalWrite(segmentF, HIGH);
digitalWrite(segmentG, HIGH);
delay(500);
digitalWrite(segmentB, LOW); //7
digitalWrite(segmentA, LOW);
digitalWrite(segmentG, LOW);
delay(500);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentG, HIGH);
delay(500);
digitalWrite(segmentA, LOW); //8
digitalWrite(segmentB, LOW); 
digitalWrite(segmentC, LOW);
digitalWrite(segmentD, LOW);
digitalWrite(segmentE, LOW);
digitalWrite(segmentF, LOW);
digitalWrite(segmentG, LOW);
delay(500);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentC, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentE, HIGH);
digitalWrite(segmentF, HIGH);
digitalWrite(segmentG, HIGH);
delay(500);
digitalWrite(segmentA, LOW); //9
digitalWrite(segmentB, LOW); 
digitalWrite(segmentC, LOW);
digitalWrite(segmentD, LOW);
digitalWrite(segmentF, LOW);
digitalWrite(segmentG, LOW);
delay(500);
digitalWrite(segmentA, HIGH);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentC, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentF, HIGH);
digitalWrite(segmentG, HIGH);
delay(500);

/*digitalWrite(segmentA, HIGH);
digitalWrite(segmentB, HIGH);
digitalWrite(segmentC, HIGH);
digitalWrite(segmentD, HIGH);
digitalWrite(segmentE, HIGH);
digitalWrite(segmentF, HIGH);
digitalWrite(segmentG, LOW); */



}