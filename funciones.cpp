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
    std::cout<<std::endl<<std::endl;
    std::cout<<"========================";
    std::cout<<std::endl;
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


/**Funcion para obtener los datos del archivo
 * y al obtener los datos se eliminan las comillas
 */
std::vector<string> obtenerdatos(std::string linea){
    std::vector<string> arreglo;
    std::stringstream reem(linea);
    std::string item;
    
    std::string comilla="\"";
    std::string nada="";
    while(getline(reem,item,';')){
        std::string dato=item;
        int pos=dato.find(comilla);
        while(pos != -1){
            dato.replace(pos,comilla.size(),nada);
            pos=dato.find(comilla,pos+nada.size());     
        }
        arreglo.push_back(dato);
    }
    return arreglo;
}

