#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

int main() {
    srand(time(0));

    vector<string> names(101, "DISPONIBLE");

    int option;
    do {
        cout << "\n=== SISTEMA DE RIFA ===\n";
        cout << "1. Mostrar numeros\n";
        cout << "2. Asignar nombre\n";
        cout << "3. Elegir 5 finalistas\n";
        cout << "4. Elegir ganador final\n";
        cout << "5. Salir\n";
        cout << "Opcion: ";
        cin >> option;

        if (option == 1) {
            for (int i = 1; i <= 100; i++)
                cout << i << " -> " << names[i] << endl;
        }

        else if (option == 2) {
            int num;
            string name;
            cout << "Numero (1-100): ";
            cin >> num;
            cin.ignore();
            cout << "Nombre: ";
            getline (cin, name);
            names[num] = name;
        }

        else if (option == 3) {
            cout << "\n Finalistas:\n";
            for (int i = 0; i < 5; i++) {
                int finalist = (rand() % 100) + 1;
                cout << "Finalista #" << (i + 1) << ": " << finalist
                    << " -> " << names[finalist] << endl;
            }
        }

        else if (option == 4) {
            int winner = (rand() % 100) + 1;
            cout << "\n GANADOR FINAL: " << winner
                << " -> " << names[winner] << " \n";
        }

    } while (option != 5);

    return 0;
}
