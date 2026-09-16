#include <iostream>

int main() {
std::cout << " _______________________________________" << std::endl;
std::cout << "|                                       |" << std::endl;
std::cout << "|     Name: Llanos, Daves Ezekiel F.    | " << std::endl;
std::cout << "|     Program: BSIT 1B                  |" << std::endl;
std::cout << "|_______________________________________|" << std::endl;
std::cout << "\n";

   int choice = 1;
   std::cout << " ______________________________________" << std::endl;
  std::cout << "                --MENU--                 " << std::endl;
  std::cout << "       1. Anteiku coffee" << std::endl;
  std::cout << "       2. Royal milk tea" << std::endl;
  std::cout << "       3. Mochi" << std::endl;

    do{

    std::cout << " ______________________________________" << std::endl;
    std::cout << " \n" << std::endl;
    std::cout << "Enter your preference: ";
    std::cin>>choice;


    switch(choice){

    case 1:
    std::cout << "Dispensing coffee..." <<std::endl;
        break;

    case 2:
    std::cout << "Dispensing tea..." <<std::endl;
        break;

     case 3:
    std::cout << "Dispensing pastry..." <<std::endl;
        break;

    case 4:
    std::cout << "Exiting Program, Bye!" <<std::endl;
        break;

    default:
         std::cout<<"Wrong input. Please try again! \n";
    }
    }while (choice != 4);

    }
