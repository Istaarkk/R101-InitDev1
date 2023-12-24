#include <iostream>

int main() {
    float note, totalnote = 0, moyenne;
    int nbnotes = 0;
    char rep;

    do {
        // Saisie de la note
        std::cout << "Saisir une note (entre 0 et 20) : ";
        std::cin >> note;

        // V�rification de la validit� de la note
        while (note < 0 || note > 20) {
            std::cout << "Erreur : La note doit �tre entre 0 et 20." << std::endl;
            std::cout << "Recommencez la saisie : ";
            std::cin >> note;
        }

        // Ajout de la note � la somme totale
        totalnote += note;
        // Incr�ment du nombre de notes
        nbnotes++;

        // Demande si d'autres notes doivent �tre saisies
        std::cout << "Y a-t-il d'autres notes � saisir ? (o/n) : ";
        std::cin >> rep;

    } while (rep == 'o');

    // Calcul de la moyenne
    moyenne = totalnote / nbnotes;

    // Affichage de la moyenne
    std::cout << "La moyenne est " << moyenne << "." << std::endl;

    return 0;
}
