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
#include <string.h>
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
    Ramo repite[88];
    if (argc > 1) {
        std::string archivo(argv[1]);
        std::ifstream lectura(archivo);
    
        std::cout<<"Lectura de archivo..."<<std::endl;
        if(lectura){
            int i=0;
            for (std::string linea; std::getline(lectura,linea) ; ) {
                std::vector<string> arreglo = obtenerdatos(linea);
          

                Ramo arreglo2;
                arreglo2.setSemestre(atoi(arreglo.at(0).c_str()));
                arreglo2.setCarrera(arreglo.at(1));
                arreglo2.setNombreRamo(arreglo.at(2));
                //arreglo2.verRamo(arreglo2.getSemestre(),arreglo2.getCarrera(),arreglo2.getNombreRamo());
                matriz[i]=arreglo2;
                i++;
           
            }
           
            
            
        }

        //std::cout<<matriz[100].getNombreRamo()<<std::endl;
        std::cout<<std::endl<<"Archivo correctamente ingresado."<<std::endl;
        std::cout<<std::endl<<"Generando Calendario de pruebas..."<<std::endl;
        int contador=0;
        int contador2=0;
        int contadorfor=0;
        for(int i=1;i<=197;i++){
            contadorfor++;
            if( (matriz[i].getSemestre()==matriz[i+1].getSemestre()) || (matriz[i].getSemestre()==matriz[i-1].getSemestre())){
                
                if( ((matriz[i].getNombreRamo().compare(matriz[i+1].getNombreRamo()))!=0 ) && ((matriz[i].getNombreRamo().compare(matriz[i-1].getNombreRamo())))!=0){
                contador++;        
                //cout<<"ramo nombre unico: "<<matriz[i].getNombreRamo()<<" "<<contador<<endl;
                }
                else
                {

                    repite[contador2]=matriz[i];

                    contador2++;
                  //  cout<< "Carrera que se repite: "<<matriz[i].getNombreRamo()<<" "<<contador2<<endl;
                }
                
                
                
     }
     
}

cout<<contador<<endl;
cout<<contador2<<endl;
cout<<contadorfor<<endl;
for(int p=0;p<=87;p++){
repite[p].verRamo();
}


    
    participantes();

    auto end = chrono::system_clock::now();
    chrono::duration<float,milli> duration = end - start;
    std::cout<<duration.count()<<"'ms"<<std::endl;

    return EXIT_SUCCESS;
    
    }
}