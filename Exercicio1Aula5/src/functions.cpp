#include <vector>
#include <istream>
#include <string>
#include <sstream>

#include "functions.hpp"
#include "student.hpp"



namespace {

int get_int(std::istream& input)
{
    auto buf = std::string{};

    std::getline(input, buf);

    auto sstr = std::stringstream{ buf };

    auto i = 0;

    sstr >> i;

    return i;
}

std::string read_string(std::istream& input)
{
    auto buf = std::string{};
    std::getline(input, buf);

    return buf;
}

double get_double(std::istream& input)
{
    auto buf = std::string{};

    std::getline(input, buf);

    auto sstr = std::stringstream{ buf };

    auto d = 0.0;

    sstr >> d;

    return d;
}

school::Student read_student(std::istream& input)
{
    auto name = read_string(input);
    auto entrance_year = get_int(input);
    auto grades = std::vector<double>{
        get_double(input),
        get_double(input),
        get_double(input)
    };

    return {
        name,
        entrance_year,
        grades
    };
}

}

namespace school {

std::vector<Student> approved(std::vector<Student> const& students)
{
    auto approved = std::vector<Student>{};

    for (auto const& student: students) {
        if (student.average() >= 6.0) {
            approved.push_back(student);
        }
    }

    return approved;
}

std::vector<Student> dismissed_by_time(std::vector<Student> const& students, int year)
{
    auto dismissed = std::vector<Student>{};

    for (auto const& student: students) {
        if (student.years_enrolled(year) > 7) {
            dismissed.push_back(student);
        }
    }

    return dismissed;
}

std::vector<Student> read_students(std::istream& input)
{
    auto n_students = get_int(input);
    auto students = std::vector<Student>{};

    for (auto i = 0; i < 3; ++i) {
        students.push_back(read_student(input));
    }

    return students;
}

}