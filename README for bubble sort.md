 Pointer-Based Bubble Sort in C++
📝 Description
This C++ program implements the Bubble Sort algorithm using pointers instead of array indexing. It demonstrates how to use pointer arithmetic to traverse and manipulate array elements during sorting.

💡 Features
Fully pointer-based implementation (no array indexing).

In-place sorting without extra memory usage.

Clearly shows how swapping works using pointer dereferencing.

📂 File Structure
cpp
Copy
Edit
bubble_sort.cpp   // Main source file with sorting logic
⚙️ How It Works
bubbleSort(int* arr, int n):

Uses nested loops to compare and swap adjacent elements.

Pointer j traverses through the array using pointer arithmetic.

Swapping is done via dereferencing *j and *(j + 1).

printArray(int* arr, int n):

Prints the array using pointer traversal from arr to arr + n.

main():

Initializes a test array.

Displays it before and after sorting.

🧪 Sample Output
php
Copy
Edit
Original array: 64 34 25 12 22 11 90 
Sorted array: 11 12 22 25 34 64 90 
🚀 How to Compile & Run
Ensure you have a C++ compiler like g++.

Compile:
bash
Copy
Edit
g++ -o bubble_sort bubble_sort.cpp
Run:
bash
Copy
Edit
./bubble_sort
📊 Time Complexity

Case	Time Complexity
Best Case	O(n)
Average	O(n²)
Worst Case	O(n²)
Space	O(1)
Best case applies only if the algorithm is optimized with a "no swaps" check (not included here).

Good for educational purposes and small datasets.

📎 Notes
Demonstrates how to sort arrays using only pointer arithmetic.

Not suitable for large datasets due to quadratic time complexity.

Great for learning low-level array manipulation and memory access.










