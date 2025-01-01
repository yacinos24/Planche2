#include <iostream>
#include <cstdlib>
#include <ctime>

void dessinerCone(int hauteur, int nbBoules) {
    int nbEtoiles = 1; // Nombre d'�toiles � dessiner sur la premi�re ligne
    int boulesRestantes = nbBoules;

    for (int i = 0; i < hauteur; ++i) {
        // Afficher les espaces pour centrer le c�ne
        for (int j = 0; j < hauteur - i - 1; ++j) {
            std::cout << " ";
        }

        // Afficher les �toiles et les boules
        for (int j = 0; j < nbEtoiles; ++j) {
            // G�n�rer un nombre al�atoire pour d�cider d'afficher une boule ou une �toile
            if (boulesRestantes > 0 && (rand() % 2) == 0) {
                std::cout << "O"; // Boule
                --boulesRestantes; // R�duire le nombre de boules restantes
            } else {
                std::cout << "*"; // �toile
            }
        }

        std::cout << std::endl; // Passer � la ligne suivante
        nbEtoiles += 2; // Augmenter le nombre d'�toiles pour la ligne suivante
    }
}

void dessinerTronc(int hauteur, int largeur) {
    int espaces = (2 * hauteur - 1 - largeur) / 2; // Calculer les espaces pour centrer le tronc

    for (int i = 0; i < hauteur; ++i) {
        // Afficher les espaces avant le tronc
        for (int j = 0; j < espaces; ++j) {
            std::cout << " ";
        }

        // Afficher le tronc
        for (int j = 0; j < largeur; ++j) {
            std::cout << "#"; // Utiliser '#' pour repr�senter le tronc
        }

        std::cout << std::endl; // Passer � la ligne suivante
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Initialiser le g�n�rateur de nombres al�atoires

    int hauteurCone, hauteurTronc, largeurTronc, nbBoules;

    // Demander � l'utilisateur d'entrer les dimensions du sapin
    std::cout << "Entrez la hauteur du c�ne: ";
    std::cin >> hauteurCone;
    std::cout << "Entrez la hauteur du tronc: ";
    std::cin >> hauteurTronc;
    std::cout << "Entrez la largeur du tronc: ";
    std::cin >> largeurTronc;
    std::cout << "Entrez le nombre de boules: ";
    std::cin >> nbBoules;

    // Dessiner le sapin
    dessinerCone(hauteurCone, nbBoules);
    dessinerTronc(hauteurTronc, largeurTronc);

    return 0;
}
