/*
    Utilizando algum dos tipos de la�o vistos em aula, escreva uma fun��o que, dada uma
    std::string qualquer, retorne palindrome se ela for um pal�ndromo e not a palindrome
    se ela n�o for um pal�ndromo.

    Pal�ndromo: Uma string que � igual a si mesma se lida de tr�s para frente, como arara.

    Para acessar cada caractere da string, pode se usar s[i] para uma string s e uma posi��o
    i, ou pode-se usar o range-based for na string. Lembre-se que as posi��es na string iniciam-se em 0.

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
