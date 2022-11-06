#include <cmath>
#include "vertor.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VERTOR
{
	const double Rad_to_deg = 45.0 / atan(1.0);

	void Vertor::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vertor::set_ang()
	{
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}

	void Vertor::set_x()
	{
		x = mag * cos(ang);
	}

	void Vertor::set_y()
	{
		y = mag * sin(ang);
	}

	Vertor::Vertor()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vertor::Vertor(double n1, double n2, Mode from)
	{
		mode = from;
		if (from == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (from == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vertor()--";
			cout << "vertor set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void Vertor::reset(double n1, double n2, Mode from)
	{
		mode = from;
		if (from == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (from == POL)
		{
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vertor()--";
			cout << "vertor set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	Vertor::~Vertor()
	{

	}

	void Vertor::polar_mode()
	{
		mode = POL;
	}

	void Vertor::rect_mode()
	{
		mode = RECT;
	}

	Vertor Vertor::operator-(const Vertor& b) const
	{
		return Vertor(x - b.x, y - b.y);
	}

	Vertor Vertor::operator+(const Vertor& b) const
	{
		return Vertor(x + b.x, y + b.y);
	}

	Vertor Vertor::operator-() const
	{
		return Vertor(-x, -y);
	}

	Vertor Vertor::operator*(double n) const
	{
		return Vertor(n * x, n * y);
	}

	Vertor operator*(double n, const Vertor& a)
	{
		return a * n;
	}

	std::ostream& operator<<(std::ostream& os, const Vertor& v)
	{
		if (v.mode == Vertor::RECT)
			os << "(x,y)= (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vertor::POL)
		{
			os << "(m,a)=(" << v.mag << ", " << v.ang * Rad_to_deg << ")";
		}
		else
			os << "Vertor object mode is invalid";
		return os;
	}
}