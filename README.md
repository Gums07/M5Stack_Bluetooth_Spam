# M5Stack_Bluetooth_Spam 🚨📡🔊

A custom ESP-IDF firmware for the **M5Stack Cardputer (ESP32-S3)** that performs:

- 📱 **Bluetooth spam attacks** (iOS, Android, PC HID crash attempts)
- 🔊 **Speaker-based audio deauthentication** (beeps/chirps to disrupt music streams)

---

## 📦 Features

- iOS 17+ BLE crash attempts  
- Android BLE pairing pop-up spam  
- HID mouse/keyboard spoofing (optional)  
- Audio chirps & aggressive beeps via onboard speaker  
- Built with `ESP-IDF 5.4.1` for maximum control

---

## 🧠 Architecture

M5Stack_Bluetooth_Spam/ ├── components/ │ ├── ble_spammer/ # Handles BLE spam logic │ └── speaker_spammer/ # Generates audio-based interference ├── main/ # Main firmware loop ├── .vscode/ # VS Code project settings ├── .devcontainer/ # Dev container setup (optional) ├── CMakeLists.txt └── README.md

yaml
Copy
Edit

---

## ⚙️ Build Instructions

> Requires [ESP-IDF 5.4.1](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html)

```bash
cd M5Stack_Bluetooth_Spam
idf.py set-target esp32s3
idf.py build
idf.py -p [PORT] flash
idf.py monitor
Or: build .bin → drop to SD card → flash via M5 Launcher

🚧 Status
✅ First BLE spam + audio chirp payloads are integrated
🛠️ More payloads (e.g. HID, randomizer, target-specific spam) are coming

📸 Screenshots & Demo (optional)
Upload short GIFs or screenshots of the M5Stack doing its thing.

🤝 Credits
Created by Gums07
Inspired by BLE spam tools for Flipper Zero, Android-Crasher, and iOS Lockup.

🛡️ Disclaimer
This project is for educational and authorized testing purposes only.
Do not deploy in unauthorized or public networks.
Respect local laws.