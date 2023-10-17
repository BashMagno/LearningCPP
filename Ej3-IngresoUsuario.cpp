#include <iostream>
using namespace std;

int main()
{
	string nombre, apellido;
	int edad;
	float altura;


	cout << "Ingrese su nombre\n";
	cin >> nombre;
	cout << "Ingrese su apellido\n";
	cin >> apellido;
	cout << "Ingrese su edad\n";
	cin >> edad;
	cout << "Ingrese su altura en metros (1.80)\n";
	cin >> altura;

	cout << "Buenas " << nombre << ", " << apellido << ". Usted tiene " << edad << " años de edad y mide " << altura << "m. ";

	return 0;
}