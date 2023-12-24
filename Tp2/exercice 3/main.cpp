#include <iostream>
using namespace std;

int main()
{
    double mini, maxi;
    double x, y, z;

    // a) Jeu d'essais
    // (Vous pouvez ajuster ces valeurs selon vos besoins)
    cout << "Entrez trois nombres (x, y, z) : ";
    cin >> x >> y >> z;

    // b) Afficher le maximum
    if (x > y && x > z)
    {
        maxi = x;
    }
    else if (y > z)
    {
        maxi = y;
    }
    else
    {
        maxi = z;
    }

    cout << "Le maximum est : " << maxi << endl;

    // c) Afficher le minimum
    if (x < y && x < z)
    {
        mini = x;
    }
    else if (y < z)
    {
        mini = y;
    }
    else
    {
        mini = z;
    }

    cout << "Le minimum est : " << mini << endl;

    return 0;
}

/*
test du maximum
 x   y   z   resultat
14  15  16  16
5   7   2   7
-9  27  0   27
-85 -10 -99 -10
4   4   2   4

test du minimum
 x   y   z   resultat
14  15  16  14
5   7   2   2
-9  27  0   -9
-85 -10 -99 -99
4   4   2   2


*/

