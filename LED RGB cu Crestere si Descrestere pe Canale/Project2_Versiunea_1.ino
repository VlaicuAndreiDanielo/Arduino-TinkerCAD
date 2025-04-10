/*
  Cod Arduino cu 72 de secvenţe (36 de combinaţii)
  Fiecare combinaţie este formată din:
    - 3 bucle for de creștere (fade in) pentru cele 3 canale, 
      conform ordinii specificate.
    - O întârziere de 1000ms.
    - 3 bucle for de descreștere (fade out) pentru cele 3 canale,
      conform ordinii specificate.
    - O întârziere de 1000ms.
    
  Exemplu: Pentru combinaţia 1 se crește R, apoi B, apoi G și se
  descrește G, apoi B, apoi R.
  
  Etapele sunt de forma:
  (R,B,G) -CRESC> MAX -SCAD> (G,B,R)  (R,B,G) -CRESC> MAX -SCAD> (G,R,B) 
  (R,B,G) -CRESC> MAX -SCAD> (B,G,R)  (R,B,G) -CRESC> MAX -SCAD> (B,R,G)  
  (R,B,G) -CRESC> MAX -SCAD> (R,B,G)  (R,B,G) -CRESC> MAX -SCAD> (R,G,B)

  (R,G,B) -CRESC> MAX -SCAD> (G,B,R)  (R,G,B) -CRESC> MAX -SCAD> (G,R,B) 
  (R,G,B) -CRESC> MAX -SCAD> (B,G,R)  (R,G,B) -CRESC> MAX -SCAD> (B,R,G)  
  (R,G,B) -CRESC> MAX -SCAD> (R,B,G)  (R,G,B) -CRESC> MAX -SCAD> (R,G,B)

  (B,G,R) -CRESC> MAX -SCAD> (G,B,R)  (B,G,R) -CRESC> MAX -SCAD> (G,R,B) 
  (B,G,R) -CRESC> MAX -SCAD> (B,G,R)  (B,G,R) -CRESC> MAX -SCAD> (B,R,G)  
  (B,G,R) -CRESC> MAX -SCAD> (R,B,G)  (B,G,R) -CRESC> MAX -SCAD> (R,G,B)

  (B,R,G) -CRESC> MAX -SCAD> (G,B,R)  (B,R,G) -CRESC> MAX -SCAD> (G,R,B) 
  (B,R,G) -CRESC> MAX -SCAD> (B,G,R)  (B,R,G) -CRESC> MAX -SCAD> (B,R,G)  
  (B,R,G) -CRESC> MAX -SCAD> (R,B,G)  (B,R,G) -CRESC> MAX -SCAD> (R,G,B)

  (G,R,B) -CRESC> MAX -SCAD> (G,B,R)  (G,R,B) -CRESC> MAX -SCAD> (G,R,B) 
  (G,R,B) -CRESC> MAX -SCAD> (B,G,R)  (G,R,B) -CRESC> MAX -SCAD> (B,R,G)  
  (G,R,B) -CRESC> MAX -SCAD> (R,B,G)  (G,R,B) -CRESC> MAX -SCAD> (R,G,B)

  (G,B,R) -CRESC> MAX -SCAD> (G,B,R)  (G,B,R) -CRESC> MAX -SCAD> (G,R,B) 
  (G,B,R) -CRESC> MAX -SCAD> (B,G,R)  (G,B,R) -CRESC> MAX -SCAD> (B,R,G)  
  (G,B,R) -CRESC> MAX -SCAD> (R,B,G)  (G,B,R) -CRESC> MAX -SCAD> (R,G,B)
*/

void setup() {
  pinMode(11, OUTPUT); // R
  pinMode(10, OUTPUT); // G
  pinMode(9, OUTPUT);  // B
  
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
}

void loop() {

  // ===========================
  // Grupul 1: Fade in: R, B, G
  // ---------------------------
  // Combinaţia 1: Fade in: R, B, G; Fade out: G, B, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 2: Fade in: R, B, G; Fade out: G, R, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ---------------------------
  // Combinaţia 3: Fade in: R, B, G; Fade out: B, G, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 4: Fade in: R, B, G; Fade out: B, R, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 5: Fade in: R, B, G; Fade out: R, B, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 6: Fade in: R, B, G; Fade out: R, G, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ===========================
  // Grupul 2: Fade in: R, G, B
  // ---------------------------
  // Combinaţia 7: Fade in: R, G, B; Fade out: G, B, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  
  // ---------------------------
  // Combinaţia 8: Fade in: R, G, B; Fade out: G, R, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ---------------------------
  // Combinaţia 9: Fade in: R, G, B; Fade out: B, G, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 10: Fade in: R, G, B; Fade out: B, R, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 11: Fade in: R, G, B; Fade out: R, B, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 12: Fade in: R, G, B; Fade out: R, G, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ===========================
  // Grupul 3: Fade in: B, G, R
  // ---------------------------
  // Combinaţia 13: Fade in: B, G, R; Fade out: G, B, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 14: Fade in: B, G, R; Fade out: G, R, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ---------------------------
  // Combinaţia 15: Fade in: B, G, R; Fade out: B, G, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 16: Fade in: B, G, R; Fade out: B, R, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 17: Fade in: B, G, R; Fade out: R, B, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 18: Fade in: B, G, R; Fade out: R, G, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ===========================
  // Grupul 4: Fade in: B, R, G
  // ---------------------------
  // Combinaţia 19: Fade in: B, R, G; Fade out: G, B, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 20: Fade in: B, R, G; Fade out: G, R, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  
  // ---------------------------
  // Combinaţia 21: Fade in: B, R, G; Fade out: B, G, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 22: Fade in: B, R, G; Fade out: B, R, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 23: Fade in: B, R, G; Fade out: R, B, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 24: Fade in: B, R, G; Fade out: R, G, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ===========================
  // Grupul 5: Fade in: G, R, B
  // ---------------------------
  // Combinaţia 25: Fade in: G, R, B; Fade out: G, B, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  
  // ---------------------------
  // Combinaţia 26: Fade in: G, R, B; Fade out: G, R, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ---------------------------
  // Combinaţia 27: Fade in: G, R, B; Fade out: B, G, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 28: Fade in: G, R, B; Fade out: B, R, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);
  
  // ---------------------------
  // Combinaţia 29: Fade in: G, R, B; Fade out: R, B, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 30: Fade in: G, R, B; Fade out: R, G, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ===========================
  // Grupul 6: Fade in: G, B, R
  // ---------------------------
  // Combinaţia 31: Fade in: G, B, R; Fade out: G, B, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 32: Fade in: G, B, R; Fade out: G, R, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);

  // ---------------------------
  // Combinaţia 33: Fade in: G, B, R; Fade out: B, G, R
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  delay(1000);

  // ---------------------------
  // Combinaţia 34: Fade in: G, B, R; Fade out: B, R, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 35: Fade in: G, B, R; Fade out: R, B, G
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  delay(1000);

  // ---------------------------
  // Combinaţia 36: Fade in: G, B, R; Fade out: R, G, B
  // ---------------------------
  for (int i = 0; i <= 255; i++) { analogWrite(10, i); delay(10); } // G
  for (int i = 0; i <= 255; i++) { analogWrite(9,  i); delay(10); } // B
  for (int i = 0; i <= 255; i++) { analogWrite(11, i); delay(10); } // R
  delay(1000);
  for (int i = 255; i >= 0; i--) { analogWrite(11, i); delay(10); } // R
  for (int i = 255; i >= 0; i--) { analogWrite(10, i); delay(10); } // G
  for (int i = 255; i >= 0; i--) { analogWrite(9,  i); delay(10); } // B
  delay(1000);
}
