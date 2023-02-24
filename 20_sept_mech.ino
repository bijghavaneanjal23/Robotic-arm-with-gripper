 
// edit gripper funtion to increase or decrease th angles 
// do not change any other angles in the other functions 
// make new funtions for changes in degrees 

// pins used are 3  5  6  9  10  11 of UNO


#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;


int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600); // attaches the servo on pin 9 to the servo object
 
  { 
     myservo1.attach(2);  myservo1.write(0);
     myservo2.attach(4);  myservo2.write(0);
     myservo3.attach(6);  myservo3.write(0);
     myservo4.attach(8);  myservo4.write(0);
     myservo5.attach(10);  myservo5.write(0);
     myservo6.attach(12);  myservo6.write(0);
  }
 
}




void motor6open () // the gripping motor  (angles will be adjusted of it)
{
   for (pos = 0; pos <= 60 ; pos += 1) { // goes from 0 degrees to 60 degrees
    // in steps of 1 degree
    myservo6.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                      // waits 15 ms for the servo to reach the position
  } Serial.println("motor 1");
  
  return 0;
}

void motor6close () // the gripping motor  (angles will be adjusted of it) 
{
  for (pos = 60; pos >= 0; pos -= 1) { // goes from 60 degrees to 0 degrees
    myservo6.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  Serial.println("motor 2");
  return 0;
  }

 void gripper_motor6()
{
 Serial.println("input 1 to hold and input 2 to release ");
int m;
while(Serial.available()==0){};
m=Serial.parseInt();
if (m==1){motor6open();};
if (m==2){motor6close();};
return 0;
}



void motorcontrol1()
{
 Serial.println("enter the degree ");
int m;
while(Serial.available()==0){};
m=Serial.parseInt();

 for (pos = 0; pos <= m; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
return 0;
}

void motorcontrol2()
{
 Serial.println("enter the degree ");
int m;
while(Serial.available()==0){};
m=Serial.parseInt();

 for (pos = 0; pos <= m; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
return 0;
}

void motorcontrol3()
{
 Serial.println("enter the degree ");
int m;
while(Serial.available()==0){};
m=Serial.parseInt();

 for (pos = 0; pos <= m; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
return 0;
}

void motorcontrol4()
{
 Serial.println("enter the degree ");
int m;
while(Serial.available()==0){};
m=Serial.parseInt();

 for (pos = 0; pos <= m; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
return 0;
}

 void motorcontrol5()
{
 Serial.println("enter the degree ");
int m;
while(Serial.available()==0){};
m=Serial.parseInt();

 for (pos = 0; pos <= m; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo5.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
return 0;
}


  /* void motorcontrol2()
{
 Serial.println("enter the degree");
int m;
while(Serial.available()==0){};
m=Serial.parseInt();
myservo.write(m);
return 0;
}
*/


void loop() {
int a;
Serial.println("enter the motor no : ");
while(Serial.available()==0) {};
a=Serial.parseInt();

switch(a)
{
  
  case 1 : 
  {  
    
    Serial.println("motor 1 active");     motorcontrol1();
  }
   break; 

   case 2 :   
  {  
    
    Serial.println("motor 2 active");     motorcontrol2();
  }
   break; 

   case 3 : 
  {  
    
    Serial.println("motor 3 active ");     motorcontrol3();
  }
   break; 


    case 4 : 
  {  
    
    Serial.println("motor 4 active");    motorcontrol4();
  }
   break; 


    case 5 : 
  {  
    
    Serial.println("motor 5 active");    motorcontrol5();
  }
   break; 
  
   case 6 : 
  {  
    
    Serial.println("motor 6(gripper) active ");     gripper_motor6();
  }
   break; 
  
  
} ;

Serial.println("operation completed successfully.");
 return 0;
}
