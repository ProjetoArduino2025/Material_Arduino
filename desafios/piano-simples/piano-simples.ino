int buzzer = 13;

int botaoDo = 2; // Nota Dó (C4)
int botaoRe = 3; // Nota Ré (D4)
int botaoMi = 4; // Nota Mi (E4)
int botaoFa = 5; // Nota Fá (F4)
int botaoSol = 6; // Nota Sol (G4)
int botaoLa = 7; // Nota Lá (A4)
int botaoSi = 8; // Nota Si (B4)

void setup() {
    pinMode(buzzer, OUTPUT);

    //define o botão como saída com resistor interno
    pinMode(botaoDo, INPUT_PULLUP)
    pinMode(botaoRe, INPUT_PULLUP)
    pinMode(botaoMi, INPUT_PULLUP)
    pinMode(botaoFa, INPUT_PULLUP)
    pinMode(botaoSol, INPUT_PULLUP)
    pinMode(botaoLa, INPUT_PULLUP)
    pinMode(botaoSi, INPUT_PULLUP)
}

void loop() {
    if (digitalRead(botaoDo) == LOW) {
        tone(buzzer, 262); // Dó
    }
    else if (digitalRead(botaoRe) == LOW) {
        tone(buzzer, 294); // Ré
    }
    else if (digitalRead(botaoMi) == LOW) {
        tone(buzzer, 330); // Mi
    }
    else if (digitalRead(botaoFa) == LOW) {
        tone(buzzer, 349); // Fá
    }
    else if (digitalRead(botaoSol) == LOW) {
        tone(buzzer, 392); // Sol
    }
    else if (digitalRead(botaoLa) == LOW) {
        tone(buzzer, 440); // Lá
    }
    else if (digitalRead(botaoSi) == LOW) {
        tone(buzzer, 494); // Si
    }
    else {
        noTone(buzzer); // Nenhum botão pressionado
    }
}