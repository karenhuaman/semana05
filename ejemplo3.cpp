#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main ()
{
string nombre;
//string apellido = "perez"; //


//ingreso de string
cout << "ingrese su nombre: " ;
//cin >> nombre;
getline (cin,nombre);

cout << nombre.size();

cout << "el nombre ingresado es : " << nombre [0] << endl;
cout << "el nombre ingresado es : " << nombre << endl;
cout << "consonantes:" ;

for (auto i: nombre)
{
    
    if (i!= 'a' && i!= 'e' && i!='i' && i!='o' && i!='u' && i!='A' && i!='E' && i!='I' && i!='O' && i!='U')
    cout << i;
}
    
    
    return 0;
}