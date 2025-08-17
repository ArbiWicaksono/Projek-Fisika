#define sensorPin A0  // Pin sensor kelembaban tanah
//int counter = 0;

void setup() {
    Serial.begin(9600); // Inisialisasi komunikasi serial
    pinMode(sensorPin, INPUT);
}

void loop() {
    //if  (counter<5) {
        int kelembaban = analogRead(sensorPin); // Membaca nilai sensor (0-1023)
        // Konversi ke persen (0% = kering, 100% = basah)
        int persen = map(kelembaban, 1023, 0, 0, 100);
    

    Serial.print("Kelembaban Tanah: ");
    Serial.print(persen);
    Serial.println("%");

    //counter++;
    delay(1750); // Tunggu 1750 milisekon
  } //else {
  //while (true);
  //}
//}
