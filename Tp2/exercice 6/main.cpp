#include <iostream>
using namespace std;
int main()
{
    int nombre;

    // Demander � l'utilisateur d'entrer le nombre
    cout << "Entrez un nombre : ";
    cin >> nombre;

    // Calculer le dernier et l'avant-dernier chiffre
    int dernierChiffre = nombre % 10;
    int avantDernierChiffre = (nombre / 10) % 10;

    // D�terminer le suffixe en fonction des r�gles d�finies
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

    // Afficher l'ordinal anglais abr�g�
    cout << "Ordinal anglais abr�g� : " << nombre << suffixe << std::endl;

    return 0;
}

/*
Test avec le nombre 1 :

Entr�e utilisateur : 1
Sortie attendue : Ordinal anglais abr�g� : 1st
Test avec le nombre 22 :

Entr�e utilisateur : 22
Sortie attendue : Ordinal anglais abr�g� : 22nd
Test avec le nombre 103 :

Entr�e utilisateur : 103
Sortie attendue : Ordinal anglais abr�g� : 103rd
Test avec le nombre 45 :

Entr�e utilisateur : 45
Sortie attendue : Ordinal anglais abr�g� : 45th
Test avec le nombre 11 :

Entr�e utilisateur : 11
Sortie attendue : Ordinal anglais abr�g� : 11th
Test avec le nombre 87 :

Entr�e utilisateur : 87
Sortie attendue : Ordinal anglais abr�g� : 87th
Test avec le nombre 100 :

Entr�e utilisateur : 100
Sortie attendue : Ordinal anglais abr�g� : 100th
Test avec le nombre 1234 :

Entr�e utilisateur : 1234
Sortie attendue : Ordinal anglais abr�g� : 1234th
Test avec le nombre 19 :

Entr�e utilisateur : 19
Sortie attendue : Ordinal anglais abr�g� : 19th
*/
