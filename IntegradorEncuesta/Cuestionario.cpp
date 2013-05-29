#include "stdafx.h"
#include "Cuestionario.h"
#include "Preguntas.h"
#include <vector>
using namespace std;
Cuestionario::Cuestionario()
{
	
}

Cuestionario::~Cuestionario()
{

}

bool Cuestionario::GuardarCuestionario()
{
	return true;
}

void Cuestionario::hacerPreguntas()
{
	int numeroPreguntas = this->preguntas.size();
	for (int contadorPreguntas=0;contadorPreguntas<numeroPreguntas;contadorPreguntas++)
	{
		preguntas[contadorPreguntas].imprimirPregunta();
		preguntas[contadorPreguntas].responder();
	}
}

void Cuestionario::addPregunta(Pregunta input){
	preguntas.push_back(input);

}


