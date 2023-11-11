#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9, 10); // CE & CSN

void setup() {
  radio.begin();
  radio.setPALevel(RF24_PA_MAX);
  radio.setDataRate(RF24_2MPS);
  radio.setChannel(22);
  radio.stopListening();
}
void loop() {
  for(int i=16; i<38; i++){
    radio.setChannel(i);
    const char text[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    radio.write(&text, sizeof(text));
  }
}
