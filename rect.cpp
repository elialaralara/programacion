#include<conio.h>
#include<iostream>
using namespace std;
class rectangulo
{
	double alto;
	double ancho;
public:
	rectangulo(double,double);
	double area();
};
rectangulo::rectangulo(double h, double i)
{
	ancho=i;
	alto=h;
}
double rectangulo::area()
{
	return alto*ancho;
}
class para
{
	double longitud;
	rectangulo base;
public:
	para(double,double,double);
	double volumen();
};
	para::para(double h,double l, double a)
	{
		rectangulo pivote(h,l);
		base =pivote;
		longitud =a;
	}

	int main()
	{
		rectangulo figura (3,4);
		cout<<"el area es:"<<figura.area()<<endl;
		rectangulo otrafig(5,5);
		cout<<"el area es:"<<otrafig.area()<<endl;
		_getch();
	}

