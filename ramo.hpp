#ifndef RAMO_HPP
#define RAMO_HPP

#include <iostream>
#include <string>

using namespace std;

/**
 * Creación de la clase
 * Ramo
 */
class Ramo{
    private:
        int semestre;
        std::string carrera;
        std::string ramo;
    public:
        Ramo();
        int getSemestre();
        std::string getCarrera();
        std::string getNombreRamo();

        void setSemestre(int);
        void setCarrera(std::string);
        void setNombreRamo(std::string);
        void verRamo();
};

#endif //RAMO_HPP