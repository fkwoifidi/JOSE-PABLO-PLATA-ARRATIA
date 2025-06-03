#include <iostream>

using namespace std;
float pi = 3.1416;

float calcularArea(float radio){
	return pi * (radio * radio);
}

float calcularPerimetro(float radio){
	return 2 * pi * radio;
}

main(){
	char opcion;
	float radio;
	
	cout << "Ingresa el radio del circulo: ";
	cin >> radio;
	
	while(opcion != 's' || opcion != 'S'){
		cout << endl << "Selecciona que deseas calcular: " << endl << "(A)Area" << endl << "(P)Perimetro" << endl << "(S)Salir" << endl;
		cin >> opcion;
	
		if(opcion == 'a' || opcion == 'A'){
			cout << "El area del circulo es: " << calcularArea(radio) << endl;
		}
		else if(opcion == 'p' || opcion == 'P'){
			cout << "El perimetro del circulo es: " << calcularPerimetro(radio) << endl;
		}
		else if(opcion == 's' || opcion == 'S'){
			break;
		}
	}
}
