Explicare schema si cod Arduino

Project 2 Versiunea 1

In acest cod se creste pe rand fiecare canal de culoare si se scade pe rand celelalte canale de culoare facand acest lucru in toate combinatiile posibile:

(R,B,G) -CRESC> MAX -SCAD> (G,B,R) (R,B,G) -CRESC> MAX -SCAD> (G,R,B)
(R,B,G) -CRESC> MAX -SCAD> (B,G,R) (R,B,G) -CRESC> MAX -SCAD> (B,R,G)  
 (R,B,G) -CRESC> MAX -SCAD> (R,B,G) (R,B,G) -CRESC> MAX -SCAD> (R,G,B)

(R,G,B) -CRESC> MAX -SCAD> (G,B,R) (R,G,B) -CRESC> MAX -SCAD> (G,R,B)
(R,G,B) -CRESC> MAX -SCAD> (B,G,R) (R,G,B) -CRESC> MAX -SCAD> (B,R,G)  
 (R,G,B) -CRESC> MAX -SCAD> (R,B,G) (R,G,B) -CRESC> MAX -SCAD> (R,G,B)

(B,G,R) -CRESC> MAX -SCAD> (G,B,R) (B,G,R) -CRESC> MAX -SCAD> (G,R,B)
(B,G,R) -CRESC> MAX -SCAD> (B,G,R) (B,G,R) -CRESC> MAX -SCAD> (B,R,G)  
 (B,G,R) -CRESC> MAX -SCAD> (R,B,G) (B,G,R) -CRESC> MAX -SCAD> (R,G,B)

(B,R,G) -CRESC> MAX -SCAD> (G,B,R) (B,R,G) -CRESC> MAX -SCAD> (G,R,B)
(B,R,G) -CRESC> MAX -SCAD> (B,G,R) (B,R,G) -CRESC> MAX -SCAD> (B,R,G)  
 (B,R,G) -CRESC> MAX -SCAD> (R,B,G) (B,R,G) -CRESC> MAX -SCAD> (R,G,B)

(G,R,B) -CRESC> MAX -SCAD> (G,B,R) (G,R,B) -CRESC> MAX -SCAD> (G,R,B)
(G,R,B) -CRESC> MAX -SCAD> (B,G,R) (G,R,B) -CRESC> MAX -SCAD> (B,R,G)  
 (G,R,B) -CRESC> MAX -SCAD> (R,B,G) (G,R,B) -CRESC> MAX -SCAD> (R,G,B)

(G,B,R) -CRESC> MAX -SCAD> (G,B,R) (G,B,R) -CRESC> MAX -SCAD> (G,R,B)
(G,B,R) -CRESC> MAX -SCAD> (B,G,R) (G,B,R) -CRESC> MAX -SCAD> (B,R,G)  
 (G,B,R) -CRESC> MAX -SCAD> (R,B,G) (G,B,R) -CRESC> MAX -SCAD> (R,G,B)

Componente necesare:
-LED RGB
-Arduino UNO
-Fire
-Rezistente 220(OHM) - pe TinkerCAD sunt necesare sau in schema daca LED-ul RGB nu este pe un modul cu rezistenta proprie
-Breadboard
