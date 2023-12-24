#include <iostream>

int main() {
    // Partie 1
    int max;
    std::cout << "Entrez un entier max strictement positif : ";
    std::cin >> max;

    // Afficher les entiers divisibles par 7 inférieurs à max
    std::cout << "Entiers divisibles par 7 inférieurs à " << max << ": ";
    for (int i = 7; i < max; i += 7) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Partie 2
    int min;
    do {
        std::cout << "Entrez un entier min strictement positif (min < max) : ";
        std::cin >> min;
    } while (min <= 0 || min >= max);

    // Afficher les entiers divisibles par 7 entre min et max
    std::cout << "Entiers divisibles par 7 entre " << min << " et " << max << ": ";
    int count = 0;
    for (int i = min; i <= max; ++i) {
        if (i % 7 == 0) {
            std::cout << i << " ";
            count++;
            if (count % 10 == 0) {
                std::cout << std::endl;
            }
        }
    }
    std::cout << std::endl;

    return 0;
}
