
int min1 = 23; //aktifkan motor1 port 1
int min2 = 25; //aktifkan motor1 port 2
int men1=27; //port 3 enable  motor
int men2=29;//port 4 enable motor
int pwminput=3; //pwm input

void setup(){ 
    pinMode(min1, OUTPUT);   
    pinMode(min2, OUTPUT);
    pinMode(men1, OUTPUT);   
    pinMode(men2, OUTPUT);
    pinMode(pwminput, OUTPUT);   

} 

void loop (){
  int value;
  for(value = 0 ; value <= 255; value+=5){
    digitalWrite(min1,HIGH);   
    digitalWrite(min2, LOW);
    digitalWrite(men1,HIGH);   
    digitalWrite(men2, HIGH);
    analogWrite(pwminput,value);   
    delay(500);
  }   
}


