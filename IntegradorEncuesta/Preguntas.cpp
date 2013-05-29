#include "stdafx.h"
#include "Preguntas.h"
#include <sstream>

using namespace std;

Pregunta::Pregunta( std::string pregunta )
{
	this->pregunta=pregunta;
}

Pregunta::~Pregunta()
{

}

void Pregunta::responder()
{
	//cin.ignore();
//	this->imprimirPregunta();
	cin.getline(respuesta,512);
}

void Pregunta::imprimirPregunta()
{
	cout<<"\n>> "<<pregunta<<": ";
}

std::string Pregunta::getRespuesta()
{
	return *(new string(respuesta));
}

Pregunta1a10::Pregunta1a10( std::string input) : Pregunta(input)
{

}

Pregunta1a10::~Pregunta1a10()
{

}

void Pregunta1a10::responder()
{
//	imprimirPregunta();
__super::responder();
cout<<respuesta<<"res\n";
istringstream ss(respuesta);
int x;
if (!(ss >> x)) {
	cout<<"Numero Invalido\n";
	responder();
}
	/*
	istringstream ss(argv[1]);
	int x;
	if (!(ss >> x))
	cerr << "Invalid number " << argv[1] << '\n';*/

}

void Pregunta1a10::imprimirPregunta()
{
	//Pregunta::imprimirPregunta();
	__super::imprimirPregunta();
	cout<<" (1 a 10) | ";
}
