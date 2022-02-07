#include <iostream>

using namespace std;

int main()
{
    int op,carne,primerP,segundoP,zona,finalP,Calificacionfinal;
    string nombreC;


    cout << "********Calificaciones obtenidas en el semestre********";
    cout << endl << "Ingrese su nombre completo:";
    cin >> nombreC;
    cout << "Ingrese su no.de Carne:";
    cin >> carne;
    cout << "Calificaciones del estudiante" << " " << nombreC << " " << carne << endl;
    cout << endl << "*************Ingrese el codigo del curso***************" << endl;
    printf("011.Fisica I\n");
    printf("012.Progrmacion I\n");
    printf("013.Calculo\n");
    printf("014.Proceso Administrativo\n");
    printf("015.Derecho Informatico\n");
    scanf("%d", &op);
}
