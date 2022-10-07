// C++ code 

// by Valeria Martinez

const int btnOne = 2;
const int buzzerOne = 3;

int humiditySensor = A0;

int ledArray[5] = {4,5,6,7,8};

int val = 0;




void setup(){
  
  Serial.begin(9600);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(A0, OUTPUT);
  
   for (int i = 0; i < 5; i++) {
     pinMode(ledArray[i], OUTPUT);
  }
 }
  
   /* pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
  */



void loop(){

 val = analogRead(humiditySensor); 
  Serial.println(val);   


    for (int i = 0; i < 5; i++) {
    if(true){
     digitalWrite(ledArray[4 - i], HIGH);
    }
  }
}
    
