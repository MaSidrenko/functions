#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);


void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);


void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);



int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);


double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);


int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);


int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);


void ShiftLeft(int arr[], const int n, int num_of_shifts);
void ShiftLeft(double arr[], const int n, int num_of_shifts);
void ShiftLeft(char arr[], const int n, int num_of_shifts);


void ShiftRight(int arr[], const int n, int num_of_shifts);
void ShiftRight(double arr[], const int n, int num_of_shifts);
void ShiftRight(char arr[], const int n, int num_of_shifts);


void main()
{
	setlocale(LC_ALL, "");
	//Для int
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

	//Для double
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифмитическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(brr, SIZE, num_of_shifts);
	Print(brr, SIZE);
	cout << "Введите количество сдвигов вправо "; cin >> num_of_shifts;
	ShiftRight(brr, SIZE, num_of_shifts);
	Print(brr, SIZE);

	//Для char
	const int N = 10;
	char Array[N];
	FillRand(Array, N);
	Print(Array, N);
	Sort(Array, N);
	Print(Array, N);
	cout << "Сумма элементов массива: " << Sum(Array, N) << endl;
	cout << "Среднее арифмитическое элементов массива: " << Avg(Array, N) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(Array, N) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(Array, N) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(Array, N, num_of_shifts);
	Print(Array, N);
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	ShiftRight(Array, N, num_of_shifts);
	Print(Array, N);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n) 
{
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
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
void Sort(double arr[], const int n) 
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
void Sort(char arr[], const int n) 
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

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
		int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValue > arr[i])minValue = arr[i];
	}
	return minValue;
}
double minValueIn(double arr[], const int n)
{
		double minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValue > arr[i])minValue = arr[i];
	}
	return minValue;
}
char minValueIn(char arr[], const int n)
{
		double minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValue > arr[i])minValue = arr[i];
	}
	return minValue;
}
int maxValueIn(int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++) 
	{
		if (maxValue < arr[i])maxValue = arr[i];
	}
	return maxValue;
}
double maxValueIn(double arr[], const int n)
{
	double maxValue = arr[0];
	for (int i = 0; i < n; i++) 
	{
		if (maxValue < arr[i])maxValue = arr[i];
	}
	return maxValue;
}
char maxValueIn(char arr[], const int n)
{
	double maxValue = arr[0];
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
void ShiftLeft(double arr[], const int n,int num_of_shifts)
{
	for (int i = 0; i < num_of_shifts; i++)
	{
	double buffer = arr[0];
		for (int i = 1; i < n; i++) 
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

	}
}
void ShiftLeft(char arr[], const int n,int num_of_shifts)
{
	for (int i = 0; i < num_of_shifts; i++)
	{
	double buffer = arr[0];
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
void ShiftRight(double arr[], const int n,int num_of_shifts) 
{
	ShiftLeft(arr, n, n - num_of_shifts);
}
void ShiftRight(char arr[], const int n,int num_of_shifts) 
{
	ShiftLeft(arr, n, n - num_of_shifts);
}
