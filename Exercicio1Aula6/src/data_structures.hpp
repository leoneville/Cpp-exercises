#ifndef SCHOOL_DATA_STRUCTURES_HPP
#define SCHOOL_DATA_STRUCTURES_HPP

#include "course.hpp"

namespace school {

class DataStructures final: public Course {
public:
	DataStructures(double t1, double t2, double t3, double p1):
		t1_{t1},
		t2_{t2},
		t3_{t3},
		p1_{p1}
	{}

	double average() const override;

private:
	double t1_, t2_, t3_, p1_;

};

}

#endif