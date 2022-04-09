#include "Header.h"
#include <iostream>

using namespace std;
void main()
{
	setlocale(0, "rus");
		srand(time(0));
		int n;
		cin >> n;
		double* arr = nullptr;
		int* arr1 = nullptr;
		arr = create(arr, n);
		arr1 = create(arr1, n);
		full(arr, n);
		full(arr1, n);
		print(arr, n);
		print(arr1, n);
		SelectionSort(arr, n);
		SelectionSort(arr1, n);
		del(arr);
		del(arr1);
}
