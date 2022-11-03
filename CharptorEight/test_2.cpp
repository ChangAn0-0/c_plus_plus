#include <iostream>

inline double square(double x)
{
	return x * x;
}

int main(void)
{
	using namespace std;
	double a;
	cin >> a;

	a = square(a);
	cout << a;
	return 0;
}