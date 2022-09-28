/*
Keyboard
*/

// create an array of notes
// the numbers below correspond to the frequencies of middle C, D, E, and F
int notes[] = {262, 294, 330, 349};

void setup() {
//start serial communication
Serial.begin(9600);
}

void loop() {
// create a local variable to hold the input on pin A0
int keyVal = analogRead(A0);
// send the value from A0 to the Serial Monitor
Serial.println(keyVal);

// play the note corresponding to each value on A0
if (keyVal == 1023) {
// play the first frequency in the array on pin 8
tone(8, notes[0]);
} else if (keyVal >= 990 && keyVal <= 1010) {
// play the second frequency in the array on pin 8
tone(8, notes[1]);
} else if (keyVal >= 505 && keyVal <= 515) {
// play the third frequency in the array on pin 8
tone(8, notes[2]);
} else if (keyVal >= 5 && keyVal <= 10) {
// play the fourth frequency in the array on pin 8
tone(8, notes[3]);
} else {
// if the value is out of range, play no tone
noTone(8);
}
}