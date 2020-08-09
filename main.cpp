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

    std::string llenar[6][9];

    if (argc > 1) {
        string archivo(argv[1]);
        ifstream lectura(archivo);
    
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

        int contador=0;
        int contador2=0;
        int contadorfor=0;
        
        for(int i=1;i<=197;i++){
            contadorfor++;
            if( (matriz[i].getSemestre()==matriz[i+1].getSemestre()) || (matriz[i].getSemestre()==matriz[i-1].getSemestre())){
                if( ((matriz[i].getNombreRamo().compare(matriz[i+1].getNombreRamo()))!=0 ) && ((matriz[i].getNombreRamo().compare(matriz[i-1].getNombreRamo())))!=0){
                    contador++;        
                }
                else
                {
                    repite[contador2]=matriz[i];
                    contador2++;
                }        
            }
        }

        std::cout<<std::endl<<"Archivo correctamente ingresado."<<std::endl;
        std::cout<<std::endl<<"Generando Calendario de pruebas..."<<std::endl;

    string Salas[5];
    string Fila[6];

    Fila[0]="Período";
    Fila[1]="Lunes";
    Fila[2]="Martes";
    Fila[3]="Miercoles";
    Fila[4]="Jueves";
    Fila[5]="Viernes";


    Salas[0]="M2-201.csv";
    Salas[1]="M2-202.csv";
    Salas[2]="M2-203.csv";
    Salas[3]="M2-204.csv";
    Salas[4]="M2-205.csv";




    for(int n=0;n<5;n++){
        ofstream archivo;

        archivo.open(Salas[n].c_str(),ios::out);

        if(archivo.fail()){
            cout<<"No se pudo abrir el archivo";
            exit(1);
        }

        int i=0;
        for(int j=0;j<8;j++){
            for(int l=0;l<6;l++){
                if(l==0){
                    archivo<<Fila[l]<<";";

                }
                else{
                    archivo<<repite[i].getCarrera() + " - " + repite[i].getNombreRamo() + ";";
                    i++;

                }
            }
        }
        

        archivo.close();
    }
        
        participantes();

        auto end = chrono::system_clock::now();
        chrono::duration<float,milli> duration = end - start;
        std::cout<<duration.count()<<"'ms"<<std::endl;

        return EXIT_SUCCESS;
    
    }
}