#ifndef MAIN_H
#define MAIN_H
#include <iostream>

#include <sstream>

using namespace std;



class Jugador {
private:
	string nombre;
	int intentos;
public:
	Jugador();
	Jugador(string, int);
	string getNombre();
	void setNombre(string);
	int getIntentos();
	void setIntentos(int);
	string ImprimeJugador();
};
#endif

