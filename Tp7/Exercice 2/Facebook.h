#ifndef FONCTIONS_FACEBOOK_H
#define FONCTIONS_FACEBOOK_H

#include <vector>
#include <string>

using namespace std;

// Ajoutez le vecteur noms
extern vector<string> noms;


// Étape 1: Initialisation du réseau social
void initialisation(vector<vector<bool>> &reseau, int NBMEMBRES);

// Étape 2: Affichage du réseau social
void affichage(const vector<vector<bool>> &reseau);

// Étape 3: Ajout d'amis
void ajoutAmis(vector<vector<bool>> &reseau, int utilisateur1, int utilisateur2);

// Étape 4: Nombre d'amis en commun
int nombreAmisCommuns(const vector<vector<bool>> &reseau, int utilisateur1, int utilisateur2);

// Étape 6: Vérifier si 3 personnes forment un groupe d'amis
bool groupeAmis(const vector<vector<bool>> &reseau, int a, int b, int c);

// Étape 8: Fonction pour vérifier si tous les utilisateurs d'un ensemble sont amis entre eux
bool grandGroupeAmis(const vector<vector<bool>> &reseau, const vector<int> &utilisateurs);


#endif
