#include <iostream>
using namespace std;

// Función para pasar una palabra a minúsculas
string aMinusculas(string texto)
{
    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] = texto[i] + 32;
        }
    }
    return texto;
}

// Función para ordenar las letras
string ordenarLetras(string palabra)
{
    char temp;
    for (int i = 0; i < palabra.length() - 1; i++)
    {
        for (int j = 0; j < palabra.length() - i - 1; j++)
        {
            if (palabra[j] > palabra[j + 1])
            {
                temp = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = temp;
            }
        }
    }
    return palabra;
}

// Función que determina si dos palabras son anagramas
bool sonAnagramas(string palabra1, string palabra2)
{
    // Si las palabras son iguales no pueden ser anagramas
    if (palabra1 == palabra2)
        return false;

    // Verifica si las dos palabras tienen la misma longitud
    if (palabra1.length() != palabra2.length())
        return false;

    // Convierte ambas a minúsculas
    palabra1 = aMinusculas(palabra1);
    palabra2 = aMinusculas(palabra2);

    // Ordena las letras manualmente
    palabra1 = ordenarLetras(palabra1);
    palabra2 = ordenarLetras(palabra2);

    // Compara las palabras ya ordenadas
    return palabra1 == palabra2;
}

int main()
{
    string palabra1, palabra2;

    cout << "Ingrese la primera palabra: ";
    cin >> palabra1;

    cout << "Ingrese la segunda palabra: ";
    cin >> palabra2;

    if (sonAnagramas(palabra1, palabra2))
        cout << "Verdadero: son anagramas." << endl;
    else
        cout << "Falso: no son anagramas." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

