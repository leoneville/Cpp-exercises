/*
    Faça um laço baseado no da questão anterior. Neste laço, para cada número, imprima:

    fizz se o número for divisível por 3
    buzz se o número for divisível por 5
    fizzbuzz se o número for divisível por ambos
    O próprio número, em todos os outros casos.
    Lembre de não imprimir o número nos três primeiros casos.
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
