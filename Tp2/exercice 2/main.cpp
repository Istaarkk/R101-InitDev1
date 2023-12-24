#include <iostream>

using namespace std;

int main()
{
    float temp;
    cout <<"Entrez une temperatures"<<endl;
    cin >>temp<<endl;

    if(temp > 25)
    {
        cout<<"Il fait trop chaud"<<endl;
    }
    else if (temp < 15)
    {
        cout<<"il fait trop froid"<<endl;
    }
    else
    {
        cout <<"Cette temperature me convient"<<endl;
    }
    return 0;
}

//13 -> Il fait trop froid:-(
//27 -> Il fait trop chaud :-(
//16 -> Cette température me convient :-)
//-10 -> Il fait trop froid:-(
