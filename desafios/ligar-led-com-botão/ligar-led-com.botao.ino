int botao = 8; // declara o botão na porta 8
int led = 12; // declara led na porta 12

void setup(){
    pinMode(botao, INPUT_PULLUP); // dfine o pino do botão como entrada
    pinMode(led, OUTPUT); // define o LED como saída
}

void loop(){
    if (digitalRead(botao) == LOW) { // condicional para ver se o botão está pressionado
        digitalWrite(led, HIGH); // liga o led
        delay(1000); // por 1 segundo
        digitalWrite(led, LOW); // desliga o led
        delay(1000);  // por 1 segundo
    }
}