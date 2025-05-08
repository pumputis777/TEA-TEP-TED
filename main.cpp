/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float num1; // Declaro la primera variable
    float num2; // Declaro la segunda variable
    float num3; // Declaro la tercera variable
    float suma; // Declaro la cuarta variable
    float promedio; // Declaro la quinta variable
    
    cout << "este programa suma 3 numeros y despues hace el proemdio e indica si el alumno aprobo o no" <<endl; // le indica al usuario lo que hace el programa 
    cout << "Ingrese el primer número: " <<endl;
    cin >> num1; // guarda el valor dado por el usuario en la variable num1
    cout << "Ingrese el segundo número: " <<endl;
    cin >> num2; // guarda el valor dado por el usuario en la variable num2
    cout << "Ingrese el tercer número: " <<endl;
    cin >> num3; // guarda el valor dado por el usuario en la variable num3

    suma = num1 + num2 + num3; // Calcula la suma de las tres variables y guarda el resultado en la variable suma

    promedio = suma / 3; // Calcula el promedio y guarda el resultado en la variable promedio
    if (promedio >= 7 )
    {
        cout << "TEA";
    }
    else if (promedio < 7 and promedio >= 4 )
    {
       cout << "TEP";
    }
    else
    {
        cout << "TED";
    }
    return 0;
}