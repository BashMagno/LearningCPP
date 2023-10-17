#include <iostream>
#include <sstream>
using namespace std;

	//Creamos varias estructuras
	struct {
		string nombre;
		string apellido;
		int edad;
		double altura;
	} persona;

	const struct Coordenadas {
		float x;
		float y;
		float z;
	};

void referencias(Coordenadas &punto)
{
	punto.x = 25.5;
	punto.y = 50;
	punto.z = -30;

	cout << "Puntos: " << punto.x << " x | " << punto.y << "y | " << punto.z << "z |";
}

int main()
{


	//Añadimos valores a la estructura
	persona.nombre = "Bash";
	persona.apellido = "Magno";
	persona.edad = 19;
	persona.altura = 1.86;

	cout <<		"Mi nombre es: "	<< persona.nombre	<<		"\n";
	cout <<		"Mi apellido es: "	<< persona.apellido	<<		"\n";
	cout <<		"Mi edad es: "		<< persona.edad		<<		"\n";
	cout <<		"Mi altura es: "	<< persona.altura	<<		"\n";

	Coordenadas instance;
	referencias(instance);
}