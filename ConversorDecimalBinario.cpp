#include <iostream>
using namespace std;

int main()
{
    int numero;
    int binario[32];
    int i = 0;

    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    // Valida que el número sea positivo
    if (numero < 0)
    {
        cout << "Por favor ingrese un numero positivo." << endl;
        return 0;
    }

    // En el caso de que el número sea 0
    if (numero == 0)
    {
        cout << "El numero en binario es: 0" << endl;
        return 0;
    }

    // operación para convertir decimal a binario
    while (numero > 0)
    {
        binario[i] = numero % 2;
        numero = numero / 2;
        i++;
    }

    cout << "El numero en binario es: ";

    // Para mostrar el número binario de manera inversa
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binario[j];
    }

    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
