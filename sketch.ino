#include <Arduino.h>

// Definindo a velocidade de comunicação serial (baud rate)
#define BAUD_RATE 115200

// Definindo o pino RX
#define RX_PIN 16

// Função para inicializar a comunicação serial
void setupSerial() {
  Serial.begin(BAUD_RATE);
}

// Função para inicializar a comunicação UART
void setupUART() {
  Serial1.begin(BAUD_RATE, SERIAL_8N1, RX_PIN, -1);
}

// Função para ler os dados da UART e enviar para o log
void readUART() {
  while (Serial1.available() > 0) {
    char receivedChar = Serial1.read();
    Serial.print(receivedChar);
  }
}

void setup() {
  // Inicializa a comunicação serial
  setupSerial();
  
  // Inicializa a comunicação UART
  setupUART();
}

void loop() {
  // Lê os dados da UART e envia para o log
  readUART();
}
