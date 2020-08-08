#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>

#include "ramo.hpp"

using namespace std;


Ramo::Ramo(){

}

/**
 * Funciones de la clse Ramo
 * para obtener los valores
 * correspondientes
 */
int Ramo::getSemestre(){
    return semestre;
}
std::string Ramo::getCarrera(){
    return carrera;
}
std::string Ramo::getNombreRamo(){
    return ramo;
}

/**
 * Funciones de la clase Ramo
 * para guardar datos a traves de 
 * @param obtenidos al leer archivo
 */

void Ramo::setSemestre(int s){
    semestre = s;
}
void Ramo::setCarrera(std::string c){
    std::istringstream ( c ) >> carrera;
}
void Ramo::setNombreRamo(std::string r){
    ramo = r;
}
void Ramo::verRamo(int semestre,std::string carrera,std::string nombre ){
    std::cout << "Semestre: " << semestre << std::endl;
    std::cout << "Carrera: " << carrera << std::endl;
    std::cout << "Ramo: " << nombre << std::endl;
    std::cout<<std::endl;
}