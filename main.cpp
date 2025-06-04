/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void esperar(int ciclos, int minutos) {
    cout << "Esperando " << minutos << " minutos..." << endl;
    for (long long i = 0; i < ciclos * 10000000; ++i) {}
}

void etapa(string nombre, string accion, int ciclos, int minutos) {
    cout << "[" << nombre << "] " << accion << endl;
    esperar(ciclos, minutos);
    cout << "[" << nombre << "] Finalizado.\n" << endl;
}

void ejecutarCiclo(string plan) {
    if (plan == "regular") {
        etapa("REMOJO", "Luz encendida, bomba (entrada)", 2, 20);
        etapa("ENJUAGUE", "Luz encendida, agitación", 2, 20);
        etapa("DRENADO", "Luz encendida, bomba (salida)", 1, 5);
        etapa("SECADO", "Luz encendida, agitación", 1, 10);
    }
    else if (plan == "delicado" || plan == "super delicado") {
        etapa("REMOJO", "Luz encendida, bomba (entrada)", 3, 30);
        etapa("ENJUAGUE", "Luz encendida, agitación", 3, 30);
        etapa("DRENADO", "Luz encendida, bomba (salida)", 1, 5);
        if (plan == "super delicado") {
            cout << "[SUPER DELICADO] Tiempo adicional de cuidado..." << endl;
            esperar(1, 5);
            cout << "[SUPER DELICADO] Finalizado.\n" << endl;
        } else {
            etapa("SECADO", "Luz encendida, agitación", 2, 20);
        }
    } else {
        cout << "Plan inválido. Usa 'regular', 'delicado' o 'super delicado'.\n" << endl;
    }
}

int main() {
    string plan, continuar;
    cout << "Jose Pablo Plata Arratia - Simulación Lavadora \n" << endl;

    while (true) {
        cout << "Selecciona plan (regular / delicado / super delicado): ";
        getline(cin >> ws, plan);

        cout << "\nIniciando ciclo: " << plan << "\n" << endl;
        ejecutarCiclo(plan);

        cout << "¿Quieres realizar otro ciclo? (sí / no): ";
        getline(cin >> ws, continuar);
        if (continuar != "sí" && continuar != "si") {
            cout << "\n👋 ciclo finalizado" << endl;
            break;
        }
    }

    return 0;
}
