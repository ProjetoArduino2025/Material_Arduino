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
