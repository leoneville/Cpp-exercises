/*
    Utilizando algum dos tipos de laço vistos em aula, escreva uma função que, dada uma
    std::string qualquer, retorne palindrome se ela for um palíndromo e not a palindrome
    se ela não for um palíndromo.

    Palíndromo: Uma string que é igual a si mesma se lida de trás para frente, como arara.

    Para acessar cada caractere da string, pode se usar s[i] para uma string s e uma posição
    i, ou pode-se usar o range-based for na string. Lembre-se que as posições na string iniciam-se em 0.

*/

#include <iostream>
#include <string>


std::string check_palindrome(std::string word)
{
    auto len = word.size();

    for (auto i = 0; i < len/2; ++i) {
        if (word[i] != word[len-1-i]) {
            return "not a palindrome";
        }
    }

    return "palindrome";
}

int main()
{
    using namespace std::string_literals;

    std::cout << "arara is "s << check_palindrome("arara"s) << '\n';
    std::cout << "banana is "s << check_palindrome("banana"s) << '\n';
}
