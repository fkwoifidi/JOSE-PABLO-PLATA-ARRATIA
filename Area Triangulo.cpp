#include <iostream>

using namespace std;

main(){
	float base, altura, area;
	char opcion;
	
	while(opcion != 'n'){
		cout << "Ingresa la base del triangulo: ";
		cin >> base;
	
		cout << "Ingresa la altura del triangulo: ";
		cin >> altura;
		
		area = base * altura / 2;
		cout << "El area del triangulo es: " << area << endl;
		
		cout << "Quieres volver a calcular el area de un triangulo? (y)yes (n)no: ";
		cin >> opcion;
	}	
}



