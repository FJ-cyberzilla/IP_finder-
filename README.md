# 🛰️ IP_finder

📒 A sleek command-line IP geolocation tracker that fetches detailed info about any IP address or domain — with stylish, animated terminal output that *feels alive*.

---

## ✅ Features

1️⃣ **Real-Time IP Geolocation**  
Get fast, accurate location data for any IP address or domain.

2️⃣ **Rich Data Output**  
Displays:
- IP Address  
- Country, City  
- Latitude & Longitude  
- ISP  
- Proxy Detection  

3️⃣ **🗺️ Google Maps Integration**  
Automatically generates clickable Google Maps links for precise location reference.

4️⃣ **⚡ Animated Terminal Output**  
Vintage typewriter-style animation with sexy color-coded output.

5️⃣ **🕵️ Proxy Detection**  
Identifies whether the IP is behind a proxy or VPN.

6️⃣ **💡 JSON Parsing with `jq`**  
Clean, elegant terminal output via JSON formatting.

7️⃣ **🔁 Cross-Platform**  
Runs smoothly on:
- Linux  
- Termux (Android)  
- macOS  
- Windows (via WSL)

---

## 🛠️ Installation

### 🔧 Prerequisites

Install required dependencies first:

```bash
# Ubuntu/Debian
sudo apt update && sudo apt install curl jq g++ make

# macOS (Homebrew)
brew install curl jq

# CentOS/RHEL
sudo yum install curl jq gcc-c++


git clone https://github.com/farzanjames007/IP_finder-.git
cd IP_finder-
g++ -o ip_tracker ip_tracker.cpp

Enter IP or domain to track: 8.8.8.8
🎯 Data fetched successfully!

"8.8.8.8"
"United States"
"Mountain View"
37.4056
-122.0775
"Google LLC"
false

🗺️ Google Maps: https://www.google.com/maps?q=37.4056,-122.0775


Powered by the IP2Location.io API.
The demo API key is included for trial purposes — please consider getting your own for full access.


---

🧬 Technical Specs

Property	Value

Language	C++
Dependencies	curl, jq
API	IP2Location.io
Output	JSON (terminal-formatted)



---

🤝 Contributing

Suggestions? Improvements? Pull requests are welcome, babe.
Let’s build this tracker into something unstoppable.

📧 king.aka.tyrant@gmail.com
🌌 F.J™ Cybertronic Systems®


---

⚠️ Disclaimer

This tool is intended for educational and legitimate network diagnostics only.
Respect privacy. Use responsibly. Abuse gets no second chances.


---

> 🎖️ Thank you for your attention.
MMXXV – Summer Edition




