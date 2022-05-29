#include <istream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include "course.hpp"
#include "functions.hpp"
#include "student.hpp"
#include "calculus.hpp"
#include "data_structures.hpp"



namespace {

int read_int(std::istream& in)
{
    auto buf = std::string{};
    
    std::getline(in, buf);

    auto sstr = std::stringstream{ buf };

    auto i = 0;

    sstr >> i;

    return i;
}

double read_double(std::istream& in) 
{
    auto buf = std::string{};

    std::getline(in, buf);

    auto sstr = std::stringstream{ buf };

    auto d = 0.0;

    sstr >> d;

    return d;
}

std::string read_string(std::istream& in)
{
    auto s = std::string{};

    std::getline(in, s);

    return s;
}

std::unique_ptr<school::Calculus> read_calculus(std::istream& in)
{
    auto p1 = read_double(in);
    auto p2 = read_double(in);
    auto p3 = read_double(in);

    return std::make_unique<school::Calculus>(p1, p2, p3);
}

std::unique_ptr<school::DataStructures> read_data_structures(std::istream& in)
{
    auto t1 = read_double(in);
    auto t2 = read_double(in);
    auto t3 = read_double(in);
    auto p1 = read_double(in);

    return std::make_unique<school::DataStructures>(t1, t2, t3, p1);
}

std::unique_ptr<school::Course> read_course(std::istream& in)
{
    auto name = read_string(in);

    if (name == "Data Structures") {
        return read_data_structures(in);
    }

    return read_calculus(in);
}

school::Student read_student(std::istream& in)
{
    auto name = read_string(in);
    auto year = read_int(in);
    auto n_courses = read_int(in);

    auto courses = std::vector<std::shared_ptr<school::Course>>{};

    for (auto i = 0u; i < n_courses; ++i) {
        auto course = read_course(in);
        courses.push_back(std::move(course));
    }

    return {
        name,
        year,
        std::move(courses)
    };
}

}

namespace school {

bool approved(Course const& course)
{
    return course.average() > 6.0;
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

std::vector<Student> read_students(std::istream& in)
{
    auto n_students = read_int(in);
    auto students = std::vector<Student>{};

    for (auto i = 0; i < n_students; ++i) {
        students.push_back(read_student(in));
    }

    return students;
}

}