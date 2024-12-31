#include <iostream>
using namespace std;

void incrementerParAdresse(int* val){
    (*val)++;
}
void permuterParAdresse(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void incrementerParReference(int& val){
    val++;
}
void permuterParReference(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
int main() {
    int x = 5, y = 10;

    cout << "Avant incrémentation par adresse: x = " << x << endl;
    incrementerParAdresse(&x);
    cout << "Après incrémentation par adresse: x = " << x << endl;

    cout << "Avant permutation par adresse: x = " << x << ", y = " << y << endl;
    permuterParAdresse(&x, &y);
    cout << "Après permutation par adresse: x = " << x << ", y = " << y << endl;

    int a = 20, b = 30;

    cout << "Avant incrémentation par référence: a = " << a << endl;
    incrementerParReference(a);
    cout << "Après incrémentation par référence: a = " << a << endl;

    cout << "Avant permutation par référence: a = " << a << ", b = " << b << endl;
    permuterParReference(a, b);
    cout << "Après permutation par référence: a = " << a << ", b = " << b << endl;

    return 0;
}
