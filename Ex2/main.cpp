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

    cout<<"�galit� par valeur (x, y): "<<(egalParValeur(x, y)?"�gal":"Diff�rent")<<endl;
    cout<<"�galit� par valeur (x, z): "<<(egalParValeur(x, z)?"�gal":"Diff�rent")<<endl;

    cout<<"�galit� par adresse (x, y): "<<(egalParAdresse(&x, &y)?"�gal":"Diff�rent")<<endl;
    cout<<"�galit� par adresse (x, z): "<<(egalParAdresse(&x, &z)?"�gal":"Diff�rent")<<endl;

    cout<<"�galit� par r�f�rence (x, y): "<<(egalParReference(x, y)?"�gal":"Diff�rent")<<endl;
    cout<<"�galit� par r�f�rence (x, z): "<<(egalParReference(x, z)?"�gal":"Diff�rent")<<endl;

    return 0;
}
