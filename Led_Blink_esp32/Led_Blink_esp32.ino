/*
 * Date created: 16/08/2020 
 * Author: Marjanur Rahman
 * Organization: Swinburen IoT and AI Club
 * Version: 1.0.0
 * 
 */


/* Our esp32's built-in LED in connected to GPIO pin 2
   so we are defining a shorctcut "LED_Pin" as 2 so that we can keep using 
   the same shorcut LED_Pin thoroughout the program whenever need to use the pin.
   
*/
#define LED_Pin 2

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin connected to the LED as an output.
  pinMode(LED_Pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                     // wait for 1000 milliseconds or one second    
  digitalWrite(LED_Pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for 1000 milliseconds or one second again
}
