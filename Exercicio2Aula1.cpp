/*
    Fa�a um la�o baseado no da quest�o anterior. Neste la�o, para cada n�mero, imprima:

    fizz se o n�mero for divis�vel por 3
    buzz se o n�mero for divis�vel por 5
    fizzbuzz se o n�mero for divis�vel por ambos
    O pr�prio n�mero, em todos os outros casos.
    Lembre de n�o imprimir o n�mero nos tr�s primeiros casos.
*/

#include <iostream>

int main()
{
    for (auto i = 1; i <= 100; ++i)
    {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "fizzbuzz" << '\n';
        } else if (i % 3 == 0) {
            std::cout << "fizz" << '\n';
        } else if (i % 5 == 0) {
            std::cout << "buzz" << '\n';
        } else {
            std::cout << i << '\n';
        }
    }
}
