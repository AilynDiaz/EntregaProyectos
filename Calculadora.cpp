#include <iostream>

//definir el namespace
using namespace std;

//definir las clases
class calculadora {
	//definir metodos publicos
	public: 
		int Calcular (int, char, int);
		
};

int main() {
	//definir variables
	char operador;
	int Numero1, Numero2, resultado;
	calculadora objCalculadora;

		
	// solicitar valores
	cout << "ingrese los valores por ejemplo (1+1)"<< endl;
	cin>> Numero1>> operador >> Numero2;
	
	// se retorna en resultado la operacion del objeto
	resultado= objCalculadora.Calcular (Numero1,operador,Numero2);
	cout<< "el resultado es: " << resultado << endl;
	return 0;
	}

// definir el metodo publico de las clases
int calculadora:: Calcular(int intNumero1, char chrOperador, int intNumero2) {
	switch(chrOperador) {
		case '+':
			return intNumero1 + intNumero2;
		case '-':
			return intNumero1 - intNumero2;
		case '*':
			return intNumero1 * intNumero2;
		case '/':
			if (intNumero2 > 0) 
			return intNumero1 / intNumero2;
				else
				cout<< "error, el numero debe der mayor que cero" << endl;
		default:
			return 0;
	}
}











