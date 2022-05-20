#include "functions.hpp"
#include "student.hpp"
#include <vector>

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

}