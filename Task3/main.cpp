#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
void Print(T Matrix, int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
template <typename T>
void Init(T Matrix, int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			cout << "Enter [" << i << "][" << j << "] element: ";
			cin >> Matrix[i][j];
		}
	}
}
template <typename T>
void InitAuto(T Matrix, int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			Matrix[i][j] = rand() % 100;
		}
	}
}
template <typename T>
void ReverseMatrix(T Matrix, int rows, int cols)
{
	auto tmp = Matrix[0][0];
	for (int i = 0; i < rows/2; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmp = Matrix[i][j];
			Matrix[i][j] = Matrix[rows - 1 - i][j];
			Matrix[rows - 1 - i][j] = tmp;
		}
	}
}

int main()
{
	srand(time(nullptr));
	const int ROWS = 5, COLS = 5;
	int matrix[ROWS][COLS];
	InitAuto(matrix, ROWS, COLS);
	cout << "Matrix:\n";
	Print(matrix, ROWS, COLS);
	ReverseMatrix(matrix, ROWS, COLS);
	cout << "Reversed matrix:\n";
	Print(matrix, ROWS, COLS);
	system("pause");
	return 0;
}