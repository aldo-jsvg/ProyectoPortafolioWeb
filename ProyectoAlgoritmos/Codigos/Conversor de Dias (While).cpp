#include <iostream>
using namespace std;

int main() {
    int diasTotales, ayos = 0, meses = 0, semanas = 0, dias = 0;

    cout << "Ingrese el numero total de dias: ";
    cin >> diasTotales;

    // Calculo de años
    while (diasTotales >= 365) {
        diasTotales -= 365;
        ayos++;
    }

    // Calculo de meses
    while (diasTotales >= 30) {
        diasTotales -= 30;
        meses++;
    }

    // Calculo de semanas
    while (diasTotales >= 7) {
        diasTotales -= 7;
        semanas++;
    }

    // Días restantes
    dias = diasTotales;

    //Calculo de años, meses, semanas y días
    cout << "\nEquivale a: " << ayos << " años, "
        << meses << " meses, "
        << semanas << " semanas y "
        << dias << " dias." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
