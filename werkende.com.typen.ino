#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

void setup() {
  Serial.begin(9600);
  servo1.attach(5);
  servo2.attach(2);
  servo3.attach(3);
}

void loop() {
  if (Serial.available() > 0){
    String msg = Serial.readString();

    if (msg == "rood"){ 
     servo1.write(0);  // These will make the servos move to the mapped angles
     servo2.write(50);
     servo3.write(0); //omlaag
     delay(1000);
     servo1.write(0);
     servo2.write(50);
     servo3.write(30); //pakt op
     delay(1000);
     servo1.write(0);
     servo2.write(0);
     servo3.write(30); // omhoog
     delay(1000);
     servo1.write(90);
     servo2.write(0);
     servo3.write(30);  // verplaatst
     delay(1000);
     servo1.write(90);
     servo2.write(50);
     servo3.write(30);  //omlaag
     delay(1000);
     servo1.write(90);
     servo2.write(50);
     servo3.write(0);  // laat los
     delay(1000);
     servo1.write(90);
     servo2.write(0);
     servo3.write(0); //omhoog
     delay(1000);
     servo1.write(0);
     servo2.write(0);
     servo3.write(0); //terug naar start positie
     delay(1000);
     
    }
    else if (msg == "blauw"){ 
       servo1.write(0);  // These will make the servos move to the mapped angles
       servo2.write(50);
       servo3.write(0);  //omlaag
       delay(1000);
       servo1.write(0);
       servo2.write(50);
       servo3.write(30); //pakt op
       delay(1000);
       servo1.write(0);
       servo2.write(0);
       servo3.write(30); //omhoog
       delay(1000);
       servo1.write(130);
       servo2.write(0);
       servo3.write(30); //verplaatsts
       delay(1000);
       servo1.write(130);
       servo2.write(50);
       servo3.write(30); //omlaag
       delay(1000);
       servo1.write(130);
       servo2.write(50);
       servo3.write(0);  //laat los
       delay(1000);
       servo1.write(130);
       servo2.write(0);
       servo3.write(0);  //omhoog
       delay(1000);
       servo1.write(0);
       servo2.write(0);
       servo3.write(0); //terug naar start positie

    }
    else if (msg == "groen"){
       servo1.write(0);  // These will make the servos move to the mapped angles
       servo2.write(50);
       servo3.write(0);  //omlaag
       delay(1000);
       servo1.write(0);
       servo2.write(50);
       servo3.write(30); //pakt op
       delay(1000);
       servo1.write(0);
       servo2.write(0);
       servo3.write(30); //omhoog
       delay(1000);
       servo1.write(200);
       servo2.write(0);
       servo3.write(30); //verplaatsts
       delay(1000);
       servo1.write(200);
       servo2.write(50);
       servo3.write(30); //omlaag
       delay(1000);
       servo1.write(200);
       servo2.write(50);
       servo3.write(0);  //laat los
       delay(1000);
       servo1.write(200);
       servo2.write(0);
       servo3.write(0);  //omhoog
       delay(1000);
       servo1.write(0);
       servo2.write(0);
       servo3.write(0); //terug naar start positie

      }
    }
  }


