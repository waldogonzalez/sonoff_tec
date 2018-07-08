#include <SoftwareSerial.h>
int valor=0;
//#define rxPin 2
//#define txPin 3
//#define ledPin 13
//SoftwareSerial xbee =  SoftwareSerial(5, 6);
//SoftwareSerial xbee(2,3);

void setup(){
 //pinMode(2, INPUT);
// pinMode(3, OUTPUT);
  Serial.begin(9600);
  //xbee.begin(9600);
}

void loop(){
if (Serial.available() >= 21) {
  if(Serial.read()==0x7E){
    for(int i=0; i<19;i++){
      byte discardByte = Serial.read();
    }
     valor=Serial.read();
     if(valor==0){
      Serial.println("Apagado");
      //Serial.print(valor,HEX);
     }
     else {
      Serial.println("Encendido");
     }
     }
      //Serial.println();
      //delay(500);
      }
}
