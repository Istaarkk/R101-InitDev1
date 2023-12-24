#include <iostream>

using namespace std;

int main()
{
    char saison;

    cout << "Entrez la lettre de la saison voulue (p pour printemps, e pour été, a pour automne, h pour hiver) : )" << endl;
    cin >>  saison;

    switch (saison)
    {
    case 'p':
        cout<<"Printemps"<<endl;
        break;
    case 'e':
        cout<<"Ete"<<endl;
    case 'a':
        cout<<"Automne"<<endl;
        break;
    case 'h':
        cout<<"Hiver"<<endl;
        break;
    default:
        cout<<"la lettre entrer est invalide"
    }

    return 0;
}
/*
Test de saison valide (printemps) :

Entrée utilisateur : p
Sortie attendue : Printemps
Test de saison valide (été) :

Entrée utilisateur : e
Sortie attendue : Été
Test de saison valide (automne) :

Entrée utilisateur : a
Sortie attendue : Automne
Test de saison valide (hiver) :

Entrée utilisateur : h
Sortie attendue : Hiver
Test de lettre invalide :

Entrée utilisateur : x
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de casse (majuscule) :

Entrée utilisateur : E
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de casse (minuscule) :

Entrée utilisateur : A
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de saisie multiple (printemps) :

Entrée utilisateur : pr
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de saisie vide :

Entrée utilisateur : (appuyer sur Entrée sans entrer de lettre)
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
*/
