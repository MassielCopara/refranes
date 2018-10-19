#include <iostream>
#include <string>

using namespace std;
void bienvenida(){
    cout<<"**************************************"<<endl;
    cout<<"*                                    *"<<endl;
    cout<<"* Bienvenidos al juego de refranes:  *"<<endl;
    cout<<"*                                    *"<<endl;
    cout<<"**************************************"<<endl;
    cout<<endl;
}

void menuDelPorgrama(){

    cout<<"**ESTAMOS LISTOS PARA EMPEZAR A JUGAR*"<<endl<<endl;
    cout<<"Ingrese el número de la opción que desee utilizar: "<<endl;
    cout<<"(1) Jugar a completar Refranes"<<endl <<"(2) Mostrar resultados anteriores"<< endl << "(3) Salir"<<endl;
    cout << "¿Cuál eliges?: ";
}

int MostrarRefranIncompleto(){

    string respuesta;
    cout << "\n *COMPLETAR LOS SIGUIENTES REFRANES!* \n ";

    string refranes[10][2] =
            {
                    {"Haciendo y deshaciendo se va","aprendiendo"},{"Quien no hace lo que dice","acaba diciendo lo que hace"},
                    {"Cada persona es dueña de su silencio y esclava","de sus palabras"},
                    {"El que siembra vientos", "cosecha tempestades"},
                    {"El que a buen árbol se arrima buena sombra", "le cobija"},
                    {"Nadie escarmienta en cabeza", "ajena"},
                    {"A río revuelto,", "ganancia de pescadores"},
                    {"En boca cerrada" , "no entran moscas"},
                    {"No hay mal que por bien", "no venga"},
                    {"Haz el bien y no mires", "a quien"},
            };
    int puntaje =0;
    for (int i = 0; i < 10; i++) {
        int opjuego;

        cout <<  "El refrán "<< i+1 <<" es ---->  "<< refranes[i][0]<< " [...] <----"<< endl;
        cout<<"Ingrese 1 si desea jugar"<<endl<< "Ingrese 2 si desea omitir el refrán y ver otro"<<endl<<"¿LISTO?: ";
        cin>>opjuego;
        if (opjuego==1){
            cin.ignore();
            cout << "Completa el refrán: ";
            getline(cin,respuesta);

            string correcto = refranes[i][1];
            if (respuesta == correcto){
                cout << "\n OMG OMG OMG! GOOOOD! \n "<< endl;
                puntaje=puntaje+1;
            }
            else
                cout <<"\n Te mamaste RICK, esa no es la respuesta  \n";
            cout << "Vamos con el siguiente :D! \n"<<endl;
        }
        else{
            cout<<"El refran correcto es:"<< refranes[i][0]<<", "<< refranes[i][1]<<endl;
        }
    }
    cout<<"Tu puntuación es "<< puntaje<<endl;
    return puntaje;
}



int main(){
    int opcion;
    bienvenida();

    do{
        menuDelPorgrama();
        cin >> opcion;
        int jugadas[10];
        int inicio=0;
        switch (opcion){
            case 1: cout << "Usted ha seleccionado la opción 1"<< endl;
                jugadas[inicio]= MostrarRefranIncompleto();inicio ++;
            case 2: cout << "Usted ha seleccionado la opción 2"<< endl;
            for(int i=0;i<10;i++){cout<<"Jugada "<<i << "="<<jugadas[i]<<endl;};
            case 3: cout << "Usted ha seleccionado la opción 3";
                break;
            default: cout << "Usted ha ingresado una opción incorrecta";
        }

    }while(opcion!=3);


    return 0;
}
