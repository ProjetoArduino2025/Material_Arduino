int vermelho = 13; // define a porta do led vermelho
int amarelo = 8; // define a porta do led amarelo
int verde = 2; // define a porta do led verde

void setup(){
    pinMode(vermelho, OUTPUT); //define o LED como saída
    pinMode(amarelo, OUTPUT); //define o LED como saída
    pinMode(verde, OUTPUT); //define o LED como saída
}

void loop(){
    digitalWrite(verde, HIGH); // coloca a escrita do led (LIGADO)
    delay(5000);  // espera de 5000 milissegundos
    digitalWrite(verde, LOW); // coloca a escrita do led (LIGADO)
    delay(1000);  // espera de 1000 milissegundos
    digitalWrite(amarelo, HIGH); // coloca a escrita do led (LIGADO)
    delay(2000);  // espera de 2000 milissegundos
    digitalWrite(amarelo, LOW); // coloca a escrita do led (LIGADO)
    delay(1000);  // espera de 1000 milissegundos
    digitalWrite(vermelho, HIGH); // coloca a escrita do led (LIGADO)
    delay(5000);  // espera de 5000 milissegundos
    digitalWrite(vermelho, LOW); // coloca a escrita do led (LIGADO)
    delay(1000);  // espera de 1000 milissegundos
}