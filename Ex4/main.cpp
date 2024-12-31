#include <iostream>

using namespace std;

double addition(double a, double b) {
    return a + b;
}
double soustraction(double a, double b) {
    return a - b;
}
double multiplication(double a, double b) {
    return a * b;
}
double division(double a, double b) {
    if (b == 0) {
        cout << "Erreur : Division par zéro!" << endl;
        return 0;
    }
    return a / b;
}
int main() {
    double a, b;
    int choix;
    cout<<"=== Calculatrice ==="<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Soustraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Quitter"<<endl;
    cout<<"Choisissez une operation (1-5): ";
    int i=0;
    do {
        i++;
        cout<<"L'operation numero "<<i<<endl;
        cin>>choix;

        if (choix==5) {
            break;
        }
        cout<<"Entrez le premier nombre: ";
        cin>>a;
        cout<<"Entrez le second nombre: ";
        cin>>b;
        switch (choix) {
            case 1:
                cout<<"Resultat: "<<addition(a, b)<<endl;
                break;
            case 2:
                cout<<"Resultat: "<<soustraction(a,b)<<endl;
                break;
            case 3:
                cout<<"Resultat: "<<multiplication(a, b)<<endl;
                break;
            case 4:
                cout<<"Resultat: "<<division(a, b)<<endl;
                break;
            default:
                cout<<"Choix invalide!"<<endl;
        }

    } while(true);

    cout<<"Merci d'avoir utilisé la calculatrice!"<<endl;
    return 0;
}
