# SortingAlgorithms 📊

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Language: C++](https://img.shields.io/badge/Language-C++-00599C.svg)](https://isocpp.org/)
[![Language: Python](https://img.shields.io/badge/Language-Python-3776AB.svg)](https://www.python.org/)

> A comprehensive educational resource for mastering sorting algorithms through multi-language implementations and interactive visualizations.

## 🎯 Overview

**SortingAlgorithms** is an educational repository designed to help developers understand and master fundamental sorting techniques. This project features clean, well-documented implementations of 6 essential sorting algorithms across multiple programming languages (C, C++, Python), complete with complexity analysis and practical examples.

### 🌐 Interactive Learning Platform

**Experience sorting algorithms in action!** Visit our interactive visualization tool:

### 🔗 [learnsorting.lovable.app](https://learnsorting.lovable.app/)

The companion website provides:
- Real-time algorithm animations
- Step-by-step execution visualization
- Interactive controls to understand each sorting technique
- Visual comparison of different algorithms

---

## 📚 Implemented Algorithms

| Algorithm | Time Complexity (Best) | Time Complexity (Average) | Time Complexity (Worst) | Space Complexity | Stable | In-Place |
|-----------|------------------------|---------------------------|-------------------------|------------------|--------|----------|
| **Bubble Sort** | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes | ✅ Yes |
| **Selection Sort** | O(n²) | O(n²) | O(n²) | O(1) | ❌ No | ✅ Yes |
| **Insertion Sort** | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes | ✅ Yes |
| **Shell Sort** | O(n log n) | O(n^(4/3)) | O(n²) | O(1) | ❌ No | ✅ Yes |
| **Counting Sort** | O(n + k) | O(n + k) | O(n + k) | O(k) | ✅ Yes | ❌ No |
| **Radix Sort** | O(d × n) | O(d × n) | O(d × n) | O(n + k) | ✅ Yes | ❌ No |

*where n = number of elements, k = range of input, d = number of digits*

---

## 🗂️ Repository Structure

```
SortingAlgorithms/
├── BubbleSort/
│   ├── bubble_sort.c
│   ├── bubble_sort.cpp      (Coming Soon)
│   ├── bubble_sort.py       (Coming Soon)
│   └── README.md
├── SelectionSort/
│   ├── selection_sort.c
│   ├── selection_sort.cpp   (Coming Soon)
│   ├── selection_sort.py    (Coming Soon)
│   └── README.md
├── InsertionSort/
│   ├── insertion_sort.c
│   ├── insertion_sort.cpp   (Coming Soon)
│   ├── insertion_sort.py    (Coming Soon)
│   └── README.md
├── ShellSort/
│   ├── shell_sort.c
│   ├── shell_sort.cpp       (Coming Soon)
│   ├── shell_sort.py        (Coming Soon)
│   └── README.md
├── CountingSort/
│   ├── counting_sort.c
│   ├── counting_sort.cpp    (Coming Soon)
│   ├── counting_sort.py     (Coming Soon)
│   └── README.md
├── RadixSort/
│   ├── radix_sort.c
│   ├── radix_sort.cpp       (Coming Soon)
│   ├── radix_sort.py        (Coming Soon)
│   └── README.md
├── README.md
└── LICENSE
```

---

## 🚀 Getting Started

### Prerequisites

- **For C implementations:**
  - GCC compiler (version 7.0 or higher)
  - Make (optional, for build automation)

- **For C++ implementations:** *(Coming Soon)*
  - G++ compiler (version 7.0 or higher)

- **For Python implementations:** *(Coming Soon)*
  - Python 3.7 or higher

### Compiling and Running (C)

Each algorithm folder contains its own implementation. Navigate to the desired folder and compile:

```bash
# Navigate to algorithm folder
cd BubbleSort

# Compile the C code
gcc bubble_sort.c -o bubble_sort

# Run the executable
./bubble_sort
```

Or use the following one-liner:
```bash
gcc bubble_sort.c -o bubble_sort && ./bubble_sort
```

---

## 📖 Algorithm Details

### 1. Bubble Sort (Exchange Sort)

**Description:** Repeatedly steps through the list, compares adjacent elements, and swaps them if they're in the wrong order. The process repeats until the list is sorted.

**Best Use Cases:**
- Small datasets
- Educational purposes
- Nearly sorted data

**Advantages:**
- Simple to understand and implement
- Stable sorting algorithm
- In-place sorting (no extra memory needed)

**Disadvantages:**
- Very inefficient for large datasets
- O(n²) time complexity

---

### 2. Selection Sort

**Description:** Divides the input into sorted and unsorted regions. Repeatedly selects the smallest (or largest) element from the unsorted region and moves it to the end of the sorted region.

**Best Use Cases:**
- Small datasets
- When memory write operations are costly
- When simplicity is preferred over efficiency

**Advantages:**
- Simple implementation
- Performs well with small lists
- Minimum number of swaps (O(n))

**Disadvantages:**
- Inefficient on large lists
- Not stable by default
- Always O(n²) comparisons

---

### 3. Insertion Sort

**Description:** Builds the final sorted array one item at a time. Takes each element and inserts it into its correct position in the already sorted portion.

**Best Use Cases:**
- Small datasets
- Nearly sorted data
- Online sorting (sorting data as it's received)

**Advantages:**
- Simple and intuitive
- Efficient for small data sets
- Adaptive: O(n) for nearly sorted data
- Stable and in-place

**Disadvantages:**
- Inefficient for large datasets
- O(n²) time complexity in worst case

---

### 4. Shell Sort

**Description:** A generalization of insertion sort that allows exchange of items that are far apart. It starts by sorting pairs of elements far apart from each other, then progressively reducing the gap.

**Best Use Cases:**
- Medium-sized datasets
- When quicksort/mergesort overhead is too high
- Embedded systems with limited memory

**Advantages:**
- Faster than insertion/bubble/selection sort
- In-place sorting
- No quadratic worst-case scenarios for good gap sequences

**Disadvantages:**
- Not stable
- Optimal gap sequence is unknown
- Complexity depends on gap sequence

---

### 5. Counting Sort

**Description:** A non-comparison based sorting algorithm that works by counting the number of objects having distinct key values. Uses this count to calculate positions of elements.

**Best Use Cases:**
- When range of input values (k) is not significantly larger than n
- Sorting integers within a known range
- As a subroutine for radix sort

**Advantages:**
- Linear time complexity O(n + k)
- Stable sorting algorithm
- Efficient when range is limited

**Disadvantages:**
- Requires extra space proportional to range
- Only works with non-negative integers (or requires offset)
- Inefficient when range k >> n

---

### 6. Radix Sort

**Description:** A non-comparison based sorting algorithm that processes individual digits. Sorts numbers digit by digit, starting from the least significant digit to the most significant digit.

**Best Use Cases:**
- Sorting large sets of integers
- Fixed-length string sorting
- When data has multiple keys

**Advantages:**
- Linear time complexity for fixed-length integers
- Stable sorting algorithm
- Efficient for large datasets with small digit count

**Disadvantages:**
- Requires stable intermediate sorting (usually counting sort)
- Space complexity O(n + k)
- Less flexible than comparison-based sorts

---

## 🎓 Learning Path

### For Beginners
Start with these algorithms to understand sorting fundamentals:
1. **Bubble Sort** - Understand the basic concept of sorting
2. **Selection Sort** - Learn about finding minimum/maximum
3. **Insertion Sort** - Grasp the concept of building sorted sequences

### Intermediate
Progress to more efficient algorithms:
4. **Shell Sort** - Introduction to gap-based sorting
5. **Counting Sort** - Learn non-comparison based sorting

### Advanced
Master specialized techniques:
6. **Radix Sort** - Digit-by-digit processing

---

## 📊 Performance Comparison

### Time Complexity Visualization

For a dataset of 10,000 elements:

| Algorithm | Random Data | Nearly Sorted | Reverse Sorted |
|-----------|-------------|---------------|----------------|
| Bubble Sort | ~100s | ~0.5s | ~200s |
| Selection Sort | ~50s | ~50s | ~50s |
| Insertion Sort | ~50s | ~0.01s | ~100s |
| Shell Sort | ~0.5s | ~0.1s | ~1s |
| Counting Sort | ~0.001s* | ~0.001s* | ~0.001s* |
| Radix Sort | ~0.005s* | ~0.005s* | ~0.005s* |

*Assuming limited range of values

**Note:** Actual performance depends on implementation, hardware, and data characteristics.

---

## 🔍 When to Use Which Algorithm?

### Choose Bubble Sort when:
- Dataset is very small (< 10 elements)
- Learning/teaching sorting concepts
- Data is already nearly sorted

### Choose Selection Sort when:
- Memory writes are expensive
- Dataset is small
- Simplicity is more important than speed

### Choose Insertion Sort when:
- Dataset is small or nearly sorted
- Building sorted list incrementally
- Stability is required

### Choose Shell Sort when:
- Dataset is medium-sized (100-5000 elements)
- Want better performance than O(n²) without recursion
- Memory is limited

### Choose Counting Sort when:
- Sorting integers with a small range
- Need linear time complexity
- Stability is important

### Choose Radix Sort when:
- Sorting large sets of integers or fixed-length strings
- Range of values is large but digit count is small
- Need stable, non-comparison based sorting

---

## 🛠️ Future Enhancements

- [ ] Add C++ implementations for all algorithms
- [ ] Add Python implementations for all algorithms
- [ ] Include performance benchmarking tools
- [ ] Add unit tests for each implementation
- [ ] Create visual comparison graphs
- [ ] Add hybrid sorting algorithms (TimSort, IntroSort)
- [ ] Include advanced algorithms (MergeSort, QuickSort, HeapSort)
- [ ] Add parallel/concurrent sorting implementations
- [ ] Create detailed video tutorials
- [ ] Add algorithm animation GIFs to each README

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. **Fork** the repository
2. **Create** a new branch (`git checkout -b feature/improvement`)
3. **Make** your changes
4. **Test** thoroughly
5. **Commit** your changes (`git commit -am 'Add new feature'`)
6. **Push** to the branch (`git push origin feature/improvement`)
7. **Create** a Pull Request

### Contribution Guidelines

- Ensure code is well-commented and follows the existing style
- Add or update README files for new algorithms
- Test your implementations with various input cases
- Update the main README if adding new algorithms

---

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 👨‍💻 Author

**Fakrul Islam**
- 🎓 Bachelor's in Computer Engineering, Politecnico di Torino
- 💼 LinkedIn: [Fakrul Islam Arif](https://www.linkedin.com/in/fakrul-islam-arif/)
- 🌐 Interactive Project: [learnsorting.lovable.app](https://learnsorting.lovable.app/)

---

## 🙏 Acknowledgments

- Thanks to the computer science community for comprehensive sorting algorithm documentation
- Interactive visualizations powered by [Lovable](https://lovable.app)
- Inspired by classic computer science textbooks and courses

---

## 📚 Additional Resources

### Books
- "Introduction to Algorithms" by Cormen, Leiserson, Rivest, and Stein
- "The Art of Computer Programming, Vol. 3: Sorting and Searching" by Donald Knuth
- "Algorithms" by Robert Sedgewick and Kevin Wayne

### Online Resources
- [Visualgo](https://visualgo.net/) - Algorithm visualizations
- [GeeksforGeeks Sorting](https://www.geeksforgeeks.org/sorting-algorithms/) - Detailed explanations
- [Big-O Cheat Sheet](https://www.bigocheatsheet.com/) - Complexity reference

### Videos
- [Sorting Algorithms Visualized](https://www.youtube.com/watch?v=kPRA0W1kECg)
- [CS50 Sorting Algorithms](https://www.youtube.com/watch?v=jFPCSsY4gMY)

---

## ⭐ Show Your Support

If you found this repository helpful, please consider giving it a ⭐️!

---

**Happy Sorting! 🎉**

*Learn. Code. Visualize. Master.*
