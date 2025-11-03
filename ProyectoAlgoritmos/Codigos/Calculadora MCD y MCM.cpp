#include <iostream>
using namespace std;

// Función que calcula el Máximo Común Divisor (MCD)

int calcularMCD(int a, int b)
{
    int resto;

    // Asegura que los números sean positivos
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Algoritmo de Euclides
    while (b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

// Función que calcula el Mínimo Común Múltiplo (MCM)

int calcularMCM(int a, int b)
{
    // Evita dividir por cero
    if (a == 0 || b == 0)
        return 0;

    int mcd = calcularMCD(a, b);
    int mcm = (a * b) / mcd;

    // El MCM siempre debe ser positivo
    if (mcm < 0) mcm = -mcm;

    return mcm;
}


int main()
{
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "\nEl MCD de " << num1 << " y " << num2 << " es: " << calcularMCD(num1, num2) << endl;
    cout << "El MCM de " << num1 << " y " << num2 << " es: " << calcularMCM(num1, num2) << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

