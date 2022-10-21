#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> sequence)
{
	int sum = 0;
	for (auto begin = sequence.begin(); begin != sequence.end(); ++begin) {
		sum += *begin;
     }
	return sum;
}

int main(void)
{
	cout << sum({ 1, 2, 3 }) << endl;
	return 0;
}