#include <iostream>
#include <string>
#include <vector>
#include <cctype> // Inclure l'en-t�te pour std::toupper
using namespace std;

int main() {
    vector<string> equipe = {"DURAND", "BACHA", "RENARD", "GEYORO", "DIANI", "SOMMER"};

    cout << equipe.front() << endl;
    cout << equipe.back() << endl;

    cout << endl;

    for (int i = 0; i < equipe.size(); i++) {
        cout << equipe[i] << endl;
    }

    cout << endl;
    for (int i = equipe.size() - 1; i >= 0; i--) {
        cout << equipe[i] << endl;
    }
    cout << endl;

    int nombrejoueuse;
    string joueuse;

    cout << "Combien de joueuses voulez-vous ajouter ?" << endl;
    cin >> nombrejoueuse;

    for (int i = 0; i < nombrejoueuse; i++) {
        cout << "Nom de la joueuse " << i + 1 << " : ";
        cin >> joueuse;

        // Convertir le nom de la joueuse en majuscules
        for (char &c : joueuse) {
            c = toupper(c);
        }

        equipe.push_back(joueuse);
    }

    for (int i = 0; i < equipe.size(); i++) {
        cout << equipe[i] << endl;
    }

    cout << "Joueuse � rechercher et remplacer : ";
    string joueuseRecherchee;
    cin >> joueuseRecherchee;

    bool trouve = false;

    // Normaliser le nom de la joueuse � rechercher en majuscules
    for (char &c : joueuseRecherchee) {
        c = toupper(c);
    }

    for (int i = 0; i < equipe.size(); i++) {
        if (equipe[i] == joueuseRecherchee) {
            trouve = true;
            cout << "Joueuse pr�sente dans la case " << i << " du vecteur." << endl;

            string nouvelleJoueuse;
            cout << "Entrez le nom de la nouvelle joueuse : ";
            cin >> nouvelleJoueuse;

            // Convertir le nom de la nouvelle joueuse en majuscules
            for (char &c : nouvelleJoueuse) {
                c = toupper(c);
            }

            equipe[i] = nouvelleJoueuse;

            cout << "Joueuse remplac�e avec succ�s." << endl;
        }
    }

    if (!trouve) {
        cout << "Joueuse non trouv�e. Aucun remplacement effectu�." << endl;
    }

    // Afficher le contenu du vecteur apr�s les modifications
    cout << "Contenu du vecteur apr�s les modifications : ";
    for (const string &nomJoueuse : equipe) {
        cout << nomJoueuse << " ";
    }
    cout << endl;

    return 0;
}
/*
Test 1: Recherche et Remplacement

Joueuse � rechercher et remplacer : "RENARD" (nom existant dans le vecteur).
Entrez le nom de la nouvelle joueuse : "LEGER".
Combien de joueuses voulez-vous ajouter ? 2
Nom de la joueuse 1 : "Henry".
Nom de la joueuse 2 : "LeSommer".
Test 2: Joueuse non trouv�e

Joueuse � rechercher et remplacer : "THOMAS" (nom n'existe pas dans le vecteur).
Test 3: Remplacement multiple

Joueuse � rechercher et remplacer : "SOMMER" (nom existant dans le vecteur).
Entrez le nom de la nouvelle joueuse : "LEBOEUF".
Test 4: Ajout de nouvelles joueuses

Combien de joueuses voulez-vous ajouter ? 3
Nom de la joueuse 1 : "Cascarino".
Nom de la joueuse 2 : "Abily".
Nom de la joueuse 3 : "Thiney".
Test 5: Aucun remplacement

Joueuse � rechercher et remplacer : "DIANI" (nom existant dans le vecteur).
Entrez le nom de la nouvelle joueuse : "DIANI".
Test 6: Majuscules et Minuscules

Combien de joueuses voulez-vous ajouter ? 1
Nom de la joueuse 1 : "HeGeR".
*/
