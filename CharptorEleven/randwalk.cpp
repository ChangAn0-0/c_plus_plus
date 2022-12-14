#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vertor.h"

int main()
{
	using namespace std;
	using VERTOR::Vertor;
	srand(time(0));
	double direction;
	Vertor step;
	Vertor result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter taarget distance (q to quit)";
	while (cin >> target)
	{
		cout << "Enter step length";
		if (!(cin >> dstep))
			break;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vertor::POL);
			result = result + step;
			steps++;
		}

		cout << "After" << steps << " steps,the subject"
			"has the following location:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step="
			<< result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}