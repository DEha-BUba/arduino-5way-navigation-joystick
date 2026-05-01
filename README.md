# Arduino 5-Yönlü Navigasyon Joystick Modülü

Bu proje, 5 yönlü navigasyon buton modülünün (UP / DOWN / LEFT / RIGHT / MID) Arduino ile test edilmesi ve stabil okunması için hazırlanmıştır.

---

## 📌 Desteklenen Modül

:contentReference[oaicite:0]{index=0}

Bu modül şu girişleri sağlar:
- UP (Yukarı)
- DOWN (Aşağı)
- LEFT (Sol)
- RIGHT (Sağ)
- MID (Orta buton)

---

## 🔌 Bağlantılar

| Modül Pin | Arduino Pin |
|------------|-------------|
| UP         | D3          |
| DOWN       | D2          |
| LEFT       | D5          |
| RIGHT      | D4          |
| MID        | D6          |

---

## 🧠 Çalışma Mantığı

Modül **aktif LOW** mantığı ile çalışır:

- Basılmadığında → HIGH
- Basıldığında → LOW

Kod, her pini sürekli okuyarak yön tespit eder.

---

## ⚙️ Özellikler

- Ters bağlantı düzeltmesi uygulanmış
- Basit debounce (300ms)
- Serial Monitor üzerinden gerçek zamanlı çıktı
- Her yön bağımsız algılanır

---

## 📤 Örnek Çıktı-

YUKARI (UP) butonuna basildi <<<
SAG (RIGHT) butonuna basildi <<<
ORTA (MID) butonuna basildi <<<

---

## 🧩 Kod Yapısı

- `PIN_UP` → Yukarı yön
- `PIN_DOWN` → Aşağı yön
- `PIN_LEFT` → Sol yön
- `PIN_RIGHT` → Sağ yön
- `PIN_MID` → Orta buton

Her pin `INPUT_PULLUP` olarak tanımlanmıştır.

---

## 🚀 Kullanım Alanları

- Menü kontrol sistemleri
- LCD arayüz navigasyonu
- Robot yön kontrolü
- ESP32/Arduino UI input sistemi
- Oyun kontrol mekanikleri

---

## 🧪 Test Mantığı

Kod sürekli olarak şu kontrolü yapar:

- Eğer pin LOW ise → buton basılmıştır
- Serial’e ilgili yön yazdırılır
- 300ms debounce uygulanır

---

## 🔧 Geliştirme Fikirleri

- LCD menü sistemi (state machine)
- ESP32 web joystick kontrol paneli
- Interrupt tabanlı input sistemi
- Uzun basma / çift tıklama algılama
- Analog joystick versiyonuna upgrade

---

## 📜 Lisans

MIT License
