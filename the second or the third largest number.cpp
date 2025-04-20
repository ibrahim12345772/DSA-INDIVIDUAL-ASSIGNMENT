#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second != INT_MIN) ? second : -1;
}

int findThirdLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    return (third != INT_MIN) ? third : -1;
}

int main() {
    int n, choice;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Find:\n1. Second Largest\n2. Third Largest\nEnter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int second = findSecondLargest(arr, n);
        if (second == -1)
            cout << "Second largest element doesn't exist (need distinct elements).\n";
        else
            cout << "Second largest element is: " << second << endl;
    } else if (choice == 2) {
        int third = findThirdLargest(arr, n);
        if (third == -1)
            cout << "Third largest element doesn't exist (need more distinct elements).\n";
        else
            cout << "Third largest element is: " << third << endl;
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}

