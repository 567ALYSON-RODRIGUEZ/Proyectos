# include <iostream>

using namespace std;

int sumaN(int num1, int num2){
    return num1 + num2;}

int restaN(int num1, int num2){
    return num1 - num2;}

int multiN(int num1, int num2){
    return num1 * num2;}

int divN(int num1, int num2){
    return num1 / num2;}

int main()
{
    int num1, num2;
    int sum,rest, multi, div;
    cout<< "Ingresa el primer numero:"<< endl;
    cin>> num1;
    cout<< "Ingresa el segundo numero:"<< endl;
    cin>> num2;

    sum= sumaN(num1,num2);
    cout<< endl<< "La suma de los valores ingresados es:"<<sum<< endl;

    rest= restaN(num1,num2);
    cout<< endl<< "La resta de los valores ingresados es:"<<rest<< endl;

    multi= multiN(num1, num2);
    cout<< endl<< "La multiplicacion de los valores ingresados es:"<<multi<< endl;

    div= divN(num1, num2);
    cout<< endl<< "La division de los valores ingresados es:"<<div<< endl;

	return 0;
}
