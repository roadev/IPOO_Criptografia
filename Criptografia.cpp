/* Autor: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.64
 * 
 * Nombre del archivo: Criptografia
 * Responsabilidad: 
 * Colaboración: 

 */

#include "Criptografia.h"
#include <iostream>
using namespace std;

Criptografia::Criptografia()
{
	numero=-1;
	letra = "";
	confirmacion = "S";
}

Criptografia::~Criptografia()
{
	//Método destructor
}


void Criptografia::verificarNumero()
{
	switch(numero)
	{
		case 0: 	letra = "j"; 
                break;
		case 1: 	letra = "a"; 
                break;
		case 2: 	letra = "b"; 
                break;
		case 3: 	letra = "c"; 
                break;
		case 4: 	letra = "d"; 
                break;
		case 5: 	letra = "e"; 
                break;
		case 6: 	letra = "f"; 
                break;
		case 7: 	letra = "g"; 
                break;
		case 8: 	letra = "h"; 
                break;
		case 9: 	letra = "i"; 
                break;
		default:	letra = ""; 
                break;
	}

}

void Criptografia::setNumero(int value)
{
	numero = value;
}
void Criptografia::setLetra(string value)
{
	letra = value;
}
void Criptografia::setVariableConfirmacion(string value)
{
	confirmacion = value;
}
int Criptografia::getNumero()
{
	return numero;
}
string Criptografia::getLetra()
{
	return letra;
}
string Criptografia::getVariableConfirmacion()
{
	return confirmacion;
}