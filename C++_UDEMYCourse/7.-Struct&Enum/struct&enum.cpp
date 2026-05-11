#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

const int NUMERO_PERSONAS = 10;
using namespace std;
int contador = 0;

enum Dia {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};
enum Mes {ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};
enum Genero {MASCULINO, FEMENINO, OTRO};

struct Persona {
	string nombre;
	string apellido;
	int edad;
	string genero;
	string dia;
	string mes;
};

Persona personas[NUMERO_PERSONAS];

void agregarPersona() {
	//Persona nueva;
	cout << "\nNombre: ";
	cin >> personas[contador].nombre;
	cout << "Apellido: ";
	cin >> personas[contador].apellido;
	cout << "Edad: ";
	cin >> personas[contador].edad;
	cout << "Genero: ";
	cin >> personas[contador].genero;
	cout << "Dia Favorito: ";
	cin >> personas[contador].dia;
	cout << "Mes Favorito: ";
	cin >> personas[contador].mes;

	cout << "\nSe ha agregado con exito a " << personas[contador].nombre << "\n" << endl;
	contador++;
}

void accederPersona() {
	int indice;

	if (contador == 0) {
		cout << "\nAun no se agrega a nadie, intentelo de nuevo. " << "\n" << endl;
	}
	else {
		cout << "\nDame el incide de la persona: "<< endl;
		cin >> indice;

		if (indice - 1 > contador) {
			cout << "\nEste Indice aun no se encuentra asignado " << "\n" << endl;
		}
		else if (indice -1 <= contador && indice > 0) {
			cout << "\nDatos de la persona:" << endl;
			cout << "Nombre: " << personas[indice-1].nombre << endl;
			cout << "Apellido: " << personas[indice - 1].apellido << endl;
			cout << "Edad: " << personas[indice - 1].edad << endl;
			cout << "Genero: " << personas[indice - 1].genero << endl;
			cout << "Dia Favorito: " << personas[indice - 1].dia << endl;
			cout << "Mes Favorito: " << personas[indice - 1].mes << "\n" << endl;
		}
		else {
			cout << "\nEl Indice ingresado no es valido." << "\n" << endl;
		}
	}
}


int main() {
	Dia dia;
	Mes mes;
	char entrada;
	bool verificar = true;
	
	do {
		cout << "Que accion deseas realizar: \n"
			<< "a) Ingresar una persona\n"
			<< "b) Acceder a los datos de una persona\n"
			<< "c) Salir del Menu\n" << endl;

		cin >> entrada;

		if (entrada == 'c') {
			verificar = false;
			cout << "\nAdios, tenga buen dia." << endl;
		}
		else {
			if (entrada == 'a') {
				agregarPersona();
			}
			else if (entrada == 'b') {
				accederPersona();
			}
			else {
				cout << "\nERROR. Su entrada no es valida, intentelo de nuevo." << endl;
			}
		}


	} while (verificar);





	return 0;
}