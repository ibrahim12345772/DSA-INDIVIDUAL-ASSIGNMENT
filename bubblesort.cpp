#include <iostream>
using namespace std;

// Function to perform pointer-based bubble sort
void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int* j = arr; j < arr + n - i - 1; j++) {
            if (*j > *(j + 1)) {
                // Swap using pointers
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

// Function to print the array using pointers
void printArray(int* arr, int n) {
    for (int* p = arr; p < arr + n; p++) {
        cout << *p << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
