#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

#define tab "\t"
#define delimiter "\n|----------------------------------------------------------------------------|\n" << endl

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);


void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);


int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);


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
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	int num_of_shifts;
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее арифмитическое элементов массива " << Avg(i_arr, I_SIZE) << endl;
	cout << "Мнимальное значение массива: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значения массива: "<< maxValueIn(i_arr, I_SIZE) << endl;	
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(i_arr, I_SIZE, num_of_shifts);
	Print(i_arr, I_SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	ShiftRight(i_arr, I_SIZE, num_of_shifts);
	Print(i_arr, I_SIZE);
	cout << delimiter;

	//Для double
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее арифмитическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(d_arr, D_SIZE, num_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите количество сдвигов вправо "; cin >> num_of_shifts;
	ShiftRight(d_arr, D_SIZE, num_of_shifts);
	Print(d_arr, D_SIZE);
	cout << delimiter;

	//Для char
	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее арифмитическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr, C_SIZE) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(c_arr, C_SIZE, num_of_shifts);
	Print(c_arr, C_SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	ShiftRight(c_arr, C_SIZE, num_of_shifts);
	Print(c_arr, C_SIZE);
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифмитическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;



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
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) 
	{
	for (int j = 0; j <COLS; j++) 
	{
		arr[i][j] = rand() % 100;
	}
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
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	for (int i = 0; i < ROWS; i++) 
	{
	for(int j = 0; j < COLS; j++) 
	{
		cout << arr[i][j] << tab;
	}
	cout << endl;
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
				double buffer = arr[i];
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
				char buffer = arr[i];
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
	double sum = 0;
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++) 
	{
	for (int j = 0; j <COLS; j++) 
	{
		sum += arr[i][j];
	}
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
double Avg(int arr[ROWS][COLS], const int ROWS, int const COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
	char minValue = arr[0];
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
	char maxValue = arr[0];
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
	char buffer = arr[0];
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
