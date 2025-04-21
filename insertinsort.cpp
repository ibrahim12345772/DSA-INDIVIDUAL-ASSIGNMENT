#include <iostream>
using namespace std;

// Function to perform pointer-based insertion sort
void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int* keyPtr = arr + i;      // Pointer to current element
        int key = *keyPtr;
        int* j = arr + i - 1;       // Pointer to the previous element

        // Move elements greater than key to one position ahead
        while (j >= arr && *j > key) {
            *(j + 1) = *j;
            j--;
        }

        *(j + 1) = key;
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
    int arr[] = {9, 4, 6, 2, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

