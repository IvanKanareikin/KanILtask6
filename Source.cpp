#include "Header.h"
using namespace std;


double* create(double* mas, int size) {
	mas = new double[size];
	return mas;
}

int* create(int* mas, int size) {
	mas = new int[size];
	return mas;
}

void full(double* mas, int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 200 - 10.5;
	}
}

void full(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 200 - 10;
	}
}

void print(double* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

void print(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

void del(double* mas) {
	delete[] mas;
}

void del(int* mas) {
	delete[] mas;
}


void SelectionSort(double* arr, int n) 
{
	setlocale(0, "rus");
	double count; 
	int key, i, j;
	for (i = 0; i < n-1; i++)
	{
		count = arr[i]; key = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[key]) key = j;
		if (key != i)
		{
			arr[i] = arr[key];
			arr[key] = count;
		}
	}
	cout << "отсортированный массив: ";
	for (i = 0; i < n; i++) cout << arr[i] << " "; 
	cout << endl;
}


void SelectionSort(int* arr,int n)
{
	setlocale(0, "rus");
	int count, key, i, j;
	for (i = 0; i < n-1; i++)
	{
		count = arr[i]; key = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[key]) key = j;
		if (key != i)
		{
			arr[i] = arr[key];
			arr[key] = count;
		}
	}
	cout << "Результирующий массив: ";
	for (i = 0; i < n; i++) cout << arr[i] << " ";
}

