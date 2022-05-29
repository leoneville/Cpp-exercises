#ifndef SCHOOL_STUDENT_HPP
#define SCHOOL_STUDENT_HPP

#include <memory>
#include <string>
#include <vector>

#include "course.hpp"


namespace school {

class Student {
public:
    Student(std::string name, int year, std::vector<std::shared_ptr<Course>> courses):
        name_{std::move(name)},
        year_{year},
        courses_{std::move(courses)}
    {}

    std::string const& name() const
    {
        return this->name_;
    }
    
    int years_enrolled(int const) const;
    std::vector<double> averages() const;

private:
    std::string name_;
    std::vector<std::shared_ptr<Course>> courses_;
    int year_;
};

}

#endif