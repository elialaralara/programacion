#include<string>
#include<sstream>
#include<fstream>
#include<iostream>
using namespace std;
string capturaTxt()
{
	stringstream ss;
	string nombre, materno, paterno;
	int edad;
	double peso;
	double estatura;
	{
		for(int i=0;i<=4;i++)
	{
		
		cout<<"ingresa tu nombre"<<endl;
		cin>>nombre;
		cout<<"ingresa tu apellido paterno"<<endl;
		cin>>paterno;
		cout<<"ingresa tu apellido materno"<<endl;
		cin>>materno;
		cout<<"ingresa tu edad"<<endl;
		cin>>edad;
		cout<<"ingresa tu peso"<<endl;
		cin>>peso;
		cout<<"ingresa tu estatura"<<endl;
		cin>>estatura;
		ss<<nombre<<paterno<<" " <<materno<<" "<<","<<edad<<","<<estatura<<","<<peso<<endl;
		}
	return ss.str();
}
string leeTxt(string archivo)
{
	string texto, linea;
	fstream miArchivo(archivo);
	if(miArchivo.is_open())
	{
		texto="";
		while(getline(miArchivo,linea)
		{
			texto+=linea;
		}
		miArchivo.close();
	}
	return texto;
}
bool escribeTxt(string archivo, string txt)
{
	bool resu =false;
	ofstream elArchivo(archivo);
	if(elArchivo.is_open())
	{
		elArchivo<<txt;
		elArchivo.close();
		resu =true;
	}
	return resu;
}
	
