#include <iostream>
#include <vector>
using namespace std;


int main ()
{
    vector <char> vtexto = {'H','O','L','A'};
    cout << "Tamaño: "<< vtexto.size()<< endl; // Tamaño del vector
    cout << "Caracter de la posicion 3: " << vtexto [2] << endl;
    
    //Imprimir todos los caraccteres
    for (auto i:vtexto)
    cout << i;
    return 0;
}