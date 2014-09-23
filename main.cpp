/* Autor: Hecho por Juan David Roa Valencia y Jhonatan David Vanegas Arrieta
 * Fecha de creación: 22/09/14
 * Versión: 0.6
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
		cout <<"Ingrese un número del 0 al 9: ";
		cin >> valor;
		cripto.setNumero(valor);
		cripto.verificarNumero();
		cout <<"Muestra el valor encriptado para "<<valor<<" es: "<< cripto.getLetra() <<endl;
		cout <<"¿Desea evaluar una nueva contraseña? Escriba: S para sí o N para no: "<<endl;
		cin >> confirmacion;
		cripto.setVariableConfirmacion(confirmacion);
	}
	cout <<"¡ Gracias por Venir ;) !";
	
}