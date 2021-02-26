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
	objCalculadora.Calcular (Numero1,operador,Numero2);
	return 0;
	}

// definir el metodo publico de las clases
int calculadora:: Calcular(int intNumero1, char chrOperador, int intNumero2)
 {
 	int resultado;
	switch(chrOperador)
	 {
		case '+':
			resultado = intNumero1 + intNumero2;
			cout<< "el resultado es: " << resultado << endl;
		case '-':
			resultado= intNumero1 - intNumero2;
			cout<< "el resultado es: " << resultado << endl;
		case '*':
			resultado= intNumero1 * intNumero2;
			cout<< "el resultado es: " << resultado << endl;
		case '/':
			
			if (intNumero2 > 0) 
			{
				resultado= intNumero1 / intNumero2;
				cout<< "el resultado es: " << resultado << endl;
			}
				else
				{
				cout<< "error, el numero debe der mayor que cero " << endl;
				return 0;
				}
		default:
			return 0;
	}
}
