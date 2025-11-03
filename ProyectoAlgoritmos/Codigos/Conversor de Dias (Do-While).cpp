#include <iostream>
using namespace std;

int main()
{
    int diasTotales;
    int ayos = 0, meses = 0, semanas = 0, dias = 0;

    cout << "Ingrese el numero total de dias: ";
    cin >> diasTotales;

    // Calculo de años
    do
    {
        if (diasTotales >= 365)
        {
            diasTotales -= 365;
            ayos++;
        }
    } while (diasTotales >= 365);

    // Calculo de meses
    do
    {
        if (diasTotales >= 30)
        {
            diasTotales -= 30;
            meses++;
        }
    } while (diasTotales >= 30);

    // Calculo de semanas
    do
    {
        if (diasTotales >= 7)
        {
            diasTotales -= 7;
            semanas++;
        }
    } while (diasTotales >= 7);

    // Días restantes
    dias = diasTotales;

    //Valida el número de años, meses, semanas y días
    cout << "\nEquivale a: " << ayos << " años, "
        << meses << " meses, "
        << semanas << " semanas y "
        << dias << " dias.\n";

    system("PAUSE");
    return EXIT_SUCCESS;
}

