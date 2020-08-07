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
        std::string archivo(argv[2]);
        std::ifstream lectura(archivo);
        int i=0;
        if(lectura){
            for (std::string linea; std::getline(lectura,linea) ; ) {
                std::vector<string> arreglo = obtenerdatos(linea);
                /**
                 * al obtener los datos se deberia buscar de 1 a 11 correspondiente 
                 * a los semestres para empezar a añadir con lo que esta abajo
                 */
                
                //aca esta el error
                std::string s = arreglo.at(0);
                std::stringstream geek(s);
                int x=0;
                geek >> x;
                std::cout<<x<<std::endl;
                std::string carrera = arreglo.at(1);
                
                std::string convertir = arreglo.at(0);
                std::string numero = ("1");
                //cout<<convertir<<endl;
                //int numero=atoi(convertir.c_str());
                if(convertir.compare(to_string(1))!=0){
                    //std::cout<<"iguales"<<std::endl;
                    std::string salida=carrera + " - " + arreglo.at(2);
                    std::cout<<salida<<std::endl;
                }
                else{
                    i++;
                }
                //std::cout<<convertir<<std::endl;
                //cout<<numero<<"    ";
                      
            }
            participantes();
        }
    }else {
        participantes();
    }
    return EXIT_SUCCESS;
}
