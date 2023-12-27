#include <iostream>
#include <vector>
#include "Facebook.h"
using namespace std;

vector<string> noms = {"Utilisateur 0", "Utilisateur 1", "Utilisateur 2", "Utilisateur 3", "Utilisateur 4"};

// Étape 1: Initialisation du réseau social
void initialisation(vector<vector<bool>> &reseau, int NBMEMBRES) {
    reseau = vector<vector<bool>>(NBMEMBRES, vector<bool>(NBMEMBRES, false));
}

// Étape 2: Affichage du réseau social
void affichage(const vector<vector<bool>> &reseau) {
    cout << "   ";
    for (const string &nom : noms) {
        cout << nom << "  ";
    }
    cout << endl;

    for (int i = 0; i < reseau.size(); i++) {
        cout << noms[i] << "  ";
        for (int j = 0; j < reseau[i].size(); j++) {
            cout << reseau[i][j] << "    ";
        }
        cout << endl;
    }
}

// Étape 3: Ajout d'amis
void ajoutAmis(vector<vector<bool>> &reseau, int utilisateur1, int utilisateur2) {
    reseau[utilisateur1][utilisateur2] = true;
    reseau[utilisateur2][utilisateur1] = true;
}

// Étape 4: Nombre d'amis en commun
int nombreAmisCommuns(const vector<vector<bool>> &reseau, int utilisateur1, int utilisateur2) {
    int amisCommuns = 0;
    for (int i = 0; i < reseau.size(); i++) {
        if (reseau[utilisateur1][i] && reseau[utilisateur2][i]) {
            amisCommuns++;
        }
    }
    return amisCommuns;
}

// Étape 6: Vérifier si 3 personnes forment un groupe d'amis
bool groupeAmis(const vector<vector<bool>> &reseau, int a, int b, int c) {
    bool res = false;
    if (reseau[a][b] && reseau[b][c] && reseau[a][c]) {
        res = true;
    }
    return res;
}
// Étape 8: Fonction pour vérifier si tous les utilisateurs d'un ensemble sont amis entre eux
bool grandGroupeAmis(const vector<vector<bool>> &reseau, const vector<int> &utilisateurs) {
    for (int i = 0; i < utilisateurs.size(); i++) {
        for (int j = i + 1; j < utilisateurs.size(); j++) {
            if (!reseau[utilisateurs[i]][utilisateurs[j]]) {
                return false;
            }
        }
    }
    return true;
}
