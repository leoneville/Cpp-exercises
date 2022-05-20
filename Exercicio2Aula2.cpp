/*
    Escreva uma função que receba um caractere (char) e uma string e retorne o número de vezes 
    que o caractere aparece na string. Lembre-se: copiar uma string pode ser custoso. 
    A string não deve ser alterada de forma alguma.
*/

#include <iostream>

int count_occurences(const char& letter, const std::string& word)
{
    auto count = 0;

    for (auto i: word) {
        if (i == letter) {
            count++;
        }
    }

    return count;
}   

int main()
{
    using namespace std::string_literals;

    const auto word = "evidentemente"s;
    const auto letter = 'e';
    std::cout << "number of " << letter << " in " << word << ": "
              << count_occurences(letter, word);
}