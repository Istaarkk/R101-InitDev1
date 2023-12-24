#include <iostream>
using namespace std;
int main()
{
    int nombre;

    // Demander à l'utilisateur d'entrer le nombre
    cout << "Entrez un nombre : ";
    cin >> nombre;

    // Calculer le dernier et l'avant-dernier chiffre
    int dernierChiffre = nombre % 10;
    int avantDernierChiffre = (nombre / 10) % 10;

    // Déterminer le suffixe en fonction des règles définies
    string suffixe;
    if (avantDernierChiffre == 1)
    {
        suffixe = "th";
    }
    else
    {
        switch (dernierChiffre)
        {
        case 1:
            suffixe = "st";
            break;
        case 2:
            suffixe = "nd";
            break;
        case 3:
            suffixe = "rd";
            break;
        default:
            suffixe = "th";
        }
    }

    // Afficher l'ordinal anglais abrégé
    cout << "Ordinal anglais abrégé : " << nombre << suffixe << std::endl;

    return 0;
}

/*
Test avec le nombre 1 :

Entrée utilisateur : 1
Sortie attendue : Ordinal anglais abrégé : 1st
Test avec le nombre 22 :

Entrée utilisateur : 22
Sortie attendue : Ordinal anglais abrégé : 22nd
Test avec le nombre 103 :

Entrée utilisateur : 103
Sortie attendue : Ordinal anglais abrégé : 103rd
Test avec le nombre 45 :

Entrée utilisateur : 45
Sortie attendue : Ordinal anglais abrégé : 45th
Test avec le nombre 11 :

Entrée utilisateur : 11
Sortie attendue : Ordinal anglais abrégé : 11th
Test avec le nombre 87 :

Entrée utilisateur : 87
Sortie attendue : Ordinal anglais abrégé : 87th
Test avec le nombre 100 :

Entrée utilisateur : 100
Sortie attendue : Ordinal anglais abrégé : 100th
Test avec le nombre 1234 :

Entrée utilisateur : 1234
Sortie attendue : Ordinal anglais abrégé : 1234th
Test avec le nombre 19 :

Entrée utilisateur : 19
Sortie attendue : Ordinal anglais abrégé : 19th
*/
