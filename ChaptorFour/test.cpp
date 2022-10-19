#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main(void)
{
	int integer1, integer2;
	while (cin >> integer1 >> integer2) {
		try {
			if (integer2 == 0) {
				throw runtime_error("除数不能为零");
			}
			cout << integer1 / integer2 << endl;
		}
		catch (runtime_error err) {
			cout << err.what() << endl;
			cout << "是否重新输入(y or n)" << endl;
			char ch;
			cin >> ch;
			if (ch != 'y' && ch != 'Y') {
				break;
			}
		}
	}

	return 0;
}