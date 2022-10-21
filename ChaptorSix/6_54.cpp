#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int mysum(int num_one, int num_two)
{
	return num_one + num_two;
}

int mysub(int num_one, int num_two)
{
	return num_one - num_two;
}

int mymul(int num_one, int num_two)
{
	return num_one * num_two;
}

int mydiv(int num_one, int num_two)
{
	return num_one / num_two;
}

void operation(int num_one, int num_two, int (*pf)(int num_one, int num_two))
{
	cout << pf(num_one, num_two) << endl;
}


int main(void)
{
	int num_one, num_two;
	cin >> num_one >> num_two;

	vector<decltype(mysum)*> gather = { mysum,mysub,mymul,mydiv };

	for (auto begin : gather) {
		operation(num_one, num_two, begin);
	}
	return 0;
}