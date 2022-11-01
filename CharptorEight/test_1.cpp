#include <iostream>
template <typename T>
void Swap(T& a, T& b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<job>(job& j1, job& j2);
void Show(job& j);

int main()
{
	using namespace std;

}
