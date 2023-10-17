#include <iostream>
#include <sstream>
using namespace std;

	//Creamos varias estructuras
	struct {
		string nombre;
		string apellido;
		int edad;
		double altura;
	}persona;

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
	string &nombre = persona.nombre;
	persona.apellido = "Magno";
	string &apellido = persona.apellido;
	persona.edad = 19;
	int &edad = persona.edad;
	persona.altura = 1.86;
	double &altura = persona.altura;

	cout <<		"Mi nombre es: "	<< nombre	<<		"\n";
	cout <<		"Mi apellido es: "	<< apellido	<<		"\n";
	cout <<		"Mi edad es: "		<< edad		<<		"\n";
	cout <<		"Mi altura es: "	<< altura	<<		"\n";

	Coordenadas instance;
	referencias(instance);
}
