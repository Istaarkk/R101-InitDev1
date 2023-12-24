#include <iostream>

int main() {
    int n;
    std::cout << "Entrez un entier strictement positif : ";
    std::cin >> n;

    // Afficher les diviseurs de n
    std::cout << "Les diviseurs de " << n << " sont : ";
    for (int i = 2; i <= n - 1; ++i) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }

    // Compter les diviseurs
    int count = 0;
    for (int i = 2; i <= n - 1; ++i) {
        if (n % i == 0) {
            count++;
        }
    }
    std::cout << "\nLe nombre de diviseurs de " << n << " est : " << count << std::endl;

    return 0;
}
