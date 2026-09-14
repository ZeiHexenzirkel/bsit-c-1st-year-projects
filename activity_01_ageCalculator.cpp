#include <iostream>

int main() {
    //hello sir vince :D
    std::cout << "+---------------------------------------+" << std::endl;
    std::cout << "| Name: Llanos, Daves Ezekiel F.        |" << std::endl;
    std::cout << "| Program: BSIT 1B                      |" << std::endl;
    std::cout << "| Fun Fact: I romanticize walking       |" << std::endl;
    std::cout << "|           alone at night.             |" << std::endl;
    std::cout << "+---------------------------------------+" << std::endl << std::endl;

    int currentYear, currentMonth, currentDay;
    int birthYear, birthMonth, birthDay;
    int age;


    std::cout << "Input current year: ";
    std::cin >> currentYear;
    std::cout << "Input current month (1-12): ";
    std::cin >> currentMonth;
    std::cout << "Input current day (1-31): ";
    std::cin >> currentDay;

    std::cout << std::endl;

    std::cout << "Input birth year: ";
    std::cin >> birthYear;
    std::cout << "Input birth month (1-12): ";
    std::cin >> birthMonth;
    std::cout << "Input birth day (1-31): ";
    std::cin >> birthDay;

    age = currentYear - birthYear;
    
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age = age - 1;
    }

    std::cout << "\n[Processing Data...]" << std::endl;
    std::cout << "Computed age: " << age << " years old" << std::endl;

}
    