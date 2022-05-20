/*
    Escreva um laço que passe por todos os números de 1 a 100, mas imprima apenas os pares.

    Dica: o operador % pode ser utilizado para obter o resto da divisão.
*/

#include <iostream>

int main()
{
    for (auto i = 1; i <= 100; ++i) {
        if (i % 2 == 0) {
            std::cout << i << '\n';
        }
    }
}
