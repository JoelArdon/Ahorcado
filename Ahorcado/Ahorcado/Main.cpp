#include "Jugador.h"
#include "Palabras.h"
#include <cstdlib> 
#include<conio.h>

int main() {
	Jugador *jugador = new Jugador();

	Palabras *palabras = new Palabras();

	/*palabras->leer();
	palabras->asignaPalabra();
	palabras->CreaVectorPalabra();
	palabras->CreaVecCod();
	palabras->imprimeCod();
	palabras->asignaLetracod('a');
	palabras->imprimeCod();

	system("pause");
	*/

	unsigned int opc;
	string nombre;
	char letra;
	
	system("pause");
	do {
		system("color 0F");
		
		system("cls");
		cout << " 1)Comenzar juego \n 2) Salir " << endl;
		cout << "Ingrese una opcion" << endl;
		cin >> opc;



		
		
		


		if (opc = 1) {
			int num;
			cout << "Por favor ingrese su nombre" << endl;
			cin >> nombre;
			Jugador *jugador = new Jugador(nombre,7);
			jugador->setNombre(nombre);
			cout << jugador->ImprimeJugador();
			palabras->leer();
		
			cout << "Posible lista de palabras" << endl;
			cout << palabras->ImprimePalabras();
			palabras->mezclaVector();
			cout << "Ingrese un numero entre 1 y 29 para escoger su palabras, NOTA: el numero no hace referencia al orden actual"<< endl;
			cin >> num;
			palabras->asignaPalabra(num);
			palabras->CreaVectorPalabra();
			palabras->CreaVecCod();
			
			system("cls");
			do {
			
				cout << endl;
				cout << jugador->getIntentos();
				cout << "Ingrese la letra"<< endl;
				cin >> letra;
				if (cin.fail() && cin.rdstate())
					cout << "ERROR";
				cout << jugador->ImprimeJugador() << endl;

				if (palabras->compara_letra(letra)) {
					palabras->asignaLetracod(letra);
					if (palabras->CompruebaGanador()) {

						cout << "Felicidades has ganado con la palabra" << " " << palabras->getPalabraSel() << endl;
						system("color 1A");
						system("pause");
						break;
					}
				
				}
				if (jugador->getIntentos() == 0) {
					cout << "PERDISTE con la palbra" << " " << palabras->getPalabraSel() << endl;
					jugador->setIntentos(jugador->getIntentos() - 1);
					system("color 4C");
					system("pause");
					break;
				}

				else
					if (!palabras->compara_letra(letra)) {
						jugador->setIntentos(jugador->getIntentos() - 1);
					}
				system("cls");
				cout << jugador->ImprimeJugador() << endl;
				palabras->imprimeCod();

			} while (jugador->getIntentos() != -1);
			

		
		
		}

		



	} while (opc != 2);


	system("pause");


}

