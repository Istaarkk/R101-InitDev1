#include <iostream>
#include <vector>
#include "Facebook.h"

using namespace std;


int main() {
    int NBMEMBRES = 5;
    vector<vector<bool>> reseau;

    initialisation(reseau, NBMEMBRES);

    cout << "Réseau social initial : " << endl;
    affichage(reseau);

    ajoutAmis(reseau, 0, 1);
    ajoutAmis(reseau, 0, 2);
    ajoutAmis(reseau, 0, 3);
    ajoutAmis(reseau, 1, 2);
    ajoutAmis(reseau, 1, 3);

    cout << "Réseau social après ajout d'amis : " << endl;
    affichage(reseau);

    int amisCommuns = nombreAmisCommuns(reseau, 0, 1);
    cout << "Nombre d'amis communs entre 0 et 1 : " << amisCommuns << endl;

    bool groupeAmisResult = groupeAmis(reseau, 0, 1, 2);
    cout << "Est-ce que 0, 1 et 2 forment un groupe d'amis ? " << (groupeAmisResult ? "Oui" : "Non") << endl;

    vector<int> ensembleUtilisateurs = {0, 1, 2, 3, 4};
    bool grandGroupeResult = grandGroupeAmis(reseau, ensembleUtilisateurs);
    cout << "Le grand groupe d'utilisateurs est ami entre eux : " << (grandGroupeResult ? "Oui" : "Non") << endl;

    return 0;
}

cas général:
    abstrait : ensemble de valeurs
    valeurs d'essai de l'ensemble : {0, 1, 2, 3, 4}
    résultat attendu : L'ensemble devrait contenir des informations d'amitié entre les utilisateurs.
    résultat obtenu : L'ensemble reseau est correctement initialisé et affiché cet à dire a 0.

cas limite:
    abstrait : nombre d'amis communs
    valeurs d'essai de l'ensemble : {0, 1, 2, 3, 4}
    résultat attendu : Tous les nombres d'amis communs devraient être de 0, car il n'y a pas d'amitiés initiales.
    résultat obtenu : Tous les nombres d'amis communs sont égaux à 0.

cas particulier:
    abstrait : groupe d'amis
    valeurs d'essai de l'ensemble : (0, 1, 2)
    résultat attendu : Les utilisateurs 0, 1 et 2 forment un groupe d'amis car ils sont amis entre eux.
    résultat obtenu : Le groupeAmis renvoie true pour (0, 1, 2).

cas particulier:
    abstrait : grand groupe d'amis
    valeurs d'essai de l'ensemble : {0, 1, 2, 3, 4}
    résultat attendu : Tous les utilisateurs devraient être amis entre eux car il y a des amitiés dans le réseau.
    résultat obtenu : Le grandGroupeAmis renvoie true pour {0, 1, 2, 3, 4}.

*/
