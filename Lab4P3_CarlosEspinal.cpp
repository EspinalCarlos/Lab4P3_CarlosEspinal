#include <iostream>
#include <vector>
#include <string>



using namespace std;

void menu() {
    cout << "---- MENU PRINCIPAL ---- \n\n" << "Opcion 1: Palabra mas larga \nOpcion 2: Rotacion de matriz \nOpcion 3: SALIDA \n" << "Ingrese la opcion que desea acceder: ";
}

void produccion(int sizeM, int sizeN) {
    int** matriz = new int* [sizeM];
    for (size_t i = 0; i < sizeM; i++){
        matriz[i] = new int[sizeN];
    }

    for (int i = 0; i < sizeM; i++){
        for (size_t j = 0;  j < sizeN;  j++){
            int random = rand() % (99 - 1); 
            matriz[i][j] = random;
        }
        
    }
    cout << "Matriz Original: " << endl;
    for (size_t i = 0; i < sizeM; i++){
        for (size_t j = 0; j < sizeN; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    int** matriz2 = matriz;
    cout << endl << endl;
    for (size_t i = 0; i < sizeM; i++){
        for (size_t j = 0; j < sizeN; j++){
            matriz2[sizeM - j - 1][i] = matriz[i][j]; 

        }
    }
    cout << endl << "Matriz rotada: \n";
    for (size_t i = 0; i < sizeM; i++) {
        for (size_t j = 0; j < sizeN; j++) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int opcion;
    do {
        menu();
        cin >> opcion;
        cout << endl;
        string oracionin;
        vector<string> tokens;
        string token;
        int M, N;
        switch (opcion) {
            case 1:
                cout << "Ingrese una oracion: ";
                cin.ignore();
                getline(cin, oracionin);
                cout << endl;
                cout << oracionin;
                cout << oracionin.size();
                cout << endl;


                for (int i = 0; i <= oracionin.size(); i++){
                    if (oracionin[i] == ' ') {
                        tokens.push_back(token);
                        cout << token;
                        cout << endl;
                        token.clear();
                    }
                    else if (i == oracionin.size() - 1) {
                        token += oracionin[i];
                        cout << token;
                        tokens.push_back(token);
                    }
                    else {
                        token += oracionin[i];
                        //cout << token;
                    }
                }
                for (int i = -1; i < tokens.size(); i++){
                    cout << tokens[i] << endl;
                }
                    break;
            case 2:
                do {
                    cout << "Ingrese el size de filas: ";
                    cin >> M;
                    cout << endl;
                    cout << "Ingrese el size de columnas: ";
                    cin >> N;
                    
                } while (M < 4 || N < 4);
                produccion(M,N);

                break;

        }
        char respc;
        cout << endl;
        cout << "Desea continuar usando el programa(s/n)?: ";
        cin >> respc;
        cin.ignore();

        if (respc == 's' || respc == 'S') {
            opcion = 0;
        }
        else {
            opcion = 3;
        }
    } while (opcion != 3);
}

