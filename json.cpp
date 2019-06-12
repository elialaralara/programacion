//UNIVERSIDAD POLITECNICA DE TULANCINGO
//PROF: ARTURO NEGRETE MEDELLIN
//ALUMNA:ELIA AMOR LARA CABAÑAS
//MATRICULA:1830995
//3ER CUATRIMESTRE
//PRIMER PARCIAL
#include<Windows.h>
#include<nlohmann/json.hpp>
#include<iostream>
using namespace std;
using json=lohmann::json
{
json j;
j["Pi"]=3.1415;
j["feliz"]=true;
j["nombre"]="pedro";
j["vacio"]=nullptr;
 
j["nuevo"]["valor"]=25;
j["lista"]={1, 0, 3};
j["nuevo"]["lista"]={0, 1, 2, 3,};
j["objeto"]={{"moneda", "USD"}{"valor", 1891}};
cout<<j<<endl;

{

	json j2={{"P, i", 3.141592}},
	{"feliz", true},
	{"nombre","Pedro"},
	{"vacio",nullptr},
	{"nuevo",{{"valor",25}}},
	{"lista",{1, 0, 3}},
	{"objeto",{{"moneda","USD"},{"valor",1891}};
	cout<<j2<<endl;
	};


