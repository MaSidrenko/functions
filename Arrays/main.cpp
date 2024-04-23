#include"stdafx.h"
#include"Constants.h"

#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"


//#define FUNCTION_ARR_INT;
//#define FUNCTION_ARR_DOUBLE;
//#define FUNCTION_ARR_CHAR;


void main()
{
	setlocale(LC_ALL, "");
	int num_of_shifts;
#ifdef FUNCTION_ARR_INT
	//Для int
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее арифмитическое элементов массива " << Avg(i_arr, I_SIZE) << endl;
	cout << "Мнимальное значение массива: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значения массива: " << maxValueIn(i_arr, I_SIZE) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(i_arr, I_SIZE, num_of_shifts);
	Print(i_arr, I_SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> num_of_shifts;
	ShiftRight(i_arr, I_SIZE, num_of_shifts);
	Print(i_arr, I_SIZE);
	cout << delimiter;
#endif // FUNCTION_ARR_INT

#ifdef FUNCTION_ARR_DOUBLE
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
#endif // FUNCTION_ARR_DOUBLE

#ifdef FUNCTION_ARR_CHAR
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
#endif // FUNCTION_ARR_CHAR

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифмитическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимасльное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Введите количество сдвигов влево: "; cin >> num_of_shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, num_of_shifts);
	Print(i_arr_2, ROWS, COLS);
}