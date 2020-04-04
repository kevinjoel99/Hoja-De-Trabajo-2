#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct cole {
	int id;
	int nombre;
	float nota;
};

int main() {
	int i;
	int n = 0;
	float sumatotal = 0, media, mayor;
	string alumnos = " ";
	ostringstream ssid;
	ostringstream ssnom;
	ostringstream ssnota;
	cout << "Cuantas notas almacenara? ";
	cin >> n;
	
	cole colegio[n];

	for (i = 0; i < n; i++) {
		cout << "Ingrese identificacion de alumno: " << endl;
		cin >> colegio[i].id;
		cout << "Ingrese nombre del alumno: " << endl;
		cin >> colegio[i].nombre;
		cout << "Nota del alumno: " << endl;
		cin >> colegio[i].nota;
		sumatotal = sumatotal + colegio[i].nota;
		system("cls");
	}

	media = sumatotal / n;
	mayor = media;


	for (i = 0; i < n; i++) {
		if (colegio[i].nota > media) {
			if (colegio[i].nota > mayor) {

				ssid << colegio[i].id;
				ssnom << colegio[i].nombre;
				ssnota << colegio[i].nota;

				alumnos = alumnos + "Id:" + ssid.str() + "-Nombre:" + ssnom.str() + "-Nota:" + ssnota.str() + " / ";

				ssnom.str("");
				ssnota.str("");
				ssid.str("");
				ssnom.clear();
				ssnota.clear();
				ssid.clear();
				mayor = colegio[i].nota;
		}
		}
	}

	cout << "Nota mas alta: " << media<< endl;
	cout << "Nota media del colegio: " << alumnos.substr(0, alumnos.length() - 2) << endl;
}