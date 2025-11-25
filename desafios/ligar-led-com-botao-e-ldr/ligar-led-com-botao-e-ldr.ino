int led = 12; // define a porta do led
int sensor = A2; // define a porta do sensor
int leitura = 0; // variável de leitura
int botao = 8; // define a porta do botão

void setup(){
    pinMode(led, OUTPUT); // dfine led como SAÍDA
    pinMode(botao, INPUT_PULLUP); 
    pinMode(sensor, INPUT); // dfine sensor como ENTRADA
    Serial.begin(9600); //comunicação serial para Monitor Serial
}

void loop(){
    leitura = analogRead(sensor); // coloca a leitura do sensor em uma variável
    Serial.print ("Leitura atual do sensor: "); // faz um print na tela da mensagem
    Serial.printIn(leitura); // faz um print na tela do valor
    delay(130); // espera de 130 milissegundos

    if (leitura < 500  || digitalWrite(botao) == LOW){ // condicional para caso a leitura seja menor que 500 ou botão acionado
        digitalWrite(led, HIGH); //ligar o led caso seja verdadeiro
    } else {
        digitalWrite(led, LOW); // apagar o led caso seja falsa
    }
}