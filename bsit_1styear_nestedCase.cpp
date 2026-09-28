#include <iostream>
using namespace std;

int main(){

    int choice;
    int price = 0;
    int drink;
    int snack;
    int quantity = 0;

cout << "Welcome to Zei's Cafe\n\n";

cout << "1. Drinks\n";
cout << "2. Snacks\n";
cout << "3. Exit\n";
cout << "Enter your choice: ";
cin >>choice;

switch(choice){
case 1:
    cout<< "\n\nDrinks Menu\n\n";
    cout<< "1. Dango Milk - 80$\n";
    cout<< "2. Coffee - 50$\n";
    cout<< "3. Water - 10$\n";
    cout<< "Enter you drink choice: ";
    cin >> drink;

    cout << "\nYou choose: ";
    switch (drink){
    case 1:
        cout << "Dango Milk";
        price = 80;
        break;
    case 2:
        cout << "Coffee" << endl;
        price = 50;
        break;
    case 3:
        cout << "Water";
        price = 10;
        break;

    default:
        cout << "Wrong selection! Try again.";
        break;

    }

    break;

case 2:
    cout<< "\n\nSnacks Menu\n\n";
    cout<< "1. Priniritong gummy bears - 50$\n";
    cout<< "2. Sinabawang paniki - 30$\n";
    cout<< "3. Pag pag - 10$\n";
    cout<< "Enter you snack choice: ";
    cin >> snack;

    cout << "\nYou choose: ";

    switch(snack){
    case 1:
        cout << "Priniritong gummy bears";
        price = 50;
        break;
    case 2:
        cout << "Sinabawang paniki" << endl;
        price = 30;
        break;
    case 3:
        cout << "Pag pag";
        price = 10;
        break;
    default:
        cout << "\nWrong choice...";
        return 0;
    }
    break;
case 3:
    cout << "Exiting the program....";
    return 0;

default:
    cout << "Wrong option! try again... PLEASEEEE??"<< endl;
    return 0;
}

    cout << "\nHow many do you want? ";
    cin>> quantity;
    if (quantity <= 0){
        cout << "Invalid quantity";
    }
    cout << "So you want: "<< quantity << endl;

    cout << "Total price: "<< quantity*price <<endl;

    cout << "\n________________________________________________\n\n";
    cout << "THANK YOU FOR PURCHASING! COME AGAIN PLEASEEE...";

}
