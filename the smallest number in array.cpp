#include <iostream>
using namespace std;

int findMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {9, 2, 14, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minValue = findMinimum(arr, n);
    cout << "The smallest number in the array is: " << minValue << endl;

    return 0;
}

