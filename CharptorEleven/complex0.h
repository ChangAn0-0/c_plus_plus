#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class Complex
{
private:
	double real_num;
	double imaginary_num;
public:
	Complex();
	Complex(const double m_real_num, const double m_imaginary_num);
	~Complex();
	
	Complex operator+(const Complex& complex_num) const;
	Complex operator-(const Complex& complex_num) const;
	Complex operator*(const Complex& complex_num) const;
	Complex operator*(const double m_real_num) const;
	Complex operator~() const;

	friend Complex operator*(const double m_real_num, const Complex& complex_num);
	friend std::ostream& operator<<(std::ostream& os, const Complex& complex_num);
	friend std::istream& operator>>(std::istream& is, Complex& complex_num);
};
#endif // !COMPLEX0_H_

