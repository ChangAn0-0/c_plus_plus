#include <iostream>
int main(void)
{
	
	unsigned u1 = 10, u2 = 42;
	std::cout << u2 - u1 << std::endl;//32
	std::cout << u1 - u2 << std::endl;//1111 1111 1111 1111 1111 1111 1110 0000

	int i1 = 10, i2 = 42;
	std::cout << i2 - i1 << std::endl;//32
	std::cout << i1 - i2 << std::endl;//-32
	std::cout << i1 - u1 << std::endl;//0000 0000 0000 1010 - 0000 0000 0000 1010 = 0
	std::cout << u1 - i1 << std::endl;//0

	return 0;
}