#include "data_structures.hpp"


namespace school {

double DataStructures::average() const
{
	return (t1_ + t2_ + t3_)/3 * 0.8 + p1_ * 0.2;
}

}