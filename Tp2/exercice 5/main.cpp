#include <iostream>

using namespace std;

int main()
{
    char saison;

    cout << "Entrez la lettre de la saison voulue (p pour printemps, e pour �t�, a pour automne, h pour hiver) : )" << endl;
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

Entr�e utilisateur : p
Sortie attendue : Printemps
Test de saison valide (�t�) :

Entr�e utilisateur : e
Sortie attendue : �t�
Test de saison valide (automne) :

Entr�e utilisateur : a
Sortie attendue : Automne
Test de saison valide (hiver) :

Entr�e utilisateur : h
Sortie attendue : Hiver
Test de lettre invalide :

Entr�e utilisateur : x
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de casse (majuscule) :

Entr�e utilisateur : E
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de casse (minuscule) :

Entr�e utilisateur : A
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de saisie multiple (printemps) :

Entr�e utilisateur : pr
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
Test de saisie vide :

Entr�e utilisateur : (appuyer sur Entr�e sans entrer de lettre)
Sortie attendue : Erreur : Lettre invalide, veuillez entrer p, e, a ou h.
*/
