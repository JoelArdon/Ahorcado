#ifndef PALABRAS_H
#define PALABRAS_H
#include <vector>  //Librería que contiene la plantilla vector

#include <algorithm>  // Utilerías para trabajos comunes con estructuras de datos

#include <ctime>  // Biblioteca para funciones relacionadas con fecha y hora

#include <cstdlib>  // Diversas utilerías del lenguaje - biblioteca standar de C
#include <iostream>
#include <sstream>
#include<fstream>
#include <string>
#include<random>
#include<chrono>
#include<cstring>

using namespace std;

class Palabras {
private:
	vector<string> arreglo;
	vector<char> arregloPa;
	vector<char> arregloCod;
	string palabraSel;
	string palabraAdiv;
	char letracom;
	vector<string>::iterator iterElementos;
	vector<char>::iterator  iterLetras;
	vector<char>::iterator  iterLetras2;

	vector<string>::const_iterator constIterElementos;

	vector<string>::size_type tipoTam;

public:

	Palabras();
	Palabras(vector<string>, string, string);
	string asignaPalabra(int i);
	void CreaVectorPalabra();
	void CreaVecCod();
	string imprimePalabraSel();
	string getPalabraSel();
	string getPalabraAdiv();
	vector<string> getArreglo();
	char getletracom();
	void setPalabraSel(string);
	void setPalabraAdiv(string);
	void setletracom(char);
	bool compara_letra(char);
	void  asignaLetracod(char letracom);
	void leer();
	bool CompruebaGanador();
	void imprimeCod();
	int cuenta_vidas();
	void mezclaVector();
	string ImprimePalabras();




};

#endif
