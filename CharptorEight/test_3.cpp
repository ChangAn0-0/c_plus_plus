#include <iostream>

double square( double& a)
{
	return a * a;
}

int main(void)
{
	using namespace std;
	double a, b;
	cin >> a;
	b = square(a);
	cout << a<<' ' << b;

	return 0;
}