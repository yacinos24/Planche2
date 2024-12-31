#include <iostream>
using namespace std;

int main() {
    //Entier
    int* intPtr = nullptr;
    intPtr = new int(42);
    cout << "Valeur de l'entier : " << *intPtr << endl;
    cout << "Adresse de l'entier : " << intPtr << endl;
    delete intPtr;

    //Reel
    float* floatPtr = nullptr;
    floatPtr=new float(1.12);
    cout << "Valeur du reel : " << *floatPtr << endl;
    cout << "Adresse du reel : " << floatPtr << endl;
    delete floatPtr;
    return 0;
}
