//UNIVERSIDAD POLITECNICA DE TULANCINGO
//PROF: ARTURO NEGRETE MEDELLIN
//ALUMNA:ELIA AMOR LARA CABAÑAS
//MATRICULA:1830995
//3ER CUATRIMESTRE
//PRIMER PARCIAL

#include <string>
#include<iostream>
using namespace std;
int main()
{

	string cadena, token;
	cout<<"captura una cadena: ";
	getline(cin, cadena);
	//cout<<"la cadena mide: "<<cadena.length()<<"bytes."<<endl;
	string delimita=" ";
	size_t pos=0;
	while((pos=cadena.find(delimita))!= string::npos)
	{
		token=cadena.substr(0,pos);
		cout<<token<<endl;
		cadena.erase(0,pos+delimita.length());
	}
	cout<<cadena;
	return 0;
}
//HOMEWORK  armar un arrelo para que me lo compile odo junto en la parte de abajo
