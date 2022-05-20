/*
    Utilizando algum dos tipos de laço vistos nesta aula, escreva funções
    que imprimam os valores da sequência de Fibonacci, das seguintes formas:

    Dado um n, até o n-ésimo elemento da sequência.
    Dado um x, até o último elemento da sequência que seja menor ou igual a x
    Dica: Considere que o n do primeiro elemento é 0, e que fib(0) = 0 e fib(1) = 1.
*/

#include <iostream>

void fib_up_to(auto num)
{
    auto a = 0, b = 1, aux = 0;

    std::cout << a << " " << b;

    for (auto i = 1; i <= num - 2; ++i) {
        aux = a + b;
        a = b;
        b = aux;

        std::cout << " " << aux;
    }
    std::cout << '\n';
}

void fib_less_than(auto num)
{
    auto a = 0, b = 1, aux = 1;

    std::cout << a << " " << b;

    while (aux <= num) {
        std::cout << " " << aux;

        aux = a + b;
        a = b;
        b = aux;
    }
}

int main()
{
    fib_up_to(10);
    fib_less_than(1024);
}
