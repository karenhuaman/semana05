#include <iostream>
using namespace std;


int main ()

{
    int var = 50;
    
   
   
    cin >> var;
    
     int total = 0;
    
     for (int i = 0; i<=var; i++)
    {
        total = total + i;
    }
    
    cout << "suma: " << total << endl;
    
    return 0;
}