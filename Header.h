#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <random>

using namespace std;

double* create(double*, int);
int* create(int*, int);
void full(double*, int);
void full(int*, int);
void print(double*, int);
void print(int*, int);
void del(double*);
void del(int*);
void SelectionSort(int* arr, int n);
void SelectionSort(double* arr, int n);

#endif