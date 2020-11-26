#include "jugador.h"


Jugador::Jugador() {

	nombre = " ";
	intentos = 7;
}

Jugador::Jugador(string nombre, int intentos) {

	this->nombre = nombre;
	this->intentos = intentos;
}
string Jugador::getNombre() {
	return nombre;
}
void Jugador::setNombre(string nom) {
	nombre = nom;
}
int Jugador::getIntentos() {
	return intentos;
}
void Jugador::setIntentos(int inten) {
	intentos = inten;
}
string Jugador::ImprimeJugador() {
	stringstream s;

	s << "Nombre : " << nombre << endl;
	s << "Intentos: " << intentos << endl;

	return s.str();
}
