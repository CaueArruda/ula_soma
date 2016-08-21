#include <iostream>
#include "byte.h"
#include "logic_sum.h"

using namespace std;

int main(){
	int ler;

	do{
		std::cout << "Digite o primeiro valor em decimal (maximo 255): "<<endl;
		cin >> ler;
	} while (ler<0 | ler >255);	
	Byte a(ler);
	std::cout << "Valor em bits: ";
	a.print_byte();

	do{
		std::cout << "Digite o segundo valor em decimal maximo 255: "<<endl;
		std::cin >> ler;
	} while (ler<0 | ler>255);

	Byte b(ler);
	std::cout << "Valor em bits: ";
	b.print_byte();

	std::cout<<"A soma dos decimais em bits eh: " << endl;

	Logic_Sum somar(a, b);

	return 0;
}