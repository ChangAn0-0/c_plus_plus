#include <iostream>

int main(void)
{
	std::cout << "enter two number" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	if(v1>v2)
		while (v1 >= v2) {
			std::cout << v2<<std::endl;
			v2++;
		}
	else
		while (v2 >= v1) {
			std::cout << v1<<std::endl;
			v1++;
		}
	return 0;
}