#include <iostream>
#include <vector>
using namespace std;


int main ()
{
    vector <int> vnumeros;
    int n=0;
    cout << "ingrese el numero de datos: ";
    cin >> n;
    //for ingreso para datos
    for (int i=1; i <= n; i++)
    {
        int x=0;
        cout << "ingresar el valor # " << i << ":" ;
        cin >> x;
        vnumeros.push_back (x);  //ingresando datos al vector en este caso se ingreso la x
    }
    for (auto i:vnumeros)
    {
        cout << i << " " << endl;
    }
    
    
    return 0;
}