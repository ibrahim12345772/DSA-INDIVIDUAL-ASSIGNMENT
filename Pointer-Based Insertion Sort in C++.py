 Pointer-Based Insertion Sort in C++
📝 Description
This program demonstrates how to implement the Insertion Sort algorithm using pointers in C++. Instead of using traditional array indexing, pointer arithmetic is used for both sorting and displaying the array.

💡 Features
Uses raw pointer manipulation for sorting.

Demonstrates pointer-based traversal and element access.

Outputs both the original and sorted arrays.

📂 File Structure
cpp
Copy
Edit
insertion_sort.cpp   // Main source file containing the sorting logic
⚙️ How It Works
insertionSort(int* arr, int n):

Implements the classic insertion sort algorithm.

Uses pointer arithmetic to compare and shift elements in place.

printArray(int* arr, int n):

Prints elements using a pointer instead of array indexing.

main():

Defines a sample array, prints it, sorts it using insertionSort, and prints the sorted result.

🧪 Sample Output
php
Copy
Edit
Original array: 9 4 6 2 7 1 
Sorted array: 1 2 4 6 7 9 
🚀 How to Compile & Run
Make sure you have a C++ compiler like g++ installed.

Compile:
bash
Copy
Edit
g++ -o insertion_sort insertion_sort.cpp
Run:
bash
Copy
Edit
./insertion_sort
📊 Time Complexity
Best Case: O(n) – already sorted array

Average/Worst Case: O(n²)

Space Complexity: O(1) – in-place sorting

📎 Notes
Pointer-based sorting is a great way to understand memory access and manipulation in C++.

Efficient for small datasets, but less optimal than advanced algorithms like Merge or Quick Sort for large inputs.

Let me know if you'd like this turned into a Markdown file or want README files for other sorting algorithms as we