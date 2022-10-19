#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	vector<int> arr{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int>::iterator it_begin = arr.begin();
	auto it_end = arr.end();
	while (it_begin != it_end) {
		*it_begin = *it_begin * 2;
		++it_begin;
	}

	for (auto it : arr) {
		cout << it << ' ';
	}
	cout << endl;
	return 0;
}