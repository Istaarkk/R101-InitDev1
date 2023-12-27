#include <iostream>
#include <vector>
#include "vecteurs.h"

int main()
{
    vector<string> equipe = {"DURAND", "BACHA", "RENARD", "GEYORO", "DIANI", "SOMMER"};

    cout << "Affichage de l'equipe : " << endl;
    affiche(equipe);
    string joueuse;
    //Questions 4
    cout<<" Normalisation: ";
    cin>>joueuse;
    normalisation(joueuse);
    cout << "Mot normaliser : " << joueuse << endl;

    string nomRecherche = "DIANI";

    cout << "Quelle joueuse recherchez-vous ? ";
    cin >> joueuse;
    int indice = recherche(equipe, joueuse);

    if (indice != -1)
    {
        cout << joueuse << " existe dans le tableau, a l'indice " << indice << endl;
    }
    else
    {
        cout << joueuse << " n'existe pas dans le tableau" << endl;
    }

    string anciennePersonne, nouvellePersonne;
    cout << "Quelle personne voulez-vous remplacer ? ";
    cin >> anciennePersonne;
    cout << "Par quelle personne voulez-vous la remplacer ? ";
    cin >> nouvellePersonne;
    normalisation(nouvellePersonne);

    bool remplacementReussi = remplacer(equipe, anciennePersonne, nouvellePersonne);

    if (remplacementReussi)
    {
        cout << anciennePersonne << " a ete remplacee par " << nouvellePersonne << " dans le tableau." << endl;
    }
    else
    {
        cout << anciennePersonne << " n'a pas ete trouvee dans le tableau, aucune modification n'a ete effectuee." << endl;
    }

    cout<<"Le vecteur contient maintenant :";
    affiche(equipe);




/*

CAS GENERAL: AFFICHAGE DU VECTEUR
Abstrait : Ensemble de noms de joueuses dans l'équipe.
Valeur d'essai de l'ensemble : {"DURAND", "BACHA", "RENARD", "GEYORO", "DIANI", "SOMMER"}
Résultat attendu : Le programme devrait afficher les noms de toutes les joueuses sur des lignes séparées.
Résultat obtenu : Le programme affiche correctement les noms de toutes les joueuses.

CAS GENERAL: RECHERCHE D'UNE JOUEUSE EXISTENTE
Abstrait : Ensemble de noms de joueuses dans l'équipe.
Valeur d'essai de l'ensemble : {"DURAND", "BACHA", "RENARD", "GEYORO", "DIANI", "SOMMER"}
Résultat attendu : Après avoir recherché "DURAND", le programme devrait retourner que "DURAND existe dans le tableau, a l'indice 0".
Résultat obtenu : "DURAND existe dans le tableau, a l'indice 0".

CAS GENERAL: REMPLACEMENT D'UNE JOUEUSE EXISTENTE
Abstrait : Ensemble de noms de joueuses dans l'équipe.
Valeur d'essai de l'ensemble : {"DURAND", "BACHA", "RENARD", "GEYORO", "DIANI", "SOMMER"}
Résultat attendu : Après avoir remplacé "DIANI" par "ronaldo", le programme devrait afficher "DIANI"a ete remplacer par ronaldo dans le tableau."
Résultat obtenu : ronaldo a remplacer BACHA"

CAS PARTICULIER: REMPLACEMENT D'UNE JOUEUSE INEXISTENTE
Abstrait : Ensemble de noms de joueuses dans l'équipe.
Valeur d'essai de l'ensemble : {"DURAND", "BACHA", "RENARD", "GEYORO", "DIANI", "SOMMER"}
Résultat attendu : Après avoir essayé de remplacer "coucou" par "layton", le programme devrait afficher "coucou n'existe pas donc aucune modification n'a ete effectuee."
Résultat obtenu :  "coucou n'a pas ete trouvee , aucune modification effectuer."

CAS LIMITE: RECHERCHE D'UNE JOUEUSE INEXISTENTE
Abstrait : Ensemble de noms de joueuses dans l'équipe.
Valeur d'essai de l'ensemble : {"DURAND", "BACHA", "RENARD", "GEYORO", "DIANI", "SOMMER"}
Résultat attendu : recherche :"Bonjour", programme doir retourner "bonjour n'est pas dans le tableau".
Résultat obtenu : n'est pas dans le tableau


*/


    return 0;

}




