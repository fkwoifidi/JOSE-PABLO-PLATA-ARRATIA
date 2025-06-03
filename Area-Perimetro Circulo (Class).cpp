#include <iostream>
#include <String>

using namespace std;

class Circulo{
	private:
		float pi = 3.1416;
	public: 
		float radio;
		
	float Area(){
		return pi * (radio * radio);
	}
	float Perimetro(){
		return 2 * pi * radio;
	}
};

main(){
	Circulo circulo;
	string opcion;
	float radio;
	
	cout << "Ingresa el radio del circulo: ";
	cin >> circulo.radio;
	
	while(opcion != "s" || opcion != "S"){
		cout << endl << "Selecciona que deseas calcular: " << endl << "(A)Area" << endl << "(P)Perimetro" << endl << "(S)Salir" << endl;
		cin >> opcion;
	
		if(opcion == "a" || opcion == "A"){
			cout << "El area del circulo es: " << circulo.Area() << endl;
		}
		else if(opcion == "p" || opcion == "P"){
			cout << "El perimetro del circulo es: " << circulo.Perimetro() << endl;
		}	
	}
}
