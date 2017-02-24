#include "Series.h"

int main()
{
	//variables
	int n; 
	//Pide un numero para hacer las operaciones
	std::cout<< "Ingrese un entero"<<std::endl;
	//Lee un numero desde el teclado
	std::cin>>n; 
	//Objeto s de la clase Series
	Series s(n);
	//Se llaman a los metodos y se imprimen los resultados
	std::cout<<s.fibonacciIt()<<std::endl;
	std::cout<<s.fibonacciRec(n)<<std::endl;
	std::cout<<s.factorialIt()<<std::endl;
	std::cout<<s.factorialRec(n)<<std::endl;

	return 0;
}
