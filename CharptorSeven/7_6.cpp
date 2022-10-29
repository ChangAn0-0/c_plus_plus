#include <iostream>

using namespace std;

const int SIZE = 10;

int  Fill_array(double num[], int size);
void  Show_array(double num[], int size);
void  Reverse_array(double num[], int size);


int main(void)
{
	double num[SIZE] = { 0 };

	Fill_array(num, SIZE);
	Show_array(num, SIZE);
	Reverse_array(num, SIZE);
	Show_array(num, SIZE);

	return 0;
}

int  Fill_array(double num[], int size)
{
	int i = 0;
	cout << "enter double number" << endl;
	while (cin >> num[i]&&i<size) 
	{
		++i;
	}
	return i;
}

void  Show_array(double num[], int size) 
{
	for (int i = 0; i < size; ++i) 
	{
		cout << num[i] << " ";
	}
	cout << endl;
	return;
}

void  Reverse_array(double num[], int size)
{
	double temp = 0;
	int i = 0;
	while (i < (size - 1 - i))
	{
		temp = num[i];
		num[i] = num[size - 1 - i];
		num[size - 1 - i] = temp;
	}
	return;
}

