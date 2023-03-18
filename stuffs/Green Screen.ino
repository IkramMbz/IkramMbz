#include <TFT.h>  // bibliothèque pour écran LCD
#include <SPI.h>
#include <Keyboard.h>

// Définition des broches pour la carte Uno
#define cs   10
#define dc   9
#define rst  8

// Définition des broches de la carte
#define cs   7
#define dc   0
#define rst  1

// Définition de la couleur verte
#define green 0x07E0

// Création d'une instance de la bibliothèque TFT
TFT tft = TFT(cs, dc, rst);

void setup() {
  // dessiner des pixels verts sur l'écran LCD
  for(int i = 0; i < 500; i++) {
    for(int j = 0; j < 500; j++) {
      tft.drawPixel(i, j, green);
    }
  }
}

void loop() {
  // boucle qui vérifie si le bouton connecté à la broche 2 est enfoncé
  while (digitalRead(2) == HIGH) {
    // envoyer "ok" sur le port série
    Serial.print("ok");
  }
}
