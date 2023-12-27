#include <iostream>
#include "calcul.h"
#include "menu.h"
#include <vector>

using namespace std;

int main() {
    int val;
    cout << "Saisissez une valeur : ";
    cin >> val;

    while (!estPositif(val)) {
        cout << "La valeur n'est pas positive. Saisissez à nouveau : ";
        cin >> val;
    }

    cout << "La valeur est positive." << endl;

    bool shouldQuit = false;
    vector<int> vec;

    while (!shouldQuit) {
        switch (menu()) {
            case FACT:
                cout << "La factorielle de " << val << " est " << calculerFactorielle(val) << endl;
                break;
            case SOM:
                cout << "La somme est " << calculerSomme(val) << endl;
                break;
            case DIV:
                vec = diviseurs(val);
                cout << "Les diviseurs de " << val << " sont : ";
                for (int i = 0; i < vec.size(); i++) {
                    cout << vec[i] << " ";
                }
                cout << endl;
                break;
            case QUIT:
                cout << "Programme terminé." << endl;
                shouldQuit = true;
                break;
            default:
                cout << "Choix invalide. Réessayez." << endl;
                break;
        }
    }

    return 0;
}
