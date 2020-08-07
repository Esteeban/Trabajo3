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
    std::cout<<"========================";
    std::cout<<endl;
    std::cout<<"Integrantes del grupo: "<<std::endl;
    std::cout<<"Andres Munoz G."<<std::endl;
    std::cout<<"Esteban Rojas R."<<std::endl;
    std::cout<<"Ignacio Valdebenito A."<<std::endl;
    std::cout<<"========================"<<std::endl;
}

void mensajeprincipal(){
    std::cout<<"====  Proyecto 3 - Analisis de ALgoritmo  ====";
    std::cout<<endl<<endl;
    std::cout<<"Generación Horario para semana de Pruebas en la Universidad";
    std::cout<<endl<<endl;
}


std::vector<std::string> obtenerdatos(std::string fila){
    std::vector<string> arreglo;
    std::stringstream od(fila);
    std::string item;

    while(getline(od,item,';')){
        std::string dato = item;
        arreglo.push_back(dato);
    }
    return arreglo;
}

