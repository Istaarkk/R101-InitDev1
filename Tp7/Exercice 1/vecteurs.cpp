#include <iostream>
#include <vector>
#include <string>
#include "vecteurs.h"
using namespace std;
void affiche (vector <string> &equipe)
{
    for (int i=0 ; i<equipe.size() ; i++)
    {
        cout << equipe[i] << endl;
    }
}

void normalisation(string &joueuse)
{
    int i = joueuse.length();
    for (int j = 0; j < i; j++)
    {
        joueuse[j] = toupper(joueuse[j]);
    }
}

int recherche(const vector<string> &equipe, const string &Joueuse)
{
    string personneRecherchee = Joueuse;
    normalisation(personneRecherchee);

    for (int i = 0; i < equipe.size(); i++)
    {
        string nomMajuscules = equipe[i];
        normalisation(nomMajuscules);

        if (nomMajuscules == personneRecherchee)
        {
            return i;
        }
    }

    return -1;
}


bool remplacer(vector<string> &equipe, const string &nomRecherche, const string &nomRemplacement)
{
    int indice = recherche(equipe, nomRecherche);
    if (indice != -1)
    {
        equipe[indice] = nomRemplacement;
        return true;
    }
    return false;


}
