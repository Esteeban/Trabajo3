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
 * @param argv argumentos --> ramos.csv
 * @return El código de salida del programa
 */
int main(int argc,char** argv){
    /**
     * despliegue mensaje principal
     */
    mensajeprincipal();

    if (argc > 1) {
        std::string archivo(argv[2]);
        std::ifstream lectura(archivo);
        if(lectura){
            for (std::string linea; std::getline(lectura,linea) ; ) {
                std::vector<string> lr = obtenerdatos(linea);
                std::string semestre=lr.at(0);
                int numero=std::atoi(semestre.c_str());
                if(numero==1){
                    std::string salida = lr.at(0) + " - " + lr.at(1) + " - " + lr.at(2);
                    std::cout<<salida<<std::endl;
                }
            }
        }
    }
    participantes();
    return EXIT_SUCCESS;
}
