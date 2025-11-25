#define BUZZER 12; // define o porta do BUZZER

void setup(){
    pinMode(BUZZER, OUTPUT); // define o BUZZER como SAÍDA
}

void loop(){
    tone(BUZZER, 261); // aciona o BUZZER na frequencia relativa ao Dó em Hz
    delay(200); // espera de 200 milisegundos
    noTone(BUZZER); // desativa o BUZZER
    tone(BUZZER, 293); // aciona o BUZZER na frequencia relativa ao Ré em Hz
    delay(200); // espera de 200 milisegundos
    noTone(BUZZER); // desativa o BUZZER
    tone(BUZZER, 329); // aciona o BUZZER na frequencia relativa ao Mi em Hz
    delay(200); // espera de 200 milisegundos
    noTone(BUZZER); // desativa o BUZZER
    tone(BUZZER, 349); // aciona o BUZZER na frequencia relativa ao Fá em Hz
    delay(200); // espera de 200 milisegundos
    noTone(BUZZER); // desativa o BUZZER
    tone(BUZZER, 392); // aciona o BUZZER na frequencia relativa ao Sol em Hz
    delay(200); // espera de 200 milisegundos
    noTone(BUZZER); // desativa o BUZZER
}