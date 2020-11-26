#include "Palabras.h"



Palabras::Palabras() {
	palabraAdiv = " ";
	palabraSel = " ";

}

Palabras::Palabras(vector<string> arreglo, string palabraAdiv, string palabraSel) {

	this->arreglo = arreglo;
	this->palabraAdiv = palabraAdiv;
	this->palabraSel = palabraSel;
}


string Palabras::getPalabraSel() {
	return palabraSel;
}
string Palabras::getPalabraAdiv() {
	return palabraAdiv;
}
char Palabras::getletracom() {
	return letracom;
}
void Palabras::setPalabraSel(string sel) {
	palabraSel = sel;
}
void Palabras::setPalabraAdiv(string adiv) {
	palabraAdiv = adiv;
}
void Palabras::setletracom(char letra) {
	letracom = letra;
}
void Palabras::leer() {
	ifstream archivo("palabras.txt", ios::in);
	char linea[128];

	long contador = 0;

	if (archivo.fail())
		cout << "Error al abrir el archivo" << endl;

	else {
		while (!archivo.eof())
		{
			archivo.getline(linea, sizeof(linea));
			arreglo.push_back(linea);
			if ((++contador % 24) == 0) {
				cin.get();
			}

		}



	}
}
vector<string> Palabras::getArreglo() {
	return arreglo;
}
string Palabras::ImprimePalabras() {
	stringstream s;

	for (iterElementos = arreglo.begin(); iterElementos != arreglo.end(); iterElementos++)

		cout << *iterElementos << endl;
	return s.str();

}

void Palabras::CreaVectorPalabra() {





	arregloPa.resize(palabraSel.size());

	for (size_t i = 0; i < palabraSel.size(); i++)
		arregloPa.push_back(palabraSel[i]);



}


string Palabras::asignaPalabra(int i) {


	setPalabraSel(arreglo[i-1]);
	return palabraSel;
}




string Palabras::imprimePalabraSel() {
	stringstream s;
	for (iterLetras = arregloPa.begin(); iterLetras != arregloPa.end(); iterLetras++)
		s << *iterLetras;

	return s.str();

}
void Palabras::asignaLetracod(char letracom) {

	for (iterLetras = arregloPa.begin(); iterLetras != arregloPa.end(); iterLetras++)
		if (*iterLetras == letracom) {
			int i = distance(arregloPa.begin(), iterLetras);

			arregloCod[i] = letracom;
		}



}
bool Palabras::compara_letra(char letra) {

	if (palabraSel.find(letra) != ::string::npos) {
		return true;
	}
	else return false;
}
void  Palabras::imprimeCod() {

	for (iterLetras = arregloCod.begin(); iterLetras != arregloCod.end(); iterLetras++)
		cout << " " << *iterLetras;
}
void Palabras::CreaVecCod() {

	string palabraadiv(palabraSel.size(), '_');

	arregloCod.resize(palabraSel.size());

	for (size_t i = 0; i<palabraSel.size(); i++)
		arregloCod.push_back(palabraadiv[i]);


}
bool Palabras::CompruebaGanador() {


	if (arregloCod == arregloPa) {
		return true;
	}



}
void Palabras::mezclaVector() {
unsigned	seed = chrono::system_clock::now().time_since_epoch().count(); // semilla basada en reloj
	shuffle(arreglo.begin(), arreglo.end(),default_random_engine(seed));//se mezcla el arreglo con el random generado de la semilla
	

	
}


