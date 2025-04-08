#include <iostream>
using namespace std;

int findSmallestNumber(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty." << endl;
        return -1; // Or any sentinel/error value
    }

    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main() {
    int arr[] = {5, 2, 8, -3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallestNumber(arr, size);
    cout << "Smallest number in the array: " << smallest << endl;

    return 0;
}
