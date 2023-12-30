#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

float operation(char op, float a, float b);

int main() {
    try {
        char op; // op�ration demand�e
        float a, b; // on met ici des valeurs pour tester
        float res;
        a = 5, b = 2;
        op = '*'; //----------------- test de la multiplication
        cout << a << op << b << endl;
        res = operation(op, a, b);
        if (res == 10)
            cout << "test OK " << res << endl;
        else
            cout << "Erreur" << res << endl;

        op = '+'; //----------------- test de l'addition
        cout << a << op << b << endl;
        res = operation(op, a, b);
        if (res == 7)
            cout << "test OK " << res << endl;
        else
            cout << "Erreur" << res << endl;

        op = '-'; //------------------ test de la soustraction
        cout << a << op << b << endl;
        res = operation(op, a, b);
        if (res == 3)
            cout << "test OK " << res << endl;
        else
            cout << "Erreur" << res << endl;

        op = '/'; //------------------ test de la division
        cout << a << op << b << endl;
        res = operation(op, a, b);
        if (res == 2.5)
            cout << "test OK " << res << endl;
        else
            cout << "Erreur" << res << endl;
    } catch (int e) {
        if (e == 1)
            cerr << "division par z�ro impossible" << endl;
        else if (e == 2)
            cerr << "op�ration inconnue" << endl;
    } catch (string &e) {
        cerr << e << endl;
    }

    return 0;
}

// retourne le r�sultat de l'op�ration entre a et b
// pr�cis�e par le caract�re op (+, -, /, *)
float operation(char op, float a, float b) {
    float res;

    switch (op) {
    case '/':
        if (b == 0) {
            throw 1; // Division par z�ro
        }
        res = a / b;
        break;
    case '+':
        res = a + b;
        break;
    case '*':
        res = a * b;
        break;
    case '-':
        res = a - b;
        break;
    default:
        throw 2; // Op�ration inconnue
    }

    return res;
}
