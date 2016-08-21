#ifndef LOGIC_SUM_H_INCLUDED
#define LOGIC_SUM_H_INCLUDED

#include "logic_port.h"
#include "byte.h"

class Logic_Sum{
private:
	Logic_Port _soma; 		//cria uma porta logica
public:
	//Logic_Sum();			//construtor default

	Logic_Sum(Byte a, Byte b);	//construtor com parametros
	
	void somador(Byte a, Byte b);	// faz a soma bit por bit setando os valores de entrada na porta logica




};
#endif