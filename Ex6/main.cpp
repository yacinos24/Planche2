#include <iostream>
#include <cstdlib>
#include <ctime>

void dessinerCone(int hauteur, int nbBoules) {
    int nbEtoiles = 1; // Nombre d'étoiles à dessiner sur la première ligne
    int boulesRestantes = nbBoules;

    for (int i = 0; i < hauteur; ++i) {
        // Afficher les espaces pour centrer le cône
        for (int j = 0; j < hauteur - i - 1; ++j) {
            std::cout << " ";
        }

        // Afficher les étoiles et les boules
        for (int j = 0; j < nbEtoiles; ++j) {
            // Générer un nombre aléatoire pour décider d'afficher une boule ou une étoile
            if (boulesRestantes > 0 && (rand() % 2) == 0) {
                std::cout << "O"; // Boule
                --boulesRestantes; // Réduire le nombre de boules restantes
            } else {
                std::cout << "*"; // Étoile
            }
        }

        std::cout << std::endl; // Passer à la ligne suivante
        nbEtoiles += 2; // Augmenter le nombre d'étoiles pour la ligne suivante
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
            std::cout << "#"; // Utiliser '#' pour représenter le tronc
        }

        std::cout << std::endl; // Passer à la ligne suivante
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Initialiser le générateur de nombres aléatoires

    int hauteurCone, hauteurTronc, largeurTronc, nbBoules;

    // Demander à l'utilisateur d'entrer les dimensions du sapin
    std::cout << "Entrez la hauteur du cône: ";
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
