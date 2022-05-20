// [Desafio] Faça o mesmo exercício que o acima, mas em vez de retornar o resultado, altere o vetor de entrada.

#include <iostream>
#include <vector>

void remove_duplicates(std::vector<int>& n) 
{
    auto last_unique = 0;

    for (auto i = 1; i < n.size(); ++i) {
        if (n[last_unique] != n[i]) {
            n[++last_unique] = n[i];
        }
    }

    n.resize(last_unique + 1);
}

int main()
{
    auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

    remove_duplicates(ints);

    for (auto i: ints) {
        std::cout << i << '\n';
    }
}