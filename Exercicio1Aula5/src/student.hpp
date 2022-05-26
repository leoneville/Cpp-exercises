#ifndef SCHOOL_STUDENT_HPP
#define SCHOOL_STUDENT_HPP

#include <string>
#include <vector>

namespace school {

class Student {
public:
    Student(std::string name, int year, std::vector<double> grades):
        name_{std::move(name)},
        year_{year},
        grades_{std::move(grades)}
    {}

    std::string const& name() const
    {
        return this->name_;
    }
    
    int years_enrolled(int const) const;
    double average() const;

private:
    std::string name_;
    std::vector<double> grades_;
    int year_;
};

}

#endif