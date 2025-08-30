# 🏠 IoT-Based Smart Home Automation System

An IoT project to enable **remote control of electrical appliances via the internet**.  
This system uses **NodeMCU (ESP8266), Blynk, Wi-Fi, and relay modules** to control and monitor devices securely.  

---

## 🚀 Features
- Control appliances remotely using **Blynk app**  
- Custom **web server** for device monitoring  
- Secure relay control for high-power appliances  
- Optimized for **energy efficiency**  
- Cross-platform (Mobile + Web)  

---

## 🛠️ Tech Stack
- **Hardware:** NodeMCU ESP8266, Relays, Wi-Fi  
- **Software:** Arduino IDE, Blynk, Flask (Python server)  
- **Languages:** C++ (Arduino), Python  

---

## 📂 Project Structure
```
IoT-Smart-Home/
│── README.md
│── requirements.txt
│── main.ino   # NodeMCU firmware
│── server.py  # Python Flask server
```

---

## ⚡ Installation & Setup

### 🔌 Hardware
- NodeMCU ESP8266  
- Relay module  
- Appliances (fan, light, etc.)  

### 💻 Software
1. Install **Arduino IDE**  
2. Install ESP8266 board support from Board Manager  
3. Install **Blynk Library**  

### ▶️ Upload Code
1. Connect NodeMCU to laptop  
2. Open `main.ino` in Arduino IDE  
3. Replace `WIFI_NAME`, `WIFI_PASSWORD`, and `BLYNK_AUTH_TOKEN`  
4. Upload to NodeMCU  

---

## ▶️ Usage
- Open **Blynk App** → Control devices via buttons  
- OR run Python server:
```bash
python server.py
```

---

## 📌 Future Scope
- Add **voice control** (Google Assistant / Alexa)  
- Add **sensors** (temperature, motion, gas)  
- Build **dashboard with real-time graphs**  

---

## 👨‍💻 Author
**Anirudh Sharma**  
[LinkedIn](https://www.linkedin.com/in/anirudha-sharma) | [GitHub](https://github.com/in/Anirudh-Sharma)
