#include <iostream>
using namespace std;

void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    selectionSort(arr, size);
    cout << "Sorted: ";
    display(arr, size);
}