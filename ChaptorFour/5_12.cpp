#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	unsigned int ff_count = 0,
		         fl_count = 0,
	          	 fi_count = 0;
	char ch, prech = '\0';

	while (cin >> ch) {
		bool mark = true;
		if (prech == 'f') {
			switch (ch)
			{
			case 'f':
				++ff_count;
				mark = false;
				break;
			case 'l':
				++fl_count;
				mark = false;
				break;
			case 'i':
				++fi_count;
				mark = false;
				break;
			}
		}
		if (!mark) {
			prech = '\0';
		}
		else
			prech = ch;
	}

	cout << "ff:" << ff_count << endl;
	cout << "fl:" << fl_count << endl;
	cout << "fi:" << fi_count << endl;

	return 0;
}