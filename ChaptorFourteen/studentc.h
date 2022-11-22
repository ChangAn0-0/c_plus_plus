#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>
class Student
{
private:
	typedef std::valarray<double> ArrayDb;
	std::string name;
	ArrayDb scores;
	std::ostream& arr_out(std::ostream& os) const;
public:
	Student():name("Null Student"),scores() {}
	explicit Student(const std::string & s)
		:name(s),scores() {}
};
#endif//
