#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
//Servo servo5;
//Servo servo6;

int servoInt = 0;
int i;
String state = "";
int delim = 0;
int M1,M2,M3,M4,M5,M6;

void setup()
{
 pinMode(LED_BUILTIN,OUTPUT);
// pinMode(1,OUTPUT);
// pinMode(2,OUTPUT);
// pinMode(3,OUTPUT);
// pinMode(4,OUTPUT);
// pinMode(5,OUTPUT);
// pinMode(6,OUTPUT);
 
 
    servo1.attach(3); 
    servo2.attach(5); 
    servo3.attach(6); 
    servo4.attach(9); 
//    servo5.attach(5); 
//    servo6.attach(6); 
    
    servo1.write(servoInt);
    servo2.write(servoInt);
    servo3.write(servoInt);
    servo4.write(servoInt);
//    servo5.write(servoInt);
//    servo6.write(servoInt);
    
  Serial.begin(9600); 
  //while(!Serial);
}
 
void loop()
{
  //if (Serial.available() > 0){
  digitalWrite(13, HIGH);
  //digitalWrite(LED_BUILTIN,HIGH);
    state = Serial.readString();
    if(state.length() > 0){
          //Serial.println(state);
      M1 = state.substring(0,1).toInt();
      M2 = state.substring(1,2).toInt();
      M3 = state.substring(2,3).toInt();
      M4 = state.substring(3,4).toInt();
      servo1.write(M1*45); 
      servo2.write(M2*45);
      servo3.write(M3*45);
      servo4.write(M4*45);
      Serial.println(String(M1));
      Serial.println(String(M2));
      Serial.println(String(M3));
      Serial.println(String(M4));
      //delay(15);   
    } else { M1 = 0; M2 = 0; M3 = 0; M4 = 0;}
//      //delim = state.indexOf(',');
//      M2 = state.substring(1,2).toInt();
//      //state = state.substring(delim+1,state.length());
//
//      //delim = state.indexOf(',');
//      M3 = state.substring(2,3).toInt();
//      //state = state.substring(delim+1,state.length());
//
//      //delim = state.indexOf(',');
//      M4 = state.substring(3,4).toInt();
//      //state = state.substring(delim+1,state.length());
//
//      //delim = state.indexOf(',');
//      M5 = state.substring(4,5).toInt();
//      //state = state.substring(delim+1,state.length());
//
//      //delim = state.indexOf(',');
//      M6 = state.substring(5,6).toInt();
//      //state = state.substring(delim+1,state.length());
}


//      Serial.print(M2);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
//      Serial.print(M3);
//      Serial.print(M4);
//      Serial.print(M5);
//      Serial.print(M6);

      /////////////////////////////////////////////////////////////////

        
    
    /////////////////////////
 
