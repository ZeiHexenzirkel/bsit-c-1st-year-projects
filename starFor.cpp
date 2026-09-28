#include <iostream>
using namespace std;

int main(){

int lines = 5;

for (int a = 1; a <= lines; a++ ){
    for (int b = 1; b <= lines - a; b++){
        cout << " ";
    }
    for (int c = 1; c <= a; c++){
        cout << "*";
}
    cout<< endl;
}
}
