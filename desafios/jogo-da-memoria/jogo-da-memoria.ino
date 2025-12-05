// Definições das notas musicais
#define NOTE_D4 294
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_A5 880

// Pinos dos LEDs
int led1 = 2;
int led2 = 4;
int led3 = 6;
int led4 = 8;

// Pinos dos botões
int botao1 = 3;
int botao2 = 5;
int botao3 = 7;
int botao4 = 9;

// Notas correspondentes a cada botão
int nota1 = NOTE_A5;
int nota2 = NOTE_A4;
int nota3 = NOTE_G4;
int nota4 = NOTE_D4;

// Sequência (máx 100 etapas)
int sequencia[100];
int rodada = 0;
int passo = 0;
int botaoPressionado = -1;
bool perdeu = false;

int buzzer = 12;

void setup() {
    // Define os LEDs como saída
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);

    // Define os botões como estrada com resistor interno
    pinMode(botao1, INPUT_PULLUP);
    pinMode(botao2, INPUT_PULLUP);
    pinMode(botao3, INPUT_PULLUP);
    pinMode(botao4, INPUT_PULLUP);

    pinMode(buzzer, OUTPUT); // define buzzer como saída

    randomSeed(analogRead(0)); // Geração aleatória baseada em ruído
}

void loop() {
    if (perdeu) {
        rodada = 0;
        passo = 0;
        perdeu = false;
    }

    if (rodaa == 0) {
        tocarInicio();
        delay(500);
    }

    sequencia[rodada] = random(1,5); // Gera número entre 1 e 4
    rodada = rodada + 1;

    mostraSequencia();
    esperarJogada();
    delay(1000);
}

void mostrarSequencia() {
    for (int i = 0; i < rodada; i = i + 1) {
        acenderLedTocarSom(sequencia[i]);
        delay(200);
    }
}

void esperarJogada() {
    for (int i = 0; i < rodada; i = i + 1) {
        bool jogadaFeita = false;
        while (!jogadaFeita) {
            if (digitalRead(botao1) == LOW) {
                botaoPressionado = 1;
                acenderLedTocarSom(botaoPressionado);
                jogadaFeita = true;
            } else if (digitalRead(botao2) == LOW) {
                botaoPressionado = 2;
                acenderLedTocarSom(botaoPressionado);
                jogadaFeita = true;
            } else if (digitalRead(botao3) == LOW) {
                botaoPressionado = 3;
                acenderLedTocarSom(botaoPressionado);
                jogadaFeita = true;
            } else if (digitalRead(botao4) == LOW) {
                botaoPressionado = 4;
                acenderLedTocarSom(botaoPressionado);
                jogadaFeita = true;
            }
        }

        if (sequencia[passo] != botaoPressionado) {
            perdeu = true;
            gameOver();
            return;
        }

        passo = passo + 1;
    }
    passo = 0;
}

void acenderLedTocarSom(int id) {
    int led = 0;
    int nota = 0;
    if (id == 1) { led = led1; nota = nota1; }
    if (id == 2) { led = led2; nota = nota2; }
    if (id == 3) { led = led3; nota = nota3; }
    if (id == 4) { led = led4; nota = nota4; }

    tone(buzzer, nota);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    noTone(buzzer);
}

void gameOver() {
    for (int i = 1; i <= 4; i = i + 1) {
        acenderLedTocarSom(i);
        delay(100);
    }
    for (int j = 0; j < 4; j = j + 1) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        delay(100);
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        delay(100);
    }
}

void tocarInicio() {
    tone(buzzer, nota1);
    digitalWrite(led1, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led1, HIGH);
    digitalWrite(led1, HIGH);
    noTone(buzzer);
    delay(500);
}