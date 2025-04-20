
# Second and Third Largest Element Finder

This is a simple C++ console program that allows the user to input an array of integers and choose to find either the **second largest** or **third largest** element in the array.

---

## 🧠 Features

- Efficient one-pass algorithms (O(n) time complexity)
- Handles duplicate values appropriately
- Checks if enough distinct elements exist for second/third largest
- User input driven

---

## 📋 How It Works

The program defines two main functions:

- `findSecondLargest()`: Finds the second largest unique element.
- `findThirdLargest()`: Finds the third largest unique element.

The user is prompted to:

1. Enter the number of elements
2. Input the elements of the array
3. Choose whether to find the second or third largest element

---

## 🚀 How to Compile and Run

### Using g++ (Linux/Mac/Windows with MinGW):

```bash
g++ -o find_largest find_largest.cpp
./find_largest
