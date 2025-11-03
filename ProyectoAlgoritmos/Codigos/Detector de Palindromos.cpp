#include <iostream>
using namespace std;
   
// Función para que elimine espacios, signos y tildes, y pasa todo a minúsculas
string limpiarTexto(string texto)
{
    string limpio = "";

    for (int i = 0; i < texto.length(); i++)
    {
        char c = texto[i];

        // Convertir mayúsculas a minúsculas
        if (c >= 'A' && c <= 'Z')
            c = c + 32;

        // Reemplaza las vocales con tilde por su versión sin tilde
        if (c == 'á') c = 'a';
        else if (c == 'é') c = 'e';
        else if (c == 'í') c = 'i';
        else if (c == 'ó') c = 'o';
        else if (c == 'ú') c = 'u';

        // Conserva solo letras (a-z)
        if (c >= 'a' && c <= 'z')
            limpio += c;
    }

    return limpio;
}

// Función que determina si el texto es palíndromo
bool esPalindromo(string texto)
{
    texto = limpiarTexto(texto); 
    int inicio = 0;
    int fin = texto.length() - 1;

    while (inicio < fin)
    {
        if (texto[inicio] != texto[fin])
            return false;
        inicio++;
        fin--;
    }

    return true;
}

int main()
{
    string frase;

    cout << "Ingrese una palabra o frase: ";
    (cin, frase);

    if (esPalindromo(frase))
        cout << "Verdadero: es un palindromo." << endl;
    else
        cout << "Falso: no es un palindromo." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

