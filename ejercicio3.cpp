#include <iostream>
#include <vector>
using namespace std;

bool buscar(char caracter, vector<char> vletra)
{
    bool encontro = false;
    for (auto i:vletra)
    {
        if (i==caracter)
        encontro = true;
    }
    return encontro;
}
int posicionletra(char caracter,vector<char>vletras)
{
    int posision = 0;
    for(auto i:vletras)
    {
        if (i==caracter)
        return posicion;
    posicion++;
    }
    return posicion;
}



int main ()

{
    string texto;
    cout << "ingresar un texto";
    cin >> texto;
    
    vector<char> letras;
    vector <int> nletras;
    
    for (auto i: texto)
    {
        if (buscar (i,letras)==true)
        {
        auto posicion = posicionletra(i,letras);
        nletras[posicion]++;
        }
        else
        {
            letras.push_back(i);
            nletras.push_back(1);
        }
    }
    
    for (int i =0; i<letras.size();i++)
    {
        cout <<"la cantidad de la letra " << letras[i] << " es " <<nletras[i]<< endl;
    }
    
    
    return 0;
}