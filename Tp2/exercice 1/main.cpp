//Exercice 1 TP 2
#include <iostream>


using namespace std;

int main()
{
    float a, b =0.0;
    cout<<"Entrez deux valeurs reelle pour deux nombre a et b"<<endl;
    cin>>a;
    cin>>b;
    if(a <= b)
    {
        cout<<"Ordre croissant"<<endl;
    }
    else
    {
        cout<<"Ordre Decroissant"<<endl;
    }
    return 0;
}
