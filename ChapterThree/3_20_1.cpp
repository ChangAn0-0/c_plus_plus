#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	vector<int> arr;
	int member;
	while (cin >> member) {
		arr.push_back(member);
	}

	if (arr.size() == 0) {
		cout << "error" << endl;
		return -1;
	}

	for (decltype(arr.size()) i = 0; i < arr.size()-1; i += 2) {
		cout << arr[i] + arr[i + 1] << ' ';
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	if (arr.size() % 2 != 0) {
		cout << arr[arr.size() - 1];
	}

	return  0;
}