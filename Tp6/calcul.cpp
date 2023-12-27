#include "calcul.h"
using namespace std;

bool estPositif(int nombre) {
    return nombre > 0;
}

int calculerSomme(int n) {
    int result = 0;
    for (int i = 1; i <= n; i++) {
        result = result + i;
    }
    return result;
}

int calculerFactorielle(int n) {
    if (n == 0) {
        return 1;
    }
    return n * calculerFactorielle(n - 1);
}

vector<int> diviseurs(int nombre) {
    vector<int> div1;
    for (int i = 1; i <= nombre; i++) {
        if (nombre % i == 0) {
            div1.push_back(i);
        }
    }
    return div1;
}
/*Script Par Matthieu Da Cruz

Cas Général :

Valeur d'essai de l'ensemble : 5
Résultat attendu : Le programme devrait afficher "La valeur est positive." et le menu devrait s'afficher.
Résultat obtenu :
Pour la valeur 5, le programme affiche "La valeur est positive." et affiche le menu.

Cas Limite :

Valeur d'essai de l'ensemble : 0
Résultat attendu : Le programme devrait afficher "La valeur n'est pas positive. Saisissez à nouveau : " jusqu'à ce que l'utilisateur entre une valeur positive.
Résultat obtenu :
Pour la valeur 0, le programme affiche "La valeur n'est pas positive. Saisissez à nouveau : " jusqu'à ce que l'utilisateur entre une valeur positive.

Cas Particulier (FACT) :

Valeur d'essai de l'ensemble : 5
Résultat attendu : Le programme devrait afficher le menu, et si l'utilisateur choisit l'option FACT, il devrait afficher "La factorielle de 5 est 120" (car 5! = 120).
Résultat obtenu :
Pour la valeur 5, le programme affiche le menu, et lorsque l'utilisateur choisit l'option FACT, il affiche "La factorielle de 5 est 120."

Cas Particulier (SOM) :

Valeur d'essai de l'ensemble : 5
Résultat attendu : Le programme devrait afficher le menu, et si l'utilisateur choisit l'option SOM, il devrait afficher "La somme est X" (où X est le résultat correct).
Résultat obtenu :
Pour la valeur 5, le programme affiche le menu, et lorsque l'utilisateur choisit l'option SOM, il affiche "La somme est 15" (car 1 + 2 + 3 + 4 + 5 = 15).


Cas Particulier (DIV) :

Valeur d'essai de l'ensemble : 10
Résultat attendu : Le programme devrait afficher le menu, et si l'utilisateur choisit l'option DIV, il devrait afficher les diviseurs de 10 (qui sont 1, 2, 5, et 10).
Résultat obtenu :
Pour la valeur 10, le programme affiche le menu, et lorsque l'utilisateur choisit l'option DIV, il affiche "Les diviseurs de 10 sont : 1 2 5 10."
*/
