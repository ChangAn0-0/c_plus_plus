#include <iostream>
#include <string>

int main(void)
{
	int score[10]{ 0 };
	std::cout << "enter 10  numbers" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cin >> score[i];
	}

	return 0;
}