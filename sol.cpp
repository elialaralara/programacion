#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<fstream>
using namespace std;
class persona
{
private:
		string nombre;
		int edad;
		string genero;
		string direccion;
		int telefono;
		string email;
public:
	persona(string,int,string,string,int,string);
		void nombre1();

};
persona::persona(string _nombre,int _edad,string _genero,string _direccion,int _telefono, string _email)
{
	nombre= _nombre;
	edad= _edad;
	genero= _genero;
	direccion= _direccion;
	telefono= _telefono;
	email= _email;
}
void persona::nombre1()
{
	string M="M";
	string fem="femenino";
	string mas="masculino";
	if(genero==M)
	{
		genero=fem;
	}
	else
	{
		genero=mas;
	}
	cout<<"***************************************************"<<endl;
    cout<<"nombre: "<<nombre<<endl;
	cout<<"edad: "<<edad<<endl;
	cout<<"genero: "<<genero<<endl;
	cout<<"direccion: "<<direccion<<endl;
	cout<<"telefono: "<<telefono<<endl;
		cout<<"correo: "<<email<<endl;
}

int main()
{
	fstream archivo;
	archivo.open("babita.txt", ios::in);
if (archivo.is_open())
	 {
		string nombre2;
		int edad2;
		string genero2;
		string direccion2;
		int telefono2;
		string email2;
        while (!archivo.eof())
		 {
			archivo >> nombre2 >> edad2 >> genero2 >> direccion2 >> telefono2 >> email2;
		}
}
	persona p1= persona(nombre2,edad2,genero2,direccion2,telefono2,email2);
	p1.nombre1();
	_getch();
}


