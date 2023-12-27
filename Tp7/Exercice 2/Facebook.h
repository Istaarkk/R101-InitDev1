#ifndef FONCTIONS_FACEBOOK_H
#define FONCTIONS_FACEBOOK_H

#include <vector>
#include <string>

using namespace std;

// Ajoutez le vecteur noms
extern vector<string> noms;


// �tape 1: Initialisation du r�seau social
void initialisation(vector<vector<bool>> &reseau, int NBMEMBRES);

// �tape 2: Affichage du r�seau social
void affichage(const vector<vector<bool>> &reseau);

// �tape 3: Ajout d'amis
void ajoutAmis(vector<vector<bool>> &reseau, int utilisateur1, int utilisateur2);

// �tape 4: Nombre d'amis en commun
int nombreAmisCommuns(const vector<vector<bool>> &reseau, int utilisateur1, int utilisateur2);

// �tape 6: V�rifier si 3 personnes forment un groupe d'amis
bool groupeAmis(const vector<vector<bool>> &reseau, int a, int b, int c);

// �tape 8: Fonction pour v�rifier si tous les utilisateurs d'un ensemble sont amis entre eux
bool grandGroupeAmis(const vector<vector<bool>> &reseau, const vector<int> &utilisateurs);


#endif
