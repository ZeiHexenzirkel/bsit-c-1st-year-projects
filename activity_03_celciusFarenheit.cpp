#include <iostream>

int main() {
// About me :]
std::cout << "+------------------------------------+"<< std::endl;
std::cout << "|Name: Llanos, Daves Ezekiel F.      |"<< std::endl;
std::cout << "|Program: BSIT 1B                    |"<< std::endl;
std::cout << "|Fun Fact: I romanticize walking     |"<< std::endl;
std::cout << "|          alone at night            |"<< std::endl;
std::cout << "+------------------------------------+"<< std::endl;

            double celsius = 0.0;
            double fahrenheit = 0.0;

std::cout <<" Enter the temperature in celsius gng: ";
std::string line;
std::cin >> celsius;

     fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

std::cout << "Initializing conversion...\n";
std::cout << "Holy shi! The temperature in Fahrenheit is: " << fahrenheit << "\n\n";

if (fahrenheit >= 85.0) {
std::cout << "Weather temperature alert: It is hot outside! Stay inside and hydrated!! \n";
} else {
 std::cout << "Weather temperature alert: The weather is cold! Enjoy your day :)\n";
}

}