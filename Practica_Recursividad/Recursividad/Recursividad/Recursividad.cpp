// Recursividad.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "Funciones.h"

int main()
{
	//ejemplo de cambio
	srand(time(NULL));
	/*int numeros[10] = { 2,5,8,15,17,1,27,28,30,0 };
	int m = Menor(numeros, 9, numeros[0]);
	cout << "El menor es " << m<<endl;
	int b = 2, e = 5;
	cout << potencia(b, e)<<endl;*/
	string frase = "Un tete a tete con Tete", pala = "te";
	cout << buscarPalabra(frase, pala,frase.length()-1)<<endl;
	cout << "el binario de 0 es " << decimalBinario(0) << endl;
	system("pause");
    return 0;
}

