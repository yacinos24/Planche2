#include <iostream>
using namespace std;

bool egalParValeur(int a, int b) {
    return a==b;
}

bool egalParAdresse(const int* a, const int* b) {
    return *a==*b;
}

bool egalParReference(const int& a, const int& b) {
    return a==b;
}

int main() {
    int x=5,y=5,z=10;

    cout<<"Égalité par valeur (x, y): "<<(egalParValeur(x, y)?"Égal":"Différent")<<endl;
    cout<<"Égalité par valeur (x, z): "<<(egalParValeur(x, z)?"Égal":"Différent")<<endl;

    cout<<"Égalité par adresse (x, y): "<<(egalParAdresse(&x, &y)?"Égal":"Différent")<<endl;
    cout<<"Égalité par adresse (x, z): "<<(egalParAdresse(&x, &z)?"Égal":"Différent")<<endl;

    cout<<"Égalité par référence (x, y): "<<(egalParReference(x, y)?"Égal":"Différent")<<endl;
    cout<<"Égalité par référence (x, z): "<<(egalParReference(x, z)?"Égal":"Différent")<<endl;

    return 0;
}
