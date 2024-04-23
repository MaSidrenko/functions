#include"Shift.h"
void ShiftLeft(int arr[], const int n, int num_of_shifts)
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
void ShiftLeft(double arr[], const int n, int num_of_shifts)
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
void ShiftLeft(char arr[], const int n, int num_of_shifts)
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

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int num_of_shifts)
{

}



void ShiftRight(int arr[], const int n, int num_of_shifts)
{
	ShiftLeft(arr, n, n - num_of_shifts);
}
void ShiftRight(double arr[], const int n, int num_of_shifts)
{
	ShiftLeft(arr, n, n - num_of_shifts);
}
void ShiftRight(char arr[], const int n, int num_of_shifts)
{
	ShiftLeft(arr, n, n - num_of_shifts);
}