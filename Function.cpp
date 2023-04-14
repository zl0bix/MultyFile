#include "Function.h"
#include <iostream>
//#include "data.h"

extern const double _PI = 3.14;



double sum(double num1, double num2) {
	return num1 + num2;
}

void hi(){
	std::cout << "Hello world" << std::endl;
}
void show_pi() {
	std::cout << "„исло пи = " << _PI << std::endl;
}

