#ifndef VERTOR_H_
#define VERTOR_H_
#include <iostream>
namespace VERTOR
{
	class Vertor
	{
	public:
		enum Mode{RECT,POL};
	private:
		double x;
		double y;
		double mag;
		double ang;
		Mode mode;
//私有函数
		void set_x();
		void set_y();
		void set_mag();
		void set_ang();
	public:
		Vertor();
		Vertor(double n1, double n2, Mode from = RECT);
		void reset(double n1, double n2, Mode from = RECT);
		~Vertor();
		double xval() const { return x; }
		double yval() const { return y; }
		double magval() const { return mag; }
		double angval() const { return ang; }
		void polar_mode();
		void rect_mode();
//操作符重载
		Vertor operator+(const Vertor& b) const;
		Vertor operator-(const Vertor& b) const;
		Vertor operator-() const;
		Vertor operator*(double n) const;
//友元函数
		friend Vertor operator*(double n, const Vertor& a);
		friend std::ostream& operator<<(std::ostream& os, const Vertor& v);
	};
}
#endif
