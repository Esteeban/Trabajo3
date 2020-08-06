#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include "funciones.hpp" 

using namespace std;

void participantes(){
    cout<<"========================"<<endl<<"Integrantes del grupo: "<<endl;
    cout<<"Andres Munoz G."<<endl;
    cout<<"Esteban Rojas R."<<endl;
    cout<<"Ignacio Valdebenito A."<<endl;
    cout<<"========================"<<endl;
}

void mensajeprincipal(){
    cout<<"====  Proyecto 3 - Analisis de ALgoritmo  ===="<<endl<<endl;
    cout<<"Generación Horario para semana de Pruebas en la Universidad"<<endl<<endl;
}

void obtener(string archivo){
    ifstream lectura(archivo);
    string fila;
    if(lectura){
        for (string linea; getline(lectura,linea) ; ) {
            if(linea[1]=='1' and linea[2]=='"'){
                cout<<linea<<endl;
            }
        }
    }
}