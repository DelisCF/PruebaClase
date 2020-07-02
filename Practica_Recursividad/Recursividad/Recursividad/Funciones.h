#pragma once
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

//división por restas sucesivas
int divisionRestas(int &dividendo, int divisor) {
	if (divisor>dividendo) {
		return 0;
	}
	else {
		dividendo = dividendo - divisor;
		return 1 + divisionRestas(dividendo, divisor);
	}
}

//suma de digitos
int sumaDigitos(int num) {
	if (num == 0) {
		return 0;
	}
	else {
		return sumaDigitos(num / 10) + num % 10;
	}
}

//invertir numero
string invertirNumero(int num) {
	if (num<10) {
		return to_string(num);
	}
	else {
		return to_string(num % 10) + invertirNumero(num / 10);
	}
}

//maximo comun divisor
int MCD_Euclides(int num1, int num2) {
	if (num2 == 0) {
		return num1;
	}
	else {
		return MCD_Euclides(num2, num1 % num2);
	}
}

//multiplicar vector
int productoVector(int valores[], int cantidad) {
	if (cantidad == 0) {
		return valores[0];
	}
	else {
		return valores[cantidad]*productoVector(valores,cantidad-1);
	}
}

//menor valor de un vector
int Menor(int valores[], int n, int menor){
	if (n == 0){
		if (valores[0] < menor)
			return valores[0];
		else
			return menor;
	}
	else {
		if (valores[n] < menor)
			menor = valores[n];
		return Menor(valores, n-1, menor);
	}
}

//busqueda binaria
int busquedaBinaria(int valores[], int bajo, int alto, int buscar) {
	int central;
	if (alto<bajo) {
		return -1;
	}
	else {
		central = (bajo + alto) / 2;
		if (valores[central] == buscar) {
			return central;
		}
		else if(valores[central] < buscar){
			return busquedaBinaria(valores, central + 1, alto, buscar);
		}
		else {
			return busquedaBinaria(valores, bajo, central-1, buscar);
		}
	}
}

//potencia par impar
int potencia(int base, int exp){
	int resultado;
	if (exp <= 0){
		return 1;
	}
	else {
		if (exp % 2 == 0){
			resultado = potencia(base, exp / 2);
			return resultado * resultado;
		}
		else {
			resultado = potencia(base, (exp - 1) /2);
			return  resultado * resultado*base;
		}
	}
}

//rata
int experimento() {
	int valor = rand() % 3 + 1;
	if (valor == 3)
		return 7;
	else
		if (valor == 2)
			return 5 + experimento();
		else
			return 3 + experimento();
}
	

//buscar palabras
string buscarPalabra(string frase, string palabra, int posicion) {
	if (posicion < palabra.length()) {
		return "";
	}
	else {
		if (frase.substr(posicion, palabra.length()) == palabra) {
			return buscarPalabra(frase, palabra, posicion - 1) + " " + to_string(posicion);
		}
		else {
			return buscarPalabra(frase, palabra, posicion - 1);
		}
	}
}

//numeros triangulares
int triangular(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + triangular(n - 1);
	}
}

//binario a decimal
string decimalBinario(int n) {
	if (n ==0) {
		return to_string(n);
	}
	else {
		return   decimalBinario(n / 2) + to_string(n % 2);
	}
}