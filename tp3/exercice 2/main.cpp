#include <iostream>

int main() {
    int n, nbl;
    char unCar;

    // Saisie d'un entier positif pour le nombre d'�toiles
    do {
        std::cout << "Combien d'etoiles ? ";
        std::cin >> n;

        // V�rification de la positivit�
        if (n <= 0) {
            std::cout << "Erreur. Veuillez saisir un nombre strictement positif." << std::endl;
        }
    } while (n <= 0);

    // Affichage d'�toiles
    for (int i = 0; i < n; ++i) {
        std::cout << "*";
    }
    std::cout << std::endl;

    // Saisie d'un entier positif pour le nombre de lignes
    do {
        std::cout << "Combien de lignes ? ";
        std::cin >> nbl;

        // V�rification de la positivit�
        if (nbl <= 0) {
            std::cout << "Erreur. Veuillez saisir un nombre strictement positif." << std::endl;
        }
    } while (nbl <= 0);

    // Affichage d'un rectangle avec le caract�re de choix
    std::cout << "Saisissez un caractere : ";
    std::cin >> unCar;

    for (int i = 0; i < nbl; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << unCar;
        }
        std::cout << std::endl;
    }

    return 0;
}
