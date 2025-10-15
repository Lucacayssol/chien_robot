 #include <Servo.h>
Servo avant_droit;
Servo avant_gauche;
Servo arriere_droit;
Servo arriere_gauche;
int pos_final = 180;
int pos_mouv = 90;

void setup() {
  avant_droit.attach(11);
  avant_gauche.attach(5);
  arriere_droit.attach(10);
  arriere_gauche.attach(6);
}

void loop() {
  avant_droit.write(pos_mouv);
  arriere_gauche.write(pos_mouv);
  arriere_droit.write(pos_final);
  avant_gauche.write(pos_final);
  delay(1000);
  avant_droit.write(pos_final);
  arriere_gauche.write(pos_final);
  arriere_droit.write(pos_mouv);
  avant_gauche.write(pos_mouv);
  delay(1000);
}