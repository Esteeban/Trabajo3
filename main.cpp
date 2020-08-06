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

int main(int argc,char** argv){
    mensajeprincipal();

    string archivo(argv[2]);
    obtener(archivo);
    participantes();
    return 0;
}
