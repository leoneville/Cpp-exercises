#ifndef SCHOOL_CALCULUS_HPP
#define SCHOOL_CALCULUS_HPP

#include "course.hpp"

namespace school {
class Calculus final: public Course {
public:
	Calculus(double p1, double p2, double p3):
		p1_{p1},
		p2_{p2},
		p3_{p3}
	{}

	double average() const override;

private:
	double p1_, p2_, p3_;
};

}

#endif