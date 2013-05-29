// IntegradorEncuesta.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Preguntas.h"
#include "Cuestionario.h"
#include <sstream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	/*istringstream ss("456");
	int x;
	if (!(ss >> x)) {
		cout<<"Numero Invalido\n";
	}*/

	Pregunta prueba("El rafa!");
	Pregunta1a10 prueba2("El carlitos!");
	Cuestionario cuestionario;
	cuestionario.addPregunta(prueba);
	cuestionario.addPregunta(prueba2);
	cuestionario.hacerPreguntas();
	return 0;
}

