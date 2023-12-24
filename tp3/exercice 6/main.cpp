#include <iostream>

int main() {
    int nb, count = 0;

    // Saisie de l'entier
    std::cout << "Entrez un entier positif : ";
    std::cin >> nb;

    // Traitement pour compter le nombre de chiffres
    int temp = nb;
    do {
        temp /= 10;
        count++;
    } while (temp != 0);

    // Affichage du résultat
    std::cout << "Le nombre de chiffres de " << nb << " est : " << count << std::endl;

    return 0;
}
