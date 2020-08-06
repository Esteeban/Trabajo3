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
        obtener(archivo);
        participantes();
    } else {
        participantes();
    }
    return EXIT_SUCCESS;
}
