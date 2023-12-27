#ifndef VECTEURS_H_INCLUDED
#define VECTEURS_H_INCLUDED
#include <vector>
#include <string>
#include <iostream>
using namespace std;
void affiche (vector <string> &equipe);

void normalisation(string &nom);

int recherche(const vector<string> &vec, const string &nomRecherche);

bool remplacer(vector<string> &vec, const string &nomRecherche, const string &nomRemplacement);
#endif // VECTEURS_H_INCLUDED
