
#ifndef PREGUNTAS_H
#define PREGUNTAS_H
#include <string>
class Pregunta
{
public:
	Pregunta(std::string);
	~Pregunta();
	virtual void responder();
	virtual void imprimirPregunta();
	std::string getRespuesta();
private:
	std::string pregunta;
protected:
	char respuesta[512];
};

class Pregunta1a10 : public Pregunta
{
public:
	Pregunta1a10(std::string);
	~Pregunta1a10();
	void responder();
	void imprimirPregunta();
private:
};

class PreguntaOpcMult : Pregunta
{
public:
	PreguntaOpcMult(std::string,std::string);
	~PreguntaOpcMult();
	void responder();
	void imprimirPregunta();
private:

};


#endif