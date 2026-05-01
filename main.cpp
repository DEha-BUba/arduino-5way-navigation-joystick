// 5 YÖNLÜ NAVIGASYON MODÜLÜ TEST KODU (DÜZELTİLMİŞ - TERS BAĞLANTI İÇİN)
// Fiziksel UP butonu -> Serial'de UP yazacak şekilde düzeltildi

#define PIN_UP    3    // Değişti: eskiden 2'ydi
#define PIN_DOWN  2    // Değişti: eskiden 3'ydi  
#define PIN_LEFT  5    // Değişti: eskiden 4'ydi
#define PIN_RIGHT 4    // Değişti: eskiden 5'ydi
#define PIN_MID   6

void setup() {
  Serial.begin(9600);
  
  pinMode(PIN_UP, INPUT_PULLUP);
  pinMode(PIN_DOWN, INPUT_PULLUP);
  pinMode(PIN_LEFT, INPUT_PULLUP);
  pinMode(PIN_RIGHT, INPUT_PULLUP);
  pinMode(PIN_MID, INPUT_PULLUP);
  
  Serial.println("=== 5 YONLU BUTON TESTI (DÜZELTILDI) ===");
  Serial.println("Artik YUKARI bastiginizda YUKARI yazmali");
  Serial.println("-----------------------------------");
}

void loop() {
  if (digitalRead(PIN_UP) == LOW) {
    Serial.println(">>> YUKARI (UP) butonuna basildi <<<");
    delay(300);
  }
  if (digitalRead(PIN_DOWN) == LOW) {
    Serial.println(">>> ASAGI (DOWN) butonuna basildi <<<");
    delay(300);
  }
  if (digitalRead(PIN_LEFT) == LOW) {
    Serial.println(">>> SOL (LEFT) butonuna basildi <<<");
    delay(300);
  }
  if (digitalRead(PIN_RIGHT) == LOW) {
    Serial.println(">>> SAG (RIGHT) butonuna basildi <<<");
    delay(300);
  }
  if (digitalRead(PIN_MID) == LOW) {
    Serial.println(">>> ORTA (MID) butonuna basildi <<<");
    delay(300);
  }
  delay(50);
}
