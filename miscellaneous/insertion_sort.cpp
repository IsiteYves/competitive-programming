#include <iostream>
using namespace std;

void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int x = i - 1;
        while (x >= 0 && arr[x] > key)
        {
            arr[x + 1] = arr[x];
            x--;
        }
        arr[x + 1] = key;
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
    insertionSort(arr, size);
    cout << "Sorted: ";
    display(arr, size);
}