#include "complex0.h"

Complex::Complex()
{
	real_num = 0;
	imaginary_num = 0;
}

Complex::Complex(const double m_real_num, const double m_imaginary_num)
{
	real_num = m_real_num;
	imaginary_num = m_imaginary_num;
}

Complex::~Complex() {};

Complex Complex::operator+(const Complex& complex_num) const
{
	return Complex(real_num + complex_num.real_num, imaginary_num + complex_num.imaginary_num);
}
Complex Complex :: operator-(const Complex& complex_num) const
{
	return Complex(real_num - complex_num.real_num, imaginary_num - complex_num.imaginary_num);
}
Complex Complex::operator*(const Complex& complex_num) const
{
	Complex temp_complex_num;
	temp_complex_num.imaginary_num = real_num * complex_num.imaginary_num + imaginary_num * complex_num.real_num;
	temp_complex_num.real_num = real_num * complex_num.real_num - imaginary_num * complex_num.imaginary_num;
	return temp_complex_num;
}
Complex Complex::operator*(const double m_real_num) const
{
	return Complex(real_num * m_real_num, imaginary_num * m_real_num);
}
Complex Complex::operator~() const
{
	return Complex(real_num, -imaginary_num);
}

Complex operator*(const double m_real_num, const Complex& complex_num)
{
	return complex_num * m_real_num;
}

std::ostream& operator<<(std::ostream& os, const Complex& complex_num)
{
	os << "(" << complex_num.real_num << ", " << complex_num.imaginary_num << "i)";
	return os;
}

std::istream& operator>>(std::istream& is,Complex& complex_num)
{
	std::cout << "real num:";
	if (!(is >> complex_num.real_num))
		return is;
	std::cout << "imaginary num:";
	is >> complex_num.imaginary_num;
	std::cout << std::endl;
	return is;
}
//