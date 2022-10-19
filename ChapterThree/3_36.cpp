#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main(void)
{
	const int arr_size = 10;
	int arr1[arr_size] = { 1,2,3,4,5,6,7,8,9,0 },
		arr2[arr_size] = { 1,2,3,4,5,6,7,8,9,10 };

	int* arr1_begin = begin(arr1);
	int* arr2_begin = begin(arr2);
	while (arr1_begin != end(arr1) && arr2_begin != end(arr2)) {
		if (*arr1_begin != *arr2_begin) {
			cout << "数组不相等" << endl;
			return -1;
		}
		++arr1_begin;
		++arr2_begin;
	}
	cout << "数组相等" << endl;

	return 0;
}