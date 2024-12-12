# Sorting Algorithms in C++

Welcome to the **Sorting Algorithms Collection** repository! 🌐 This project contains implementations of some of the most popular and fundamental sorting algorithms in C++. Each algorithm is stored in its respective folder, ensuring modularity and ease of understanding.

---

## 🌟 Features

- **Comprehensive Collection:** From simple algorithms like Bubble Sort to advanced ones like Quick Sort.
- **Well-Structured Code:** Each algorithm is implemented in a clean and understandable format.
- **Educational Focus:** Great for students, educators, and enthusiasts to learn and analyze different sorting techniques.

---

## 📚 Algorithms Included

1. **Bubble Sort** 🎯  
   A simple algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

2. **Counting Sort** 🔢  
   A non-comparison-based sorting algorithm that works by counting the frequency of each element.

3. **Insertion Sort** 🍍  
   Builds the sorted array one item at a time by repeatedly picking the next element and placing it in its correct position.

4. **Merge Sort** 🧬  
   A divide-and-conquer algorithm that divides the array into halves, sorts them, and merges them back together.

5. **Natural Merge Sort** 🕰️  
   A variation of merge sort that takes advantage of existing sorted sequences in the input array.

6. **Quick Sort** 🚀  
   A highly efficient divide-and-conquer sorting algorithm that uses a pivot to partition the array.

7. **Radix Sort** 🌐  
   A non-comparative sorting algorithm that sorts numbers digit by digit.

8. **Selection Sort** ⚔️  
   Divides the input list into two parts: the sorted part and the unsorted part, and repeatedly selects the smallest (or largest) element from the unsorted part.

---

## 🔧 How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/sorting-algorithms-cpp.git
   ```
2. Navigate to the folder of the desired sorting algorithm.
3. Compile the C++ file using any C++ compiler (e.g., g++, clang).
4. Run the executable to see the algorithm in action.

Example:
```bash
cd "Bubble Sort"
g++ bubble_sort.cpp -o bubble_sort
./bubble_sort
```

---

## 🎓 Learning Objectives

- Understand the core logic behind each sorting algorithm.
- Compare the time and space complexities of different sorting methods.
- Learn to implement algorithms in C++ from scratch.

---

## 🌐 About

This repository is ideal for:
- Students learning about algorithms.
- Developers refreshing their knowledge of sorting techniques.
- Interview preparation.

---

## 🍀 Contributing

Contributions are welcome! Feel free to open an issue or create a pull request to add new algorithms, optimize existing ones, or fix bugs.

---

## 🎨 Screenshot

Here is a folder view of the project structure:

![Folder View](image.png)

---

## 📊 Time and Space Complexities

| Algorithm           | Best Case    | Average Case | Worst Case   | Space Complexity |
|---------------------|--------------|--------------|--------------|------------------|
| Bubble Sort         | O(n)         | O(n²)        | O(n²)        | O(1)             |
| Counting Sort       | O(n+k)       | O(n+k)       | O(n+k)       | O(n+k)          |
| Insertion Sort      | O(n)         | O(n²)        | O(n²)        | O(1)             |
| Merge Sort          | O(n log n)   | O(n log n)   | O(n log n)   | O(n)            |
| Natural Merge Sort  | O(n log n)   | O(n log n)   | O(n log n)   | O(n)            |
| Quick Sort          | O(n log n)   | O(n log n)   | O(n²)        | O(log n)        |
| Radix Sort          | O(nk)        | O(nk)        | O(nk)        | O(n+k)          |
| Selection Sort      | O(n²)        | O(n²)        | O(n²)        | O(1)             |

---

## 🌐 Repository Name

**Sorting-Algorithms-Cpp**

---

## ❤️ Acknowledgements

Special thanks to all contributors and the open-source community for their continuous support. Let’s learn and grow together! 🙌

