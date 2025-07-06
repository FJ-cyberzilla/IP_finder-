IP_finder

📒 A command-line IP geolocation tracker that fetches detailed information about any IP address or domain with animated terminal output.

✅ Features

1️⃣ **Real-time IP Geolocation**: Get detailed location data for any IP address or domain
2️⃣ **Comprehensive Data**: Displays IP, country, city, latitude, longitude, ISP, and proxy detection
3️⃣ **Google Maps Integration**: Automatic generation of Google Maps links for visual location reference
4️⃣ **Animated Terminal Output**: Vintage-style typewriter effect with colored terminal output
5️⃣ **Proxy Detection**: Identifies if the IP is behind a proxy server
6️⃣ **JSON Data Processing**: Uses jq for clean JSON parsing and display
7️⃣ **Cross-platform**: Works on Linux, Termux ,macOS, and Windows (with WSL)

ℹ️ Installation

--- Prerequisites ---

Before installing, make sure you have the following dependencies:

```bash
# On Ubuntu/Debian
sudo apt update
sudo apt install curl jq g++ make

# On macOS (using Homebrew)
brew install curl jq

# On CentOS/RHEL
sudo yum install curl jq gcc-c++
```

### Building from Source

1. Clone or download the source code
2. Navigate to the project directory
3. Compile the program:

```bash
g++ -o ip_tracker ip_tracker.cpp
```
---------------------------------------
### Usage

Run the program and enter an IP address or domain when prompted:

```bash
./ip_tracker
```
---------------------------------------
### Example : 

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
---------------------------------------

ℹ️ API Information

This tool uses the IP2Location.io API for geolocation data. The current API key is included for demonstration purposes but may have rate limits.

---------------------------------------
## Technical Details

- **Language**: C++
- **Dependencies**: curl, jq
- **API**: IP2Location.io
- **Output Format**: JSON with terminal formatting
---------------------------------------

## Contributing

Feel free to submit issues and pull requests to improve this tool.

king.aka.tyrant@gmail.com
F.J™ Cybertronic Systems® 
---------------------------------------
## Disclaimer

This tool is for educational and legitimate network administration purposes only. Please respect privacy and use responsibly.

---------------------------------------
Thanks for your consideration 
MMXXV - Summer 
