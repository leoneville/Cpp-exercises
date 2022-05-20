#include "student.hpp"

namespace school {

int Student::years_enrolled(int currYear) const
{
    return currYear - this->year_;
}
double Student::average() const
{
    auto total = 0.0;

    for (auto const& n: this->grades_) {
        total += n;
    }

    return total / this->grades_.size();
}

}