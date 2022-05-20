/*
    Escreva uma função que receba um vetor de inteiros e remova duplicatas adjacentes,
    ou seja, sequências do mesmo valor.

    Exemplo:

    {1, 1, 1, 2, 3, 3, 4, 1, 1} -> {1, 2, 3, 4, 1}
    Retorne o resultado e não altere a entrada.
*/

#include <iostream>
#include <vector>

std::vector<int> remove_duplicates(const std::vector<int>& n) {
    
    if (n.empty()) {
        return {};
    }

    auto numeros = std::vector<int>{n.front()};

    for (auto i = 1; i < n.size(); ++i) {
        if (numeros.back() != n[i]) {
            numeros.push_back(n[i]);
        }
    }

    return numeros;
}

int main()
{
    for (auto i: remove_duplicates({1, 1, 1, 2, 3, 3, 4, 1, 1})) {
        std::cout << i << '\n';
    }
}