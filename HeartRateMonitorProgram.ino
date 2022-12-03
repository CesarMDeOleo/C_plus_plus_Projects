// This program is intended for the Arduino Ide

#include <LiquidCrystal.h>  //the liquid crystal library helps with printing things into the display


// initialization of variables to conduct the average bpm and the threshold value of 160

float time = 0;
float bpm = 0;
float bpm_add = 0;
float average_bpm = 0;
int high_too = 160;


LiquidCrystal lcd(9, 8, 7, 6, 5, 4);  // tells the RedBoard what pins are connected to the display


void setup() {

  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(10, INPUT);  // Setup for leads off detection LO +
  pinMode(11, INPUT);  // Setup for leads off detection LO -

  // initialize the LCD display
  lcd.begin(16, 2);
  lcd.clear();

}  // end of the void setup



void loop() {

  if ((digitalRead(10) == 1) || (digitalRead(11) == 1)) {  // if statement to print out when the heart rate monitor isn't working properly
    Serial.println('!');
  }  // end of if statment

  else {  // will calculate bpm, output the average, and the alert

    // send the value of analog input 0, which will then be averaged to eliminate noise
    bpm = (analogRead(A0) / 4);
    time = time + 1;               // calculates the time for the average
    bpm_add = bpm_add + bpm;       // adds up the bpm of the dog to calcualte the average bpm
    average_bpm = bpm_add / time;  // average bpm that will be displayed
    Serial.println(average_bpm);   // displays the average bpm in the serial monitor

    lcd.setCursor(0, 0);
    lcd.print("BPM: ");
    lcd.print(average_bpm);  // displays the average bpm in the LCD display


    while (average_bpm > high_too) {  // while loop that displays the high heart rate alert, when the average bpm is above the threshold value of 160
      lcd.setCursor(0, 1);
      lcd.print("High Heart Rate!");  // displays the alert to the LCD display
    }                                 // end of while loop

  }  // end of the else statement


  //Wait for a second to keep serial data from saturating
  delay(1000);
}  // end of the void loop
