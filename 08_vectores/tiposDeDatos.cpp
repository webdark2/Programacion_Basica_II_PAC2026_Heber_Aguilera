#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	// Declaración e inicialización de un vector que contiene elementos de diferentes tipos de datos
	vector<int> enteros = {1, 2, 3, 4, 5};
	vector<string> cadenas = {"hola", "mundo", "!"};
	vector<double> decimales = {3.14, 2.718, 1.618};
	
	// Imprimir los elementos del vector de enteros
	cout << "Vector de enteros: ";
	for (const auto& num : enteros) {
		cout << num << " ";
	}
	cout << endl;
	
	// Imprimir los elementos del vector de cadenas
	cout << "Vector de cadenas: ";
	for (const auto& str : cadenas) {
		cout << str << " ";
	}
	cout << endl;
	
	// Imprimir los elementos del vector de decimales
	cout << "Vector de decimales: ";
	for (const auto& decimal : decimales) {
		cout << decimal << " ";
	}
	cout << endl;
	
	return 0;
}
