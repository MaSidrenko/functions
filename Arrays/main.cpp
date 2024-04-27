#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

#define tab "\t"
#define delimeter "\n|-----------------------------------------------------------------------------------|\n\n"
int const ROWS = 5;
int const COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], int const  ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], int const ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Sum(char arr[], const int n);
const char* Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
const char* Avg(char arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Avg(char* arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T arr[], const int n);
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(T arr[], const int n);
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void ShiftLeft(T arr[], const int n, int num_of_shifts);
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int num_of_shifts);

template<typename T>void ShiftRight(T arr[], const int n, int num_of_shifts);
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int num_of_shifts);

//#define F_ARR_I
//#define F_ARR_D

void main()
{
	setlocale(LC_ALL, "");
	int num_of_shifts;
#ifdef F_ARR_I
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое элементов массива " << Avg(arr, n) << endl;
	cout << "Мнимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значения массива: " << maxValueIn(arr, n) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(arr, n, num_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	ShiftRight(arr, n, num_of_shifts);
	Print(arr, n);
	cout << delimeter;
#endif // F_ARR_I


#ifdef F_ARR_D
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(d_arr, D_SIZE, num_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	ShiftRight(d_arr, D_SIZE, num_of_shifts);
	Print(d_arr, D_SIZE);
	cout << delimeter;

#endif // F_ARR_D

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << delimeter;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифмитическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, num_of_shifts);
	Print(i_arr_2, ROWS, COLS);
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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}
template<typename T>void Print(T arr[], const int n) 
{
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T>void Print(T arr[ROWS][COLS], int const  ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) 
	{
		for (int j = 0; j < COLS; j++) 
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
template<typename T>void Sort(T arr[], const int n) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			if (arr[j] < arr[i]) {
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					if (arr[i][j] > arr[k][l]) {
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
const char* Sum(char arr[], const int n)
{
	return "Error: for data type char the sum not calculated";
}
const char* Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "Error: for data type char the sum not calculated";
}
template<typename T>double Avg(T arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}
const char* Avg(char arr[], const int n)
{
	return "Error: for data type char AVG not calculated";
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (double)(ROWS * COLS);
}
const char* Avg(char* arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "Error: for data type char AVG not calculated";
}
template<typename T>T minValueIn(T arr[], const int n)
{
	T minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (minValue > arr[i])minValue = arr[i];
	}
	return minValue;
}
template<typename T>T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (minValue > arr[i][j])minValue = arr[i][j];
		}
	}
	return minValue;
}
template<typename T>T maxValueIn(T arr[], const int n)
{
	T maxValue = arr[0];
	for (int i = 0; i < n; i++) 
	{
		if (maxValue < arr[i])maxValue = arr[i];
	}
	return maxValue;
}
template<typename T>T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (maxValue < arr[i][j])maxValue = arr[i][j];
		}
	}
	return maxValue;
}
template<typename T>void ShiftLeft(T arr[], const int n,int num_of_shifts)
{
	for (int i = 0; i < num_of_shifts; i++)
	{
	T buffer = arr[0];
		for (int i = 1; i < n; i++) 
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

	}
}
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int num_of_shifts)
{
	for (int i = 0; i < num_of_shifts; i++)
	{
		for (int j = 0; j < num_of_shifts; j++)
		{
	
		}
	}
}
template<typename T>void ShiftRight(T arr[], const int n,int num_of_shifts) 
{
	ShiftLeft(arr, n, n - num_of_shifts);
}
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int num_of_shifts)
{

}
