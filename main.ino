#define SALA_R 5
#define SALA_G 18
#define SALA_B 19

#define QUARTO_R 0
#define QUARTO_G 4
#define QUARTO_B 16

#define ESCRITORIO_R 13
#define ESCRITORIO_G 12
#define ESCRITORIO_B 14

#define JARDIM_R 26
#define JARDIM_G 25
#define JARDIM_B 33

int ledSelecionado = 0;

void setup() {
  pinMode(SALA_R, OUTPUT);
  pinMode(SALA_G, OUTPUT);
  pinMode(SALA_B, OUTPUT);

  pinMode(QUARTO_R, OUTPUT);
  pinMode(QUARTO_G, OUTPUT);
  pinMode(QUARTO_B, OUTPUT);

  pinMode(ESCRITORIO_R, OUTPUT);
  pinMode(ESCRITORIO_G, OUTPUT);
  pinMode(ESCRITORIO_B, OUTPUT);

  pinMode(JARDIM_R, OUTPUT);
  pinMode(JARDIM_G, OUTPUT);
  pinMode(JARDIM_B, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  Serial.println("Escolha o Cômodo:");
  Serial.println("1 para Sala");
  Serial.println("2 para Quarto");
  Serial.println("3 para Escritorio");
  Serial.println("4 para Jardim");

  while (Serial.available() == 0) {
    // Aguarda a entrada do usuário
  }

  int escolhaLed = Serial.parseInt();

  if (escolhaLed >= 1 && escolhaLed <= 4) {
    ledSelecionado = escolhaLed;
    controlaLED();
  } else {
    Serial.println("Opção de LED inválida.");
  }

  delay(500);  // Ajuste conforme necessário
}

void controlaLED() {
  while (true) {
    Serial.println("Digite uma das opções:");
    Serial.println("1 para Ligar");
    Serial.println("2 para Desligar");
    Serial.println("3 para Vermelho");
    Serial.println("4 para Verde");
    Serial.println("5 para Azul");
    Serial.println("6 para Roxo");
    Serial.println("7 para Mudar LED");

    while (Serial.available() == 0) {
      // Aguarda a entrada do usuário
    }

    int escolha = Serial.parseInt();

    switch (escolha) {
      case 1:
        Ligar();
        break;
      case 2:
        Desligar();
        break;
      case 3:
        Vermelho();
        break;
      case 4:
        Verde();
        break;
      case 5:
        Azul();
        break;
      case 6:
        Roxo();
        break;
      case 7:
        return; // Retorna para a seleção de LEDs
      default:
        Serial.println("Opção inválida.");
        break;
    }
  }
}

// Funções para controle de cores e ações para cada LED

void Ligar(){
  defineCor(0, 0, 0);
}

void Desligar(){
  defineCor(255, 255, 255);
}

void Vermelho() {
  defineCor(0, 255, 255);
  Serial.println("Cor selecionada: Vermelho");
}

void Verde() {
  defineCor(255, 0, 255);
  Serial.println("Cor selecionada: Verde");
}

void Azul() {
  defineCor(255, 255, 0);
  Serial.println("Cor selecionada: Azul");
}

void Roxo() {
  defineCor(0, 255, 0);  // Roxo
  Serial.println("Cor selecionada: Roxo");
}

void defineCor(int red, int green, int blue) {
  int pinRed, pinGreen, pinBlue;

  switch (ledSelecionado) {
    case 1:
      pinRed = SALA_R;
      pinGreen = SALA_G;
      pinBlue = SALA_B;
      break;
    case 2:
      pinRed = QUARTO_R;
      pinGreen = QUARTO_G;
      pinBlue = QUARTO_B;
      break;
    case 3:
      pinRed = ESCRITORIO_R;
      pinGreen = ESCRITORIO_G;
      pinBlue = ESCRITORIO_B;
      break;
    case 4:
      pinRed = JARDIM_R;
      pinGreen = JARDIM_G;
      pinBlue = JARDIM_B;
      break;
    default:
      Serial.println("LED inválido");
      return;
  }

  analogWrite(pinRed, red);
  analogWrite(pinGreen, green);
  analogWrite(pinBlue, blue);
}
