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
#include <chrono>
#include "funciones.hpp" 
#include "ramo.hpp"

using namespace std;

/**
 * Trabajo 3 Analisis de ALgoritmo
 * @param argc cantidad de argumentos
 * @param argv argumentos --> ramos.csv
 * @return El código de salida del programa
 */
int main(int argc,char** argv){
    auto start = chrono::system_clock::now();
    mensajeprincipal();
    Ramo matriz[197];
    if (argc > 1) {
        std::string archivo(argv[1]);
        std::ifstream lectura(archivo);
    
        std::cout<<"Lectura de archivo..."<<std::endl;
        if(lectura){
            int i=0;
            for (std::string linea; std::getline(lectura,linea) ; ) {
                std::vector<string> arreglo = obtenerdatos(linea);
                //std::string semestre=arreglo.at(0);

                Ramo arreglo2;
                arreglo2.setSemestre(atoi(arreglo.at(0).c_str()));
                arreglo2.setCarrera(arreglo.at(1));
                arreglo2.setNombreRamo(arreglo.at(2));
                arreglo2.verRamo(arreglo2.getSemestre(),arreglo2.getCarrera(),arreglo2.getNombreRamo());
                matriz[i]=arreglo2;
                i++;
                //int numsem=std::atoi(semestre.c_str());
                //int i=0;
                //for(int j =0;j<10;j++){
                //    if(numsem==j){          //obtengo una lista con todos los de primer semestre
                //        std::string salida = arreglo.at(0) + "; ";  //a partir de aca ordenar en otras cadenas y pasar a archivo
                //        matriz[i]=salida;
                //        std::cout<<matriz[i];
                //        std::cout<<std::endl;
                //        i++;
                //    } 
                //}
            }
            //int cont=0;
            //for(int j = 0; j<197;j++){
            //    if(matriz[j].getSemestre()==1){
            //        std::cout<<matriz[j].getSemestre()<<std::endl;
            //        cont++;
            //    }
            //}

            std::cout<<matriz[100].getNombreRamo()<<std::endl;
            //std::cout<<cont;
            
            
        }
        std::cout<<std::endl<<"Archivo correctamente ingresado."<<std::endl;
        std::cout<<std::endl<<"Generando Calendario de pruebas..."<<std::endl;
    }
    participantes();

    auto end = chrono::system_clock::now();
    chrono::duration<float,milli> duration = end - start;
    std::cout<<duration.count()<<"'ms"<<std::endl;

    return EXIT_SUCCESS;
}
