#include"Statistics.h"
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
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
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
double Avg(double arr[ROWS][COLS], const int ROWS, int const COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(char arr[ROWS][COLS], const int ROWS, int const COLS)
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

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			if (minValue > arr[i][j])minValue = arr[i][j];
		}
	}
	return minValue;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			if (minValue > arr[i][j])minValue = arr[i][j];
		}
	}
	return minValue;
}
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
		{
			if (minValue > arr[i][j])minValue = arr[i][j];
		}
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

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (maxValue < arr[i][j])maxValue = arr[i][j];
		}
	}
	return maxValue;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (maxValue < arr[i][j])maxValue = arr[i][j];
		}
	}
	return maxValue;
}
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (maxValue < arr[i][j])maxValue = arr[i][j];
		}
	}
	return maxValue;
}