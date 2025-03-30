#include <Servo.h>  
#include <LiquidCrystal.h>  
#define TRIGGER_PIN 9  
#define ECHO_PIN 10  
#define SERVO_PIN 11  
#define BUZZER_PIN 7  
#define RED_LED_PIN 8  
#define GREEN_LED_PIN 13  
#define SERVO_DELAY 30  
#define SCAN_DELAY 100  

Servo servoMotor;  
LiquidCrystal lcd(12, 6, 5, 4, 3, 2);  

void setup() {  
pinMode(TRIGGER_PIN, OUTPUT);  
pinMode(ECHO_PIN, INPUT);  
pinMode(BUZZER_PIN, OUTPUT);  
pinMode(RED_LED_PIN, OUTPUT);  
pinMode(GREEN_LED_PIN, OUTPUT);  
servoMotor.attach(SERVO_PIN);  
lcd.begin(16, 2);  
lcd.print("Radar System");  
lcd.setCursor(0, 1);  
lcd.print("Initializing....");  
delay(2000);  
lcd.clear();  
lcd.print("Distance: cm");  
}  
