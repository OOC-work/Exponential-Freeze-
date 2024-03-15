#include <SPI.h>
#include <Wire.h> 
#include <Nextion.h>

int Relay1 = 16; //繼電器1 Pin16
int Relay2 = 17; //繼電器2 Pin17
int Pump = 8 ; //水泵 Pin8
int FAN = 5; //風扇 Pin5
int COOL = 6; //製冷設備 Pin6

//---------------------------------
void setup() {
  Serial.begin(9600);
  pinMode(Relay1,OUTPUT); //繼電器1輸出
  pinMode(Relay2,OUTPUT); //繼電器2輸出
  pinMode(Pump,OUTPUT); //水泵輸出
  pinMode(COOL,OUTPUT); //致冷片輸出
  pinMode(FAN,OUTPUT); //風扇輸出

  digitalWrite(16, HIGH); //繼電器1 Pin16 
  digitalWrite(17, LOW); //繼電器2 Pin17 
  digitalWrite(8, HIGH); //水泵 Pin8
  digitalWrite(5, HIGH); //風扇 Pin5 
  digitalWrite(6, HIGH); //致冷片----------------------------需更改
  
  
}

void loop() {

 

}
