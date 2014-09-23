/* Autor: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 02/09/14
 * Versión: 0.57
 * 
 * Nombre del archivo: main.cpp
 * Responsabilidad: 
 * Colaboración: 

 */

#include "Criptografia.h"

int main()
{
	Criptografia cripto;
	string confirmacion;
	int valor;
	cout <<"Bienvenido :)" <<endl;
	while(cripto.getVariableConfirmacion() == "S" || cripto.getVariableConfirmacion()  == "s")
	{
		cout <<"Ingrese un número del 1 al 10: ";
		cin >> valor;
		cripto.setNumero(valor);
		cripto.verificarNumero();
		cout <<"Muestra el valor encriptado para "<<valor<<" es: "<< cripto.getLetra() <<endl;
		cout <<"Desea evaluar una nueva contraseña S o N:";
		cin >> confirmacion;
		cripto.setVariableConfirmacion(confirmacion);
	}
	cout <<"Gracias por Venir ;)";

	
}