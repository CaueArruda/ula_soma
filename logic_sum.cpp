//#include "logic_sum.h"
#include "logic_sum.h"



//Logic_Sum::Logic_Sum(){}

Logic_Sum::Logic_Sum(Byte a, Byte b){
	Logic_Sum::somador(a, b);
}
void Logic_Sum::somador(Byte a, Byte b){
	Byte c;
	for (int i = 0; i<=7; i++){
		
		_soma.set_ent(a.show_binario(i), b.show_binario(i));
		c.set_binario(i, _soma.soma());
		//c.set_overflow(_soma.return_carry());
	}
	if (_soma.return_carry() == 1){ c.print_overflow(); c.print_byte();
	}else{
	c.print_byte(); }

}
