#include <iostream>

int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int nombre1, nombre2;

    // Saisie des deux nombres
    std::cout << "Entrez le premier nombre entier : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxieme nombre entier : ";
    std::cin >> nombre2;

    // Calcul du PGCD
    int resultat = pgcd(nombre1, nombre2);

    // Affichage du résultat
    std::cout << "Le PGCD de " << nombre1 << " et " << nombre2 << " est : " << resultat << std::endl;

    return 0;
}
