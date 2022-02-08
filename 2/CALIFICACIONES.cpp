#include <iostream>

using namespace std;

int main()
{
    int opc,carne,primerP,segundoP,zona,finalP;
    string nombreC;


    cout << "********Calificaciones obtenidas en el semestre********";
    cout << endl << "Ingrese su nombre completo:";
    cin >> nombreC;
    cout << "Ingrese su no.de Carne:";
    cin >> carne;
    cout << "Calificaciones del estudiante" << " " << nombreC << " " << carne <<endl;
    cout << endl << "*************Codigo del curso***************" <<endl;
    cout << "1.Fisica"<<endl;
    cout << "2.Programacion"<<endl;
    cout << "3.Calculo"<< endl;
    cout << "4.Proceso Administrativo"<<endl;
    cout << "5.Derecho Informatico"<<endl;
    cout << "Ingrese el codigo del curso: ";
    cin >> opc;
    switch (opc)
    {
        case 1:
            cout<< endl<< "Ha ingresado al curso de Fisica";
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
                        if(Calificacionfinal ==35)
                            {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D"<< endl;
                            cout<<endl<< "Ingrese la nota obtenida en examen final:"<< endl;
                            cin>> finalP;
                            int nota_final= Calificacionfinal+finalP;
                                if (finalP <=10)
                                    cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha PERDIDO el curso, se gana con 65";
                                    else
                                        if(Calificacionfinal >50)
                                         cout<< "Su nota final del curso es:"<< " "<< nota_final<< " "<< "ha GANADO el curso,felicidades";


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
                        {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D";}

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
                        {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D";}

    }
     switch (opc)
    {
        case 4:
            cout<< endl<< "Ha ingresado al curso de Proceso Administrativo I";
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
                        {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D";}

    }
     switch (opc)
    {
        case 5:
            cout<< endl<< "Ha ingresado al curso de Derecho Informatico";
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
                        {cout<< "Ha alcanzado la zona necesaria para realizar examen final, felicidades :D";}

    }

}
