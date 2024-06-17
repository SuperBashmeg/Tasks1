#include "lib.h"

template <typename T>
T** createMatrix(int row, int col)
{
    T** arr = new T * [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new T[col];
    }
    return arr;
}

template <typename T>
void deleteMatrix(T** arr, int row)
{
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
template <typename T>
void randMatrix(T** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}
template <typename T>
void printMatrix(T** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


template <typename T>
void addColumn(T**& arr, int& row, int& col, int index)
{
	T** temp = createMatrix<T>(row, col + 1);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col + 1; j++)
		{
			if (j < index)
			{
				temp[i][j] = arr[i][j];
			}
			else if (j == index)
			{
				temp[i][j] = 0;
			}
			else
			{
				temp[i][j] = arr[i][j - 1];
			}
		}
	}
	deleteMatrix(arr, row);
	arr = temp;
	col++;
}

int main()
{
    srand(time(0));
    int row = 5;
    int col = 5;
    int** arr = createMatrix<int>(row, col);
    randMatrix(arr, row, col);
    printMatrix(arr, row, col);
	cout << endl;
	addColumn(arr, row, col, 2);
	printMatrix(arr, row, col);
    deleteMatrix(arr, row);
}