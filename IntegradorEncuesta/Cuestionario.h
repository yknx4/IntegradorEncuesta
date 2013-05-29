#ifndef CUESTIONARIO_H
#define CUESTIONARIO_H
#include "Preguntas.h"
#include <vector>

class Cuestionario
{
public:
	Cuestionario();
	~Cuestionario();
	bool GuardarCuestionario();
	void hacerPreguntas();
	void addPregunta(Pregunta);
private:
	std::vector <Pregunta> preguntas;
	
};


#endif
