#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("--- HW-123 (MPU-6050) Test ---");

  // I2C starten (SDA = GPIO 21, SCL = GPIO 22)
  Wire.begin(21, 22);

  // MPU-6050 initialisieren
  if (!mpu.begin(0x68, &Wire)) {
    Serial.println("FEHLER: HW-123 Modul nicht unter 0x68 gefunden!");
    Serial.println("Versuche 0x69...");
    if (!mpu.begin(0x69, &Wire)) {
      Serial.println("Kritischer Fehler: HW-123 antwortet nicht.");
      while (1) { delay(10); }
    }
  }

  Serial.println("HW-123 (MPU-6050) ERFOLGREICH VERBUNDEN!");
  
  // Einstellungen für den Sensor setzen
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Beschleunigungsdaten ausgeben
  Serial.print("Accel X: "); Serial.print(a.acceleration.x);
  Serial.print(" | Y: ");    Serial.print(a.acceleration.y);
  Serial.print(" | Z: ");    Serial.print(a.acceleration.z);
  Serial.println(" m/s^2");

  delay(500); // Alle halbe Sekunde aktualisieren
}