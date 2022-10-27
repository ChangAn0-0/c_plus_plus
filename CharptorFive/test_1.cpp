#include <iostream>
#include <ctime>

int main(void)
{
	using namespace std;
	float sec;
	cin >> sec;
	clock_t delay = sec * CLOCKS_PER_SEC;
	cout << "haha\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "wawa";
	return 0;
}