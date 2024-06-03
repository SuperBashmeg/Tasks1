#include "lib.h"

int MaxValue(int arr[], int Size, int maxValue, int currentIteration);
int MaxValue(int arr[10][10], int Size, int maxValue, int currentX, int currentY);
int MaxValue(int arr[10][10][10], int Size, int maxValue, int currentX, int currentY, int currentZ);
int MaxValue(int a, int b);
int MaxValue(int a, int b, int c);
int arrayInit(int arr[], int Size);
int arrayInit(int arr[10][10], int Size);
int arrayInit(int arr[10][10][10], int Size);
void displayArray(int arr[], int Size);
void displayArray(int arr[10][10], int Size);
void displayArray(int arr[10][10][10], int Size);