#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include <string>
#include "ramo.hpp"
/**
 * Función que muestra los participantes del grupo
 */
void participantes();

/**
 * Función que muestra el mensaje de bienvenida
 */
void mensajeprincipal();

/**
 * Funcion para obtener datos del archivo
 * dentro de la funcion se eliminan las comillas
 * @param string --> se ingresa la linea que proviene 
 * de leer el archivo ramos.csv
 */
std::vector<std::string> obtenerdatos(std::string linea);

#endif //FUNCIONES_H