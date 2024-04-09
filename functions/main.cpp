#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
int Factorial(int a);
double Power(double a, int b);

void main() 
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
	int a, b;
	int f = 1;
	cout << "Введите два числа: "; cin >> a >> b;
	cout << a << " + " << b << " = " << Sum(a, b) << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
	if (a < 0) {
		cout << -a << "! = " << Factorial(a) << endl;
	}
	else {
		cout << a << "! = " << Factorial(a) << endl;
	}
	cout << a << "^" << b << " = " << Power(a, b);
}
int Sum(int a, int b)
{
	return a + b;
}
int Diff(int a, int b) 
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quot(int a, int b) 
{
	return (double)a / b;
}
int Factorial(int a)
{
	int f = 1;
	if (a < 0) 
	{
		a = -a;
	}
	for (int i = 1; i <= a; i++) 
	{
	f *= i;
	}
	return f;
}
double Power(double a,int b) 
{
	 double z = 1;
	if (b < 0) 
	{
		a = 1 / a;
		b = -b;
	}
	for (int i = 0; i < b; i++) 
	{
		z *= a;
	}
	return z;
}

