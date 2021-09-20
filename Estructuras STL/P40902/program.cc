#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> dentroCasino;

    string nombre, accion;
    while (cin >> nombre >> accion)
    {
        map<string, int>::iterator it = dentroCasino.find(nombre);

        if (accion == "enters")
        {

            if (it != dentroCasino.end())
                cout << nombre << " is already in the casino" << endl;
            else
                dentroCasino[nombre] = 0;
        }
        else if (accion == "wins")
        {
            int m;
            cin >> m;

            if (it == dentroCasino.end())
                cout << nombre << " is not in the casino" << endl;
            else
                dentroCasino[nombre] += m;
        }
        else if (accion == "leaves")
        {

            if (it == dentroCasino.end())
                cout << nombre << " is not in the casino" << endl;
            else
            {
                //Mostramos el dinero que tiene:
                cout << nombre << " has won " << it->second << endl;
                dentroCasino.erase(nombre);
            }
        }
    }

    //Printamos los 10 guiones:
    cout << "----------" << endl;

    //Mostramos el dinero que tiene actualmente la gente dentro del casino:
    for (pair<string, int> elemento : dentroCasino)
        cout << elemento.first << " is winning " << elemento.second << endl;
}