#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

void menu();

int main() {
	menu();
	system("pause");
}

void menu() {
	int opcion = 0;
	while (opcion != 3) {
		system("cls");
		cout << "***MENU***" << endl;
		cout << "1 - Ingresar Productos" << endl;
		cout << "2 - Leer Archivo y Mostrar en Pantalla los Productos de Nivel Minimo" << endl;
		cout << "3 - Salir" << endl;
		cout << "INGRESE SU OPCION: "; cin >> opcion;
		cout << endl;

		switch (opcion) {
		case 1:
			if (opcion == 1) {
				int n = 0, codigo, nivelmin, nivelact;
				string proveedor;
				float preciopro;
				ofstream archivo;
				archivo.open("STOCK.txt", ios::app);
				if (archivo.fail()) {
					cout << "EL ARCHIVO FALLO" << endl;
					exit(1);
				}
				system("cls");
				cout << "***HACER PEDIDO***" << endl;
				cout << "Ingrese Codigo del Producto: "; cin >> codigo;
				cout << "Ingrese Nivel Minimo: "; cin >> nivelmin;
				cout << "Ingrese Nivel Actual: "; cin >> nivelact;
				cout << "Ingrese Nombre de Proveedor: "; cin >> proveedor;
				cout << "Ingrese Precio del Producto: Q."; cin >> preciopro;
				cout << endl;
				archivo << "Codigo" << setw(15) << "Nivel Min" << setw(15) << "Nivel Act" << setw(15) << "Proveedor" << setw(15) << "Precio Q." << endl;
				archivo << codigo << setw(15) << nivelmin << setw(15) << nivelact << setw(15) << proveedor << setw(15) << preciopro << endl;
				archivo.close();
				system("pause");
			}
		case 2:
			if (opcion == 2) {
				system("cls");
				ifstream archivo;
				string aux;
				archivo.open("STOCK.txt", ios::in);
				if (archivo.fail()) {
					cout << "EL ARCHIVO FALLO" << endl;
					exit(1);
				}
				while (!archivo.eof()) {
					getline(archivo, aux);
					cout << aux << endl;
				}
				archivo.close();
				system("pause");
			}
		case 3:
			if (opcion == 3) {
				system("cls");
				cout << "---Saliendo Del Programa---" << endl;
				break;
			}
		}
	}
}
