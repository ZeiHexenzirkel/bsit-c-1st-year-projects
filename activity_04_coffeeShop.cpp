#include <iostream>

int main(){
std::cout << ("+ ________________________________________________+") << std::endl;
std::cout << ("|                Cyber Brews Coffee               |") << std::endl;
std::cout << ("|                                                 |") << std::endl;
std::cout << ("|     By: Llanos, Daves Ezekiel F. (BSIT 1B)      |") << std::endl;
std::cout << ("+ ________________________________________________+") << std::endl;

char cupSize;
int quantity;
double pricePerCup;
double cashTendered;
double change;
double totalCost;


std::cout << " Enter the cupsize (S,M,L): ";
std::cin >> cupSize;
std::cout << "Enter cup quantity: ";
std::cin >> quantity;
std::cout << "Enter cash tendered: " << "$" ;
std::cin >> cashTendered;

if (cupSize == 'S') {
       pricePerCup = 85.50;
     }
else if (cupSize == 'M') {
       pricePerCup = 110.75;
    }
else if (cupSize == 'L') {
       pricePerCup = 145.00;
} else {
std::cout << "Error: You have inserted the wrong cup size." << std::endl;
       pricePerCup = 0.0;
}
std::cout << " " << std::endl;
std::cout << "+___________________________________+" << std::endl;
std::cout << "|                                   | " << std::endl;
std::cout << "|        *Customers Receipt*        |" << std::endl;

totalCost = pricePerCup * quantity;


 std::cout << "|Price per cup:         " << pricePerCup << "$       |" <<std::endl;
 std::cout << "|Total cost:              " << totalCost << "$       |" << std::endl;

 if (cashTendered >= totalCost) {
         change = cashTendered - totalCost;

std::cout << "|    Your change is:          " << change << "$  |" << std::endl;
std::cout << "|                                  |" << std::endl;
std::cout << "|  Transaction success! thank you! |" << std::endl;
std::cout << "+__________________________________+" << std::endl;
}
else {
        change = totalCost - cashTendered;
std::cout << "|Not enough money.                 |" << std::endl;
std::cout << "|         You are short by:   " << change << "$  |" << std::endl;
std::cout << "+___________________________________+" << std::endl;
}
 }
