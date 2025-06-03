#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main(){
    ifstream archivo("archivo.txt");

    if (archivo.is_open()) {
        cout << "Archivo abierto correctamente.\nContenido:\n";

        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }

        archivo.close();
    } else {
        cerr << "Error: No se pudo abrir el archivo." << endl;
    }
}

