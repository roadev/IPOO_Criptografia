/* Autor: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.64
 * 
 * Nombre del archivo: Criptografia
 * Responsabilidad: 
 * Colaboración: 

 */

#include <iostream>
#include <string>

using namespace std;

#ifndef CRIPTOGRAFIA_H
#define	CRIPTOGRAFIA_H

class Criptografia{// aquí se crea la clase Alcancia
public://metodos
    Criptografia();//constructor
   ~Criptografia();// destructor
    void verificarNumero();
    
    void setNumero(int value);
    void setLetra(string value);
    void setVariableConfirmacion(string value);
    int getNumero();
    string getLetra();
    string getVariableConfirmacion();
    
    
    
private://atributos de la clase
    int numero;
	string letra;
	string confirmacion;

};

#endif