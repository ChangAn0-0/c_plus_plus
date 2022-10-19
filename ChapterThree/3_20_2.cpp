#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

int main(void)
{
	vector<int> arr;
	int member;
	while(cin>>member)
	{	
		arr.push_back(member);
	}

	if ((arr.size()) == 0) {
		cout << "no member" << endl;
		return -1;
	}

	for (decltype(arr.size()) i = 0; i < (arr.size()) / 2; i++) {
		cout << arr[i] + arr[arr.size() - 1 - i] << ' ';
		if ((i + 1) % 5 == 0)
			cout << endl;
	}
	if (arr.size() % 2 != 0) {
		cout << arr[(arr.size()) / 2];
	}
	return 0;
}