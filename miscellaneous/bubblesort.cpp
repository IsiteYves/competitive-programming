#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        i != n - 1 ? cout << arr[i] << ", " : cout << arr[i];
    cout << endl;
}

int main()
{
    int arr[] = {5, 2, 4, 6, 6, 1, 3, 9, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original: ";
    display(arr, size);
    bubbleSort(arr, size);
    cout << "Sorted: ";
    display(arr, size);
}