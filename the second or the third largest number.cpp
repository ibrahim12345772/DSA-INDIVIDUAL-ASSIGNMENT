#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int findKthLargest(const vector<int>& arr, int k) {
    if (k < 2 || k > 3) {
        cout << "Only supports finding 2nd or 3rd largest" << endl;
        return INT_MIN;
    }

    if (arr.size() < k) {
        cout << "Not enough elements" << endl;
        return INT_MIN;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int num : arr) {
        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second && num != first) {
            third = second;
            second = num;
        } else if (k == 3 && num > third && num != second && num != first) {
            third = num;
        }
    }

    if (k == 2) {
        return (second != INT_MIN) ? second : -1; // or throw an error
    } else {
        return (third != INT_MIN) ? third : -1;
    }
}

int main() {
    vector<int> arr = {5, 1, 9, 7, 2, 9};

    int second = findKthLargest(arr, 2);
    int third = findKthLargest(arr, 3);

    cout << "Second largest: " << second << endl;
    cout << "Third largest: " << third << endl;

    return 0;
}

