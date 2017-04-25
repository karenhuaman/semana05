#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main ()
{
    

string palabra="lili";



//ingreso de string
cout << "ingrese palabra: " ;

getline (cin,palabra);



for (int i=palabra.size()-1;i>=0;i--)


   cout << "es : " << palabra[3]<<palabra[2] <<palabra[1]<<palabra[0]<< endl; 
  
    
    
    
    return 0;
}