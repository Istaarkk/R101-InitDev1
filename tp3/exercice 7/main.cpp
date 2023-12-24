#include <iostream>

int main() {
    int nombre;

    // Saisie du nombre
    std::cout << "Entrez un nombre entier superieur a 2 : ";
    std::cin >> nombre;

    // Vérification si le nombre est supérieur à 2
    if (nombre <= 2) {
        std::cout << "Le nombre doit etre superieur a 2." << std::endl;
        return 1;
    }

    bool estPremier = true;

    // Vérification de la primalité
    for (int i = 2; i <= nombre / 2; ++i) {
        if (nombre % i == 0) {
            estPremier = false;
            break;
        }
    }

    // Affichage du résultat
    if (estPremier) {
        std::cout << nombre << " est un nombre premier." << std::endl;
    } else {
        std::cout << nombre << " n'est pas un nombre premier." << std::endl;
    }

    return 0;
}
