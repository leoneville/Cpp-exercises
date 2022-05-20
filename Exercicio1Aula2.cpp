/*
    Escreva uma função que receba uma string e verifique o balanceamento de três tipos de parênteses: 
    (), [] e {}. Parênteses estão balanceados quando:

    Da esquerda pra direita, todo fechamento é precedido por uma abertura: todo ) tem um ( anterior correspondente.
    Todo parênteses aberto é fechado: () está balanceado, (() não.
    Todo fechamento de parênteses fecha o tipo correspondente à última abertura: ([]) é ok, ([)] não.
    Utilize um std::vector em sua implementação.
*/

#include <iostream>
#include <vector>

bool balanced(const std::string& c)
{
    auto parentheses = std::vector<char>{};

    for (auto sc: c) {
        if (sc == '(' || sc == '[' || sc == '{') {
            parentheses.push_back(sc);
            continue;
        }

        if (sc == ')') {
            if (parentheses.empty() || parentheses.back() != '(') {
                return false;
            }
            
            parentheses.pop_back();
        }

        if (sc == ']') {
            if (parentheses.empty() || parentheses.back() != '[') {
                return false;
            }
                parentheses.pop_back();
        }

        if (sc == '}') {
            if (parentheses.empty() || parentheses.back() != '{') {
                return false;
            }
                parentheses.pop_back();
        }
    }

    if (parentheses.empty()) {
        return true;
    }

    return false;
}

int main()
{
    using namespace std::string_literals;

    auto cases = std::vector<std::string>{
        "int main(int argv, char** argv) { std::cout << argv[0] << '\n'; }"s,
        "([[]]{[]}{()})"s,
        ""s,
        ")"s,
        "([)()(])({}{)(})"s,
        "[[](){](()"s,
    };

    for (auto c: cases) {
        std::cout << "Case " << c << " is "
                  << (balanced(c) ? "balanced" : "not balanced")
                  << '\n';

    }
}