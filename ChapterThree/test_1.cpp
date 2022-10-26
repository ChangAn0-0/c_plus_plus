#include <iostream>
int main(void)
{
	using namespace std;
	int num = 16;
	int num2{ 32 };
	cout << num << endl;
	cout << hex;
	cout << num << endl;
	cout << oct;
	cout << num << endl;
	cout << num2 << endl;

	char ch;
	cin >> ch;
	num = ch;
	cout << dec;
	cout << num << endl;
	return 0;
}