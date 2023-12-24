#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Génération d'un nombre aléatoire entre 1 et 100
    srand(time(NULL));
    int nombreADeviner = rand() % 100 + 1;

    int tentative, essaisRestants = 10;

    std::cout << "Bienvenue dans le jeu du pendu mathematique !" << std::endl;

    do
    {
        // Saisie de la tentative
        std::cout << "Devinez le nombre (entre 1 et 100) : ";
        std::cin >> tentative;

        // Vérification et indications
        if (tentative == nombreADeviner)
        {
            std::cout << "Bravo ! Vous avez devine le nombre !" << std::endl;
            break;
        }
        else if (tentative % nombreADeviner == 0)
        {
            std::cout << "Le nombre propose est un multiple du nombre a deviner." << std::endl;
        }
        else if (nombreADeviner % tentative == 0)
        {
            std::cout << "Le nombre propose est un diviseur du nombre a deviner." << std::endl;
        }
        else
        {
            std::cout << "Le nombre propose n'a rien a voir avec le nombre a deviner." << std::endl;
        }

        // Réduction du nombre d'essais restants
        essaisRestants--;

        // Affichage du nombre d'essais restants
        std::cout << "Il vous reste " << essaisRestants << " essais." << std::endl;

    }
    while (essaisRestants > 0);

    // Affichage du nombre à deviner à la fin
    std::cout << "Le nombre a deviner etait : " << nombreADeviner << std::endl;

    return 0;
}
