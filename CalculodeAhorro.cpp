#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

main(){
	//Caso 1
	double ingresoMensual = 1000;
	double interes = 0.03;
	int years = 10;
	int meses = years * 12;
	
	double resultado = ingresoMensual * ((pow(1 + interes, meses) -1) / interes);
	
	cout << fixed << setprecision(2);
	cout << "El total de dinero ahorrado en " << years << " años con ingresos mesuales de " << ingresoMensual << " pesos con un interes mensual del 3% es: " << resultado << endl;
	
	//Caso 2
	ingresoMensual = 15000;
	interes = 0.037;
	years = 15;
	meses = years * 12;
	
	resultado = ingresoMensual * ((pow(1 + interes, meses) -1) / interes);
	cout << "El total de dinero ahorrado en " << years << " años con ingresos mesuales de " << ingresoMensual << " pesos con un interes mensual del 3.7% es: " << resultado << endl;
}
