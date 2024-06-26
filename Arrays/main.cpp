﻿#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);
void ShiftLeft(int arr[], const int n, int num_of_shifts);
void ShiftRight(int arr[], const int n, int num_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int num_of_shifts;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое элементов массива " << Avg(arr, n) << endl;
	cout << "Мнимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значения массива: "<< maxValueIn(arr, n) << endl;	
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(arr, n, num_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	ShiftRight(arr, n, num_of_shifts);
	Print(arr, n);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n) 
{
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(const int arr[], const int n)
{
		int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValue > arr[i])minValue = arr[i];
	}
	return minValue;
}
int maxValueIn(const int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++) 
	{
		if (maxValue < arr[i])maxValue = arr[i];
	}
	return maxValue;
}
void ShiftLeft(int arr[], const int n,int num_of_shifts)
{
	for (int i = 0; i < num_of_shifts; i++)
	{
	int buffer = arr[0];
		for (int i = 1; i < n; i++) 
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

	}
}
void ShiftRight(int arr[], const int n,int num_of_shifts) 
{
	ShiftLeft(arr, n, n - num_of_shifts);
}