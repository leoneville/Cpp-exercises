#include <vector>

#include "student.hpp"

namespace school {

int Student::years_enrolled(int currYear) const
{
    return currYear - this->year_;
}
std::vector<double> Student::averages() const
{
    auto averages = std::vector<double>{};

    for (auto& course : this->courses_) {
        averages.push_back(course->average());
    }

    return averages;
}

}