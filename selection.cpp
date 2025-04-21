#include <iostream>
using namespace std;

// Function to perform pointer-based selection sort
void selectionSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int* minPtr = arr + i; // Pointer to the current minimum element

        // Find the minimum element in the unsorted part
        for (int* j = arr + i + 1; j < arr + n; j++) {
            if (*j < *minPtr) {
                minPtr = j;
            }
        }

        // Swap the found minimum with the current element
        if (minPtr != arr + i) {
            int temp = *(arr + i);
            *(arr + i) = *minPtr;
            *minPtr = temp;
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
    int arr[] = {29, 10, 14, 37, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

