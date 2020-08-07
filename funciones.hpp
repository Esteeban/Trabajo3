#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include <string>
/**
 * Función que muestra los participantes del grupo
 */
void participantes();

/**
 * Mensaje de bienvenida
 */
void mensajeprincipal();

/**
 * Obtener elementos por fila
 */
std::vector<std::string> obtenerdatos(std::string fila);

#endif //FUNCIONES_H