#Drone with controller.

---

### Phase 1: Elektronik & Komponenten-Klarheit (Ziel: Leichtbau)

- [ ] **Gewichts-Inventur machen:** Alle Komponenten einzeln auf die Küchenwaage legen (ESP32, Motoren, Akku, Kabel)
- [ ] **Stromversorgung klären:**
  - [ ] Prüfen, wie der ESP32 mit 3.3V versorgt wird (LDO / Spannungsregler besorgen oder ausschlachten)
  - [ ] 4x leichte SMD-MOSFETs (z. B. AO3400A) oder passende Transistoren für die Motoransteuerung besorgen
- [ ] **Sensoren festlegen:** IMU / Gyro-Sensor (z. B. MPU6050) bereitlegen

---

### Phase 2: Trockentest auf dem Steckbrett (Breadboard)

- [ ] **ESP32 einrichten:** Arduino IDE für ESP32 konfigurieren und `Blink`-Sketch hochladen
- [ ] **Motor-Ansteuerung mit ESP32:** Einen Motor über den ESP32 per PWM ansteuern
- [ ] **Gyro-Sensor auslesen:** MPU6050 verbinden und Rohdaten (Neigung/Winkel) im Seriellen Monitor anzeigen
- [ ] **Code zusammenführen:** Motor-Drehzahl basierend auf der Neigung des Sensors anpassen (Basis-Regelung)

---

### Phase 3: CAD-Design & 3D-Druck (Frame)

- [ ] **Maße festlegen:** Diagonalen-Abstand von Motor zu Motor bestimmen (ca. 90–100 mm für 55mm Props)
- [ ] **Frame im CAD zeichnen:**
  - [ ] Motorhalterungen mit 8.4 mm Innendurchmesser
  - [ ] Zentrale Plattform für MPU6050 (exakt mittig!), ESP32 und Akku
  - [ ] T- oder L-Profil für die Arme (Steifigkeit bei minimalem Gewicht)
- [ ] **Frame drucken:** Sehr leicht drucken (1–2 Wände, 10–15% Infill, Zielgewicht: < 15 g)

---

### Phase 4: Zusammenbau & Verkabelung

- [ ] **Motoren montieren:** 2x CW und 2x CCW richtig herum in den Frame einsetzen
- [ ] **Verkabelung löten:** Breadboard weglassen! Dünne Kabel direkt mit ESP32, MOSFETs und Akku verlöten
- [ ] **Propeller aufstecken:** CW- und CCW-Propeller auf die passenden Motoren stecken (Beschriftung nach oben)
- [ ] **Schwerpunkt prüfen:** Akku mittig unter der Drohne befestigen und ausbalancieren

---

### Phase 5: Software & Erstflug

- [ ] **Sensorkalibrierung:** Gyro-Werte bei flach stehender Drohne auf Null setzen (Zero Calibration)
- [ ] **PID-Regler grundlegend einstellen:** Kleine Ausgleichsbewegungen testen
- [ ] **Sicherheitstest:** Drohne in der Hand halten, Gas geben und prüfen, ob sie gegen Neigungen ansteuert
- [ ] 🚁 **Erstflug wagen!**

---> Plan:

ESP32 handelt als Access Point für temporäre Fernbedienung (Handy). Gesteuert wird mithilfe einer Website, die der ESP32 als
externe Datei nutzt. Das heißt, der HTML und CSS Code ist NICHT im C++ code mit dabei, sondern in einer externen Datei.

In der Zukunft kann man die Drohne mit einer Fernbedienung kontrollieren. Dabei wird ein zweiter ESP32 genutzt und mithilfe
einer Antenne eine größere Reichweite ermöglicht.

Die Drohne wird zuerst ein MVP sein. Dafür werden billigere Teile, wie kleinere Motoren und MOSFET-Transistoren genutzt.
Falls die Drohne ein großer Erfolg wird und es besonders viel Spaß macht, dann wird die 2. Drohne deutlich teurer, aber auch
stärker, schneller und kraftvoller!
