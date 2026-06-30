#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Declaración e inicialización de un vector vacío
	vector<int> miVector = { 23, 45};
	
	// Agregar elementos al vector utilizando push_back()
	miVector.push_back(67);
	miVector.push_back(29);
	miVector.push_back(30);

    miVector.pop_back(); // Elimina el último elemento del vector --30
   miVector.size(); // Devuelve el número de elementos en el vector --5
   miVector.clear(); // Elimina todos los elementos del vector, dejándolo vacío
   miVector.empty(); // Devuelve true si el vector está vacío, false en caso contrario
   miVector.printf(); // Imprime los elementos del vector
	
	// Imprimir los elementos del vector
	for (int i = 0; i < miVector.size(); ++i) {
		std::cout << miVector[i] << " ";
	}
	cout << endl;
	
	return 0;
}
/*En este ejemplo, push_back() se utiliza para agregar los elementos 10, 20 y 30 al final del vector miVector.
No necesitamos preocuparnos por la capacidad inicial del vector ni por redimensionarlo manualmente. 

La función push_back() se encarga de todo eso de forma transparente.*/