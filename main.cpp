IP_tracker
#include <iostream> 
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <unistd.h>
using namespace std;                                              
void type_out(const string& text, int delay = 25000) {
    for (char c : text) {
        cout << c << flush;                                               usleep(delay);
    }
    cout << endl;
}

void display_footer() {                                               cout << "\n\033[1;32m"; // Bright green color
    string footer = "Powered by F.J™ Cybertronic Systems®";

    // Animated typing effect for the footer
    for (char c : footer) {
        cout << c << flush;
        usleep(50000); // Slower typing for dramatic effect
    }
    cout << "\033[0m" << endl; // Reset color
}

string fetch_ip_data(const string& ip) {
    string command = "curl -s \"https://api.ip2location.io/?key=555D340B34F6FC128C474931297F1B94&ip=" + ip + "\" -o response.json";
    system(command.c_str());

    ifstream file("response.json");
    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

int main() {
    string ip;
    cout << "\033[1;36m--> Enter IP or domain to track: \033[0m";
    cin >> ip;

    string json = fetch_ip_data(ip);

    if (json.find("ip") != string::npos) {
        type_out("\033[1;32m🎯 Data fetched successfully!\033[0m");
        system("cat response.json | jq '.ip, .country_name, .city_name, .latitude, .longitude, .isp, .is_proxy'");
        cout << "\033[1;36m🗺️ Google Maps: \033[0mhttps://www.google.com/maps?q=";
        system("cat response.json | jq -r '.latitude'"); cout << ",";
        system("cat response.json | jq -r '.longitude'");
    } else {
        type_out("\033[1;31m❌ Invalid IP or failed to fetch data.\033[0m");
    }

    // Display the animated footer when finished
    display_footer();

    return 0;
}
