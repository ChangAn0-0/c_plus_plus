#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(void)
{
	const int arr_size = 10;
	int arr[arr_size];
	for (int i = 0; i < arr_size; ++i) {
		arr[i] = i;
	}
	for (auto i : arr) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	int arr_copy[arr_size];
	for (int i = 0; i < arr_size; ++i) {
		arr_copy[i] = arr[i];
	}
	for (auto i : arr_copy) {
		cout << i << ' ';
	}
	cout << endl;

	vector<int> a;
	for (int i = 0; i < arr_size; ++i) {
		a.push_back(i);
	}
	for (auto i : a) {
		cout << i << ' ';
	}
	cout << endl;

	vector<int> b;
	for (int i = 0; i < arr_size; ++i) {
		b.push_back(a[i]);
	}
	for (auto i : b) {
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}