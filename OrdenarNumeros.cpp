#include <iostream>
#include <algorithm>

using namespace std;

main(){
	int size = 10;
	int arreglo[size];
	
	cout << "Ingresa los datos del arreglo" << endl;
	
	for(int i = 0; i < size; i++){
		cin >> arreglo[i];
	}
	
	sort(arreglo, arreglo + size);
	
	for(int i = 0; i < size; i++){
		cout << arreglo[i] << " ";
	}
}
