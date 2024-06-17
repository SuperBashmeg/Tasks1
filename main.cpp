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
void shiftMatrix(T** arr, int row, int col, int times, string direction)
{
    if (direction == "left")
    {
        for (int t = 0; t < times; t++)
        {
            for (int i = 0; i < row; i++)
            {
                T temp = arr[i][0];
                for (int j = 0; j < col - 1; j++)
                {
                    arr[i][j] = arr[i][j + 1];
                }
                arr[i][col - 1] = temp;
            }
        }
    }
    else if (direction == "right")
    {
        for (int t = 0; t < times; t++)
        {
            for (int i = 0; i < row; i++)
            {
                T temp = arr[i][col - 1];
                for (int j = col - 1; j > 0; j--)
                {
                    arr[i][j] = arr[i][j - 1];
                }
                arr[i][0] = temp;
            }
        }
    }
    else if (direction == "up")
    {
        for (int t = 0; t < times; t++)
        {
            for (int j = 0; j < col; j++)
            {
                T temp = arr[0][j];
                for (int i = 0; i < row - 1; i++)
                {
                    arr[i][j] = arr[i + 1][j];
                }
                arr[row - 1][j] = temp;
            }
        }
    }
    else if (direction == "down")
    {
        for (int t = 0; t < times; t++)
        {
            for (int j = 0; j < col; j++)
            {
                T temp = arr[row - 1][j];
                for (int i = row - 1; i > 0; i--)
                {
                    arr[i][j] = arr[i - 1][j];
                }
                arr[0][j] = temp;
            }
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

int main()
{
    srand(time(0));
    int row = 5;
    int col = 5;
    int** arr = createMatrix<int>(row, col);
    randMatrix(arr, row, col);
    printMatrix(arr, row, col);
    cout << endl;
    shiftMatrix(arr, row, col, 1, "right");
    printMatrix(arr, row, col);
    deleteMatrix(arr, row);

}