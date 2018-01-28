/*
Adafruit Arduino - Lesson 13. DC Motor
*/

int motorPin2 = 10;//pins
int motorPin = 9;
 int sensor;
 int apa;
void setup() 
{ 
  pinMode(11,INPUT);//pins
  pinMode(motorPin, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  delay(5111);//delay fÃ¶r att stÃ¤nga lÃ¥dan
  Serial.begin(9600);
} 
 
 
void loop(){
 int i; 
 int sensor=digitalRead(11);
 Serial.print("Sensor: "); Serial.println(sensor);
 if(sensor == 1){    //om den Ã¤r pÃ¥ linjen kÃ¶r den rakt fram
      analogWrite(motorPin,100);
      analogWrite(motorPin2,100);
    }
  else{
    litenSvang();
        

   
        

  }
} 

void storSvang(){//om liten svÃ¤ng inte fungerar
  int i;
  
        
        for(i=1;i<2700;i++){
          sensor=digitalRead(11);
          analogWrite(motorPin,0);
          analogWrite(motorPin2,140);
          delay(1);
          if(sensor==1){
            break;
          }
        }
        for(i=1;i<5500;i++){
          sensor=digitalRead(11);
          analogWrite(motorPin,150);
          analogWrite(motorPin2,0);
          delay(1);
          if(sensor==1){
            break;
          }
        }
        for(i=1;i<5500;i++){
          sensor=digitalRead(11);
          analogWrite(motorPin,100);
          analogWrite(motorPin2,100);
          delay(1);
          if(sensor==1){
            break;
          }
        }
        for(i=1;i<1350;i++){
          sensor=digitalRead(11);
          analogWrite(motorPin,0);
          analogWrite(motorPin2,140);
          delay(1);
          if(sensor==1){
            break;
          }
        }
        for(i=1;i<2250;i++){
          sensor=digitalRead(11);
          analogWrite(motorPin,150);
          analogWrite(motorPin2,0);
          delay(1);
          if(sensor==1){
            break;
          }
        
}
}
void litenSvang(){
  if(apa==1){
    storSvang();
  }
  apa=0;
   for(int i=1;i<75;i++){
     sensor=digitalRead(11);
          analogWrite(motorPin,255);
          analogWrite(motorPin2,51);
          delay(1);
          if(sensor==1){
            int apa=1;
            break;
          }
        }
        for(int i=1;i<151;i++){
          sensor=digitalRead(11);
          analogWrite(motorPin,51);
          analogWrite(motorPin2,255);
          delay(1);
          if(sensor==1){
            int apa=1;
            break;
          }
        }
        
}


