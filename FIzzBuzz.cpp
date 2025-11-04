
#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    // Ciclo que se repite mientras i sea menor o igual a 100
    while (i <= 100)
    {

        // Si el número es múltiplo de 3 y de 5
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "fizzbuzz" << endl;
        }

        // Si solo es múltiplo de 3
        else if (i % 3 == 0)
        {
            cout << "fizz" << endl;
        }

        // Si solo es múltiplo de 5
        else if (i % 5 == 0)
        {
            cout << "buzz" << endl;
        }

        // Si no es múltiplo de 3 ni de 5, muestra el número
        else
        {
            cout << i << endl;
        }

        i++;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
