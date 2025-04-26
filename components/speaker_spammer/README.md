# 🔊 speaker_spammer

This module generates **audio interference** using the M5Stack Cardputer's onboard speaker.

## 💥 Purpose

Disrupt nearby devices using audible chirps and tones:

- Interrupts Bluetooth music/audio on phones and earbuds
- Annoys or alerts nearby users
- Functions as a "sound-based deauth"

## 📂 Files

- `speaker_spammer.c`: Contains tone generation logic and frequency patterns
- `speaker_spammer.h`: Header for external function calls

## 🔉 Sounds

Includes patterns like:

- High-frequency sine chirps  
- Intermittent beeps  
- Repeating tones (configurable)

You can add more tone styles and sequences in `speaker_spammer.c`.

---

## ✅ Status

✅ Basic beep/chirp engine is integrated  
🎵 Additional patterns and tempo control planned

## 📚 References

- ESP-IDF DAC and PWM output  
- M5Stack speaker docs and waveform demos
