#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int a[5] = { 0 };
	vector<int> b(5, 0);
	cout << b[2] << endl;
	b[2] = 2;
	cout << b[2] << endl;
	return 0;
}