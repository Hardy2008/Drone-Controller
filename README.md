#Drone with controller.


---> Plan:

ESP32 handelt als Access Point für temporäre Fernbedienung (Handy). Gesteuert wird mithilfe einer Website, die der ESP32 als
externe Datei nutzt. Das heißt, der HTML und CSS Code ist NICHT im C++ code mit dabei, sondern in einer externen Datei.

In der Zukunft kann man die Drohne mit einer Fernbedienung kontrollieren. Dabei wird ein zweiter ESP32 genutzt und mithilfe
einer Antenne eine größere Reichweite ermöglicht.

Die Drohne wird zuerst ein MVP sein. Dafür werden billigere Teile, wie kleinere Motoren und MOSFET-Transistoren genutzt.
Falls die Drohne ein großer Erfolg wird und es besonders viel Spaß macht, dann wird die 2. Drohne deutlich teurer, aber auch
stärker, schneller und kraftvoller!
