#ifndef SCHOOL_FUNCTIONS_HPP
#define SCHOOL_FUNCTIONS_HPP

#include <vector>
#include <istream>
#include "student.hpp"

namespace school {

bool approved(Course const&);
std::vector<Student> dismissed_by_time(std::vector<Student> const&, int year);
std::vector<Student> read_students(std::istream&);

}

#endif