#include <iostream>

using namespace std;

int main()
{
    int opc,carne,primerP,segundoP,zona,finalP;
    string nombreC;


    cout << "********Calificaciones obtenidas en el semestre********";
    cout << endl << "Ingrese su nombre:";
    cin >> nombreC;
    cout << "Ingrese su no.de Carne:";
    cin >> carne;
    cout << "Calificaciones del estudiante" << " " << nombreC << " " << carne <<endl;
    cout << endl << "*************Codigo del curso***************" <<endl;
    cout << "1.Fisica I"<<endl;
    cout << "2.Programacion I"<<endl;
    cout << "3.Calculo I"<< endl;
    cout << "4.Proceso Administrativo"<<endl;
    cout << "5.Derecho Informatico"<<endl;
    cout << "Ingrese el codigo del curso: ";
    cin >> opc;
    switch (opc)
    {
        case 1:
            cout<< endl<< "Ha ingresado al curso de Fisica I";
            cout<< endl<< "Ingrese la nota obtenida en actividades:" << endl;
            cin >> zona;
            cout<< "Ingrese la nota obtenida en el Parcial I:"<< endl;
            cin >> primerP;
            cout<< "Ingrese la nota obtenida en el Parcial II:"<< endl;
            cin>> segundoP;
            int Calificacionfinal= zona+primerP+segundoP;
            cout<< "Su zona es de:"<< Calificacionfinal<< endl;
            if (Calificacionfinal <35)
            {cout<< "No ha alcanzado la zona minima para examen final :("<< endl;}
            else
                if(Calificacionfinal >65)
                    {cout<< "Error, escriba nuevamente las notas";}
                else
                    if(Calificacionfinal >=35)
                        {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D";
                         cout<<endl<< "Ingrese la nota obtenida en examen final:"<< endl;
                         cin>> finalP;
                         int nota_final= Calificacionfinal+finalP;
                            if ( Calificacionfinal <=35 && Calificacionfinal !=0 && finalP <=10 && finalP !=0)
                            cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha PERDIDO el curso de Fisica I, se gana con 65";
                                else
                                    if(Calificacionfinal >35 && Calificacionfinal <=39 && finalP <25 && finalP !=0)
                                    cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha PERDIDO el curso de Fisica I, se gana con 65";
                                        else
                                            if (Calificacionfinal >=40 && Calificacionfinal <=65 && finalP >=25 && finalP <=30 && finalP !=0)
                                              cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha GANADO el curso de Fisica I,felicidades";
                        }

    }
    switch (opc)
    {
        case 2:
            cout<< endl<< "Ha ingresado al curso de Programacion I";
            cout<< endl<< "Ingrese la nota obtenida en actividades:" << endl;
            cin >> zona;
            cout<< "Ingrese la nota obtenida en el Parcial I:"<< endl;
            cin >> primerP;
            cout<< "Ingrese la nota obtenida en el Parcial II:"<< endl;
            cin>> segundoP;
            int Calificacionfinal= zona+primerP+segundoP;
            cout<< "Su zona es de:"<< Calificacionfinal<< endl;
            if (Calificacionfinal <35)
            {cout<< "No ha alcanzado la zona minima para examen final :("<< endl;}
            else
                if(Calificacionfinal >65)
                    {cout<< "Error, escriba nuevamente las notas";}
                else
                    if(Calificacionfinal >=35)
                        {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D";
                        cout<<endl<< "Ingrese la nota obtenida en examen final:"<< endl;
                         cin>> finalP;
                         int nota_final= Calificacionfinal+finalP;
                            if ( Calificacionfinal <=35 && Calificacionfinal !=0 && finalP <=10 && finalP !=0)
                            cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha PERDIDO el curso de Programacion I, se gana con 65";
                                else
                                    if(Calificacionfinal >35 && Calificacionfinal <=39 && finalP <25 && finalP !=0)
                                    cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha PERDIDO el curso de Programacion I, se gana con 65";
                                        else
                                            if (Calificacionfinal >=40 && Calificacionfinal <=65 && finalP >=25 && finalP <=30 && finalP !=0)
                                              cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha GANADO el curso de Programacion I,felicidades";
                        }
    }
    switch (opc)
    {
        case 3:
            cout<< endl<< "Ha ingresado al curso de Calculo I";
            cout<< endl<< "Ingrese la nota obtenida en actividades:" << endl;
            cin >> zona;
            cout<< "Ingrese la nota obtenida en el Parcial I:"<< endl;
            cin >> primerP;
            cout<< "Ingrese la nota obtenida en el Parcial II:"<< endl;
            cin>> segundoP;
            int Calificacionfinal= zona+primerP+segundoP;
            cout<< "Su zona es de:"<< Calificacionfinal<< endl;
            if (Calificacionfinal <35)
            {cout<< "No ha alcanzado la zona minima para examen final :("<< endl;}
            else
                if(Calificacionfinal >65)
                    {cout<< "Error, escriba nuevamente las notas";}
                else
                    if(Calificacionfinal >=35)
                        {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D";
                        cout<<endl<< "Ingrese la nota obtenida en examen final:"<< endl;
                         cin>> finalP;
                         int nota_final= Calificacionfinal+finalP;
                            if ( Calificacionfinal <=35 && Calificacionfinal !=0 && finalP <=10 && finalP !=0)
                            cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha PERDIDO el curso de Calculo I, se gana con 65";
                                else
                                    if(Calificacionfinal >35 && Calificacionfinal <=39 && finalP <25 && finalP !=0)
                                    cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha PERDIDO el curso de  Calculo I, se gana con 65";
                                        else
                                            if (Calificacionfinal >=40 && Calificacionfinal <=65 && finalP >=25 && finalP <=30 && finalP !=0)
                                              cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha GANADO el curso de Calculo I,felicidades";
                        }
    }
}
