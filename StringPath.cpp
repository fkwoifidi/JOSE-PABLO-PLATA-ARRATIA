#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;

main(){
	string texto;
	stack<char> lifo;
	string inicio = "S1";
	
	map<string, map<char, string> > caminos;
	
	caminos["S1"]['a'] = "S2";
	
	caminos["S2"]['a'] = "S2";
	caminos["S2"]['c'] = "S4";
	caminos["S2"]['b'] = "S1";
		
	caminos["S3"]['b'] = "S4";
	caminos["S3"]['a'] = "S1";
	
	caminos["S4"]['d'] = "S3";
	
	caminos["S4"]['a'] = "S5";
	
	cout << "Ingresa el texto: ";
	cin >> texto;
	
	for(size_t i = 0; i < texto.length(); ++i){
		lifo.push(texto[i]);
	}
	
	while(!lifo.empty()){
		char letra = lifo.top();
		lifo.pop();
		
		if(caminos[inicio].count(letra)){
			inicio = caminos[inicio][letra];
			cout << letra << " avanzo a: " << inicio << endl;
		}
		else{
			cout << letra << " no puede avanzar." << endl;
			cout << "El texto se queda en: " << inicio;
			break;
		}
	}
}
