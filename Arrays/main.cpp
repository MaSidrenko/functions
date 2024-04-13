#include<iostream>

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
void ShiftLeft(int arr[], const int n);
void ShiftRight(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое элементов массива " << Avg(arr, n) << endl;
	minValueIn(arr, n);
	maxValueIn(arr, n);
	ShiftLeft(arr, n);
	Print(arr, n);
	ShiftRight(arr, n);
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
	double Avg = 0;
	Avg = (double)Sum(arr, n) / n;
	return Avg;
}
int minValueIn(const int arr[], const int n)
{
		int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValue > arr[i])minValue = arr[i];
	}
	cout << "Минимальное значение массива: " << minValue << endl;
	return minValue;
}
int maxValueIn(const int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++) 
	{
		if (maxValue < arr[i])maxValue = arr[i];
	}
	cout << "Максимально значение массива: " << maxValue << endl;
	return maxValue;
}
void ShiftLeft(int arr[], const int n) 
{
	int num_of_shifts;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
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
void ShiftRight(int arr[], const int n) 
{
	int num_of_shifts;
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	for (int i = 0; i<num_of_shifts; i++) 
	{
		int buffer = arr[n - 1];
		for(int i = n - 1; i > 0; i--) 
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}