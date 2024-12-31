#include <iostream>
#include <random>
using namespace std;
random_device rd;
mt19937 gen(rd());
double generateRandomDouble(double min, double max) {
    uniform_real_distribution<> dis(min, max);
    return dis(gen);
}
int generateRandomInt(int min, int max) {
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}
int main() {
    cout<<"G�n�ration de 5 r�els al�atoires dans l'intervalle [1.0, 10.0]:"<<endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Random number " << i+1 << ": " << generateRandomDouble(1.0, 100.0) << endl;
    }
    cout<<"\nG�n�ration de 5 entiers al�atoires dans l'intervalle [1, 100]:"<<endl;
    for (int i = 0; i < 5; ++i) {
        cout<<generateRandomInt(1, 100)<<endl;
    }

    return 0;
}

