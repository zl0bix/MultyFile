#include<iostream>
#include "Function.h"
#include"Structures.h"
#include"Data.h"


int main() {
	setlocale(LC_ALL, "rus");
	int n, m;
	//библиотека с функциями
	/*
	std::cin >> n >> m;

	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	hi();

	const int size1 = 5;
	int arr[size1]{ 1,2,3,4,5 };
	print_arr(arr, size1);
	*/
	//библиотека со структурой и функцией для работы с ней
	/*person p1{
		"Tom Smith",
		26,
		"programer",
		80000
	};

	print_person(p1);

	person p2 = input_person();
	print_person(p2);
	*/
	
	_A = 15;
	std::cout <<"A = " << _A << std::endl;
	std::cout << "Pi = " << _PI << std::endl;
	std::cout << "E = " << _E << std::endl;
	print_arr(_ARR, _ARR_SIZE);
	std::cout << std::endl;
	show_pi();

	return 0;
}