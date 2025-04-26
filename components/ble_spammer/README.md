# 📡 ble_spammer

This module contains all logic for **Bluetooth Low Energy (BLE) spam attacks**.

## 💥 Purpose

Simulates BLE advertisements to trigger various effects on nearby devices:

- iOS 17+ BLE crash exploit attempts  
- Android pairing pop-up spam  
- Windows BLE HID spoofing (planned)

## 📂 Files

- `ble_spammer.c`: Core BLE spam logic (advertising, timing, rotation)
- `ble_spammer.h`: Header file for integration with main app

## 🔧 Customization

You can add/edit BLE payloads or rotate UUIDs in `ble_spammer.c` to change behavior.  
Payloads should follow ESP-IDF's BLE advertising format.

---

## ✅ Status

✅ Basic spam working  
🛠️ New attack vectors planned (randomized payloads, MAC spoofing, target selector)

## 📚 References

- ESP-IDF BLE advertising examples  
- BLE spam techniques from Flipper Zero & Android Crasher tools
