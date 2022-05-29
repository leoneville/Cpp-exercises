#include <iostream>
#include <fstream>
#include <clocale>

#include "student.hpp"
#include "functions.hpp"

int _main(std::istream& in)
{
    auto students = school::read_students(in);

    /*for (auto s : school::approved(students)) {
        std::cout << s.name()
            << " is approved by grade with average "
            << s.average() << ".\n";
    }*/

    for (auto s : students) {
        std::cout << s.name() << " averages:\n";

        for (auto a : s.averages()) {
            std::cout << a << '\n';
        }
    }

    for (auto s : school::dismissed_by_time(students, 2022)) {
        std::cout << s.name()
            << " was dismissed for being in the course for too long: "
            << s.years_enrolled(2022) << " years.\n";
    }

    return 0;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "portuguese");

    if (argc == 1) {
        return _main(std::cin);
    }

    auto file = std::ifstream{ argv[1] };

    return _main(file);
}