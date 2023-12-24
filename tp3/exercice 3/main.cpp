#include <iostream>

int main() {
    float note, totalnote = 0, moyenne;
    int nbnotes = 0;
    char rep;

    do {
        // Saisie de la note
        std::cout << "Saisir une note (entre 0 et 20) : ";
        std::cin >> note;

        // Vérification de la validité de la note
        while (note < 0 || note > 20) {
            std::cout << "Erreur : La note doit être entre 0 et 20." << std::endl;
            std::cout << "Recommencez la saisie : ";
            std::cin >> note;
        }

        // Ajout de la note à la somme totale
        totalnote += note;
        // Incrément du nombre de notes
        nbnotes++;

        // Demande si d'autres notes doivent être saisies
        std::cout << "Y a-t-il d'autres notes à saisir ? (o/n) : ";
        std::cin >> rep;

    } while (rep == 'o');

    // Calcul de la moyenne
    moyenne = totalnote / nbnotes;

    // Affichage de la moyenne
    std::cout << "La moyenne est " << moyenne << "." << std::endl;

    return 0;
}
