//#include "converter.h"
#include "byte.h"
//void Converter::convD2B(int number_int){
void Byte::convD2B(int number_int){
    int k, i;

    for (i = 0; i <= 8 ; i++){
        k = number_int >> i;
        if (k & 1){
        	binario[i] = 1;
        }else{
	binario[i] = 0;
        }
    }
}
	