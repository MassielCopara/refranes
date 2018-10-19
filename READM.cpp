#include <iostream>
#include <string>

using namespace std;


void bienvenida(){
    cout<<"* * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<"*                                    *"<<endl;
    cout<<"* Bienvenidos al juego de refranes:  *"<<endl;
    cout<<"*                                    *"<<endl;
    cout<<"* * * * * * * * * * * * * * * * * * * "<<endl;
    cout<<endl;
}

void menuDelPorgrama(){
    cout<<"Ingrese el número de la opción que prefiera: "<<endl;
    cout<<"(1) Jugar a completar Refranes"<<endl <<"(2) Mostrar resultados anteriores"<< endl << "(3) Salir"<<endl;
    cout << "¿Cuál eliges?: ";
}

 string significado[11]={
    {"La costumbre de este ave carnívora de comer los cadáveres empezando por los ojos sirve para simbolizar la ingratitud, al desagradecido que paga con el mal el bien que le han hecho."},
    {"El refrán nos enseña que aquellas personas cuyas actuaciones no corresponden a su discurso, acaban por delatar su verdadera esencia y modo de comportamiento, a pesar de todos los esfuerzos que pueda realizar para ocultarlo."},
    {"En este refrán, la sabiduría popular ha captado una de las realidades más patentes de la experiencia humana. Una persona que habla demasiado, sea por chismosa o sea porque revela más información de la necesaria, sufre las consecuencias de su imprudencia. En cambio, quien sabe ser discreto, tiene el control de su situación personal y no se mete en problemas innecesarios."},
    {"Este refrán advierte de las terribles consecuencias que puede acarrear realizar malas actuaciones o predicar malas doctrinas."},
    {"Hace referencia a los beneficios que se  pueden obtener de las buenas relaciones  interpersonales. Quien se acerca y convive con buenas compañías, se llena de bendiciones y bienestar. Por lo tanto, es recomendable tener como amistades o socios a personas de buenas costumbres y de excelente educación."},
    {"La experiencia ajena no es suficiente para desengañarnos, por lo que sólo aprendemos de nuestro errores o desgracias."},
    {"La frase puede interpretarse, por un lado, como una advertencia sobre las personas oportunistas que sacan beneficios de los males ajenos. Desde otro ángulo más positivo, el refrán también puede verse como un dicho que muestra que en toda situación adversa siempre existe alguna oportunidad de provecho."},
    {"Refrán que nos recuerda que en ciertas ocasiones, es mejor mantener la boca cerrada para no hablar, o decir algo que nos meta en problemas innecesarios."},
    {"Transmite una visión optimista de la realidad, pues indica que de una contrariedad se puede extraer algo bueno, que una contrariedad puede tener resultados favorables."},
    {"Proverbio popular que significa que no se necesita de aprobaciones ni de comparaciones para hacer el bien."},
    {"Recomienda evitar a toda costa a los enemigos. Cuando un contrincante abandona, conviene darle facilidades para que se marche y, de este modo, nos deje tranquilos. En general, se recomienda facilitar, incluso de manera obsequiosa, la partida de un competidor o de quien pueda causarnos daño."}
  };

int MostrarRefranIncompleto(){

    string respuesta;
    cout << "\n VAMOS CON LOS REFRANES \n ";

    string refranes[10][2] =
            {
                    {"Cría cuervos y te ","sacarán los ojos"},{"Quien no hace lo que dice","acaba diciendo lo que hace"},
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

        cout <<  "\n El refrán "<< i+1 <<" es ---->  "<< refranes[i][0]<< " [...] <----"<< endl;
        cout<<"\n ¿QUÉ DESEAS HACER? \n \nIngrese 1 si desea completar el refrán."<< endl << "Ingrese 2 si desea omitir el refrán y ver otro."<<endl<<"¿Cuál elegiste?: ";
        cin >> opjuego;
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

        cout << "\n Quieres saber qué significa?"<<endl;
        cout << significado[i];
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
            for(int i=0;i<10;i++){
              cout<<"Jugada "<< i << " = "<< jugadas[i] <<endl;
              }; break;
            case 3: cout << "Usted ha seleccionado la opción 3";
                break;
            default: cout << "Usted ha ingresado una opción incorrecta";
        }

    }while(opcion!=3);


    return 0;
}
