#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void menu() {
    cout << "---- MENU PRINCIPAL ---- \n\n" << "Opcion 1: Palabra mas larga \nOpcion 2: Rotacion de matriz \nOpcion 3: SALIDA \n" << "Ingrese la opcion que desea acceder: ";
}

int main(){
    int opcion;
    do {
        menu();
        cin >> opcion;
        cout << endl;
        char oracionin[100];
        char* chptr = strtok(oracionin, " ");
        vector<string> tokens;
        switch (opcion) {
            case 1:
                cout << "Ingrese una oracion: ";
                cout << endl;
                cin >> oracionin;
                cout << oracionin;
                while (chptr != nullptr) {

                }

                break;
        }
        char salir;
        cout << "Desea seguir utilizando el programa [S/N]: ";
        cin >> salir;
        if (salir == 'n' || salir == 'N') {
            opcion == 3; 
        }

    } while (opcion != 3);
}

