#include <iostream>
int main(void)
{
	int v1, sum = 0;
	while (std::cin >> v1) {
		sum += v1;
	}
	std::cout << sum << std::endl;
	return 0;
}