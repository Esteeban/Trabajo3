/**Proyecto 3 
  *Analisis de Algoritmo
  */
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include "funciones.hpp" 

using namespace std;


/**
 * Trabajo 3 Analisis de ALgoritmo
 * @param argc cantidad de argumentos
 * @param argv argumentos
 * @return El código de salida del programa
 */
int main(int argc,char** argv){
    mensajeprincipal();

    if (argc > 1) {
        string archivo(argv[2]);
        ifstream lectura(archivo);
        if(lectura){
            for (string linea; getline(lectura,linea) ; ) {
                vector<string> arreglo = obtenerdatos(linea);
                /**
                 * al obtener los datos se deberia
                 * buscar de 1 a 11 correspondiente 
                 * a los semestres para empezar 
                 * a añadir con lo que esta abajo
                 */
                string carrera = arreglo.at(1);
                std::string convertir = arreglo.at(0);
                //cout<<convertir<<endl;
                int numero=atoi(convertir.c_str());
                cout<<numero<<"    ";
                string salida=carrera + " - " + arreglo.at(2);
                cout<<salida<<endl;       
            }
            participantes();
        }
    }else {
        participantes();
    }
    return EXIT_SUCCESS;
}
