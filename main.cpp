#include <iostream>
#include <vector>
#include <string.h>

#include "Playlist.h"
#include "Funciones.h"

using namespace std;

int main() {
	int opc,opc2,cant;
	string error1 = "Lista de Reproduccion Vacia";
	string error2 = "DEBE SELECCIONAR UNA LISTA DE REPRODUCCION PRIMERO";
	vector<Cancion> rocola;
	llenarRocola(&rocola);

	PlayList lista1("lista 1"), listaFavoritos("Favoritos"), listaLatinos("Latinos");
	vector<PlayList*> Mislistas = { &lista1, &listaFavoritos, &listaLatinos };

	PlayList* currentlist = nullptr, * currentlist2 = nullptr;

	do {
		system("cls");
		cout << "		SELECCIONE UNA ACCION" << endl;
		cout << "1.-Seleccione una lista " << endl;
		cout << "2.-Mostrar una lista" << endl;
		cout << "3.-Agregar cancion" << endl;
		cout << "4.-Eliminar cancion" << endl;
		cout << "5.-Importar lista" << endl;
		cout << "6.-Clonar lista" << endl;
		cout << "7.-salir" << endl;
		cout << "(opc):";
		cin >> opc;
		if (opc == 1)
			currentlist = seleccionar_lista(Mislistas);
		if (currentlist != nullptr || opc == 7) {
			switch (opc)
			{
			case 2:

				if (currentlist->getListaCanciones().size() != 0)
					currentlist->verLista();
				else
					error(error1);

				break;
			case 3:

				mostrarRocola(&rocola);
				cout << "\nSE REALIZARA LAS ACCIONES EN LA LISTA: " << currentlist->getNombrelista() << "\n" << endl;
				cout << "Indique la cantidad de canciones que desea introducir: \n (Cantidad)= ";
				cin >> cant;
				for (int i = 0; i < cant; i++) {
					cout << "introduzca el indice de la cancion de rocola a introducir: ";
					cin >> opc2;
					if (opc2 < rocola.size())
						currentlist->agregarCancion(rocola[opc2 - 1]);
				}

				break;
			case 4:

				if (currentlist->getListaCanciones().size() != 0) {
					currentlist->verLista();
					cout << "INTRODUZCA EL INDICE DE LA CANCION A ELIMINAR" << endl;
					cin >> opc2;
					currentlist->eliminar_Cancion(opc2);
				}
				else
					error(error1);

				break;
			case 5:

				cout << "SE REALIZARA LAS ACCIONES EN LA LISTA: " << currentlist->getNombrelista() << endl;
				cout << "Que lista quiere agregar a la actual" << endl;
				currentlist2 = seleccionar_lista(Mislistas);
				currentlist->importar(*currentlist2);

				break;
			case 6:

				cout << "SE REALIZARA LAS ACCIONES EN LA LISTA: " << currentlist->getNombrelista() << endl;
				cout << "Que lista quiere clonar" << endl;
				currentlist2 = seleccionar_lista(Mislistas);
				currentlist->clonarlista(*currentlist2);

				break;
			case 7:
				exit(0);
			}
		}
		else
			error(error2);

		if (opc < 1 || opc > 7)
			error("\n		OPCION INVALIDA\n");
		if (opc != 7)
			cout << "\nPresione enter para volver al menu\n";
		(void)getchar();
		(void)getchar();
		
	} while (opc != 7);
	return 0;
}