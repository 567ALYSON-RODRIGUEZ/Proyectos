#include <iostream>

using namespace std;

int main()
{
    int Valor1, Valor2, resultado;
    cout << "Ingresa el primer valor que deseas sumar:";
    cin >> Valor1;
    cout << endl <<"Ingresa el segundo valor que deseas sumar:";
    cin >> Valor2;
    resultado= Valor1 + Valor2;
    cout << endl <<"La suma de los valores ingresados es:" << resultado;



    cout << endl << endl << "Ingresa el primer valor que deseas restar:";
    cin >> Valor1;
    cout << endl <<"Ingresa el segundo valor que deseas restar:";
    cin >> Valor2;
    resultado= Valor1 - Valor2;
    cout << endl <<"La restar de los valores ingresados es:" << resultado;



    cout << endl << endl << "Ingresa el primer valor que deseas multiplicar:";
    cin >> Valor1;
    cout << endl <<"Ingresa el segundo valor que deseas multiplicar:";
    cin >> Valor2;
    resultado= Valor1 * Valor2;
    cout << endl <<"La multiplicación de los valores ingresados es:" << resultado;



    cout << endl << endl << "Ingresa el primer valor que deseas dividir:";
    cin >> Valor1;
    cout << endl <<"Ingresa el segundo valor que deseas dividir:";
    cin >> Valor2;
    resultado= Valor1 / Valor2;
    cout << endl <<"La division de los valores ingresados es:" << resultado;


    return 0;
}
