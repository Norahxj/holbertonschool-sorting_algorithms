# Sorting Algorithms Project

i## Project Overview
This project focuses on implementing different sorting algorithms in C and analyzing their time complexity using Big O notation.

The project includes sorting algorithms for both arrays and doubly linked lists, following the project requirements.

---

## Authors
- Noura Implemented tasks 0 and 1  
- Manar Implemented tasks 2 and 3  

---

## Technologies Used
- Language: C
- Compiler: gcc
- Style: Betty style
- OS: Ubuntu 20.04 LTS

---
## Project Files

| File Name | Description |
|---------|-------------|
| sort.h  | Header file containing data structures and function prototypes |
| 0-bubble_sort.c | Bubble Sort algorithm |
| 0-O | Time complexity for Bubble Sort |
| 1-insertion_sort_list.c | Insertion Sort for doubly linked list |
| 1-O | Time complexity for Insertion Sort |
| 2-selection_sort.c | Selection Sort algorithm |
| 2-O | Time complexity for Selection Sort |
| 3-quick_sort.c | Quick Sort algorithm (Lomuto scheme) |
| 3-O | Time complexity for Quick Sort |
| README.md | Project documentation |

---
## sort.h
The sort.h header file includes:
- Definition of the listint_t doubly linked list structure
- Prototypes for all required sorting functions
- Prototypes for helper printing functions

---

## Implemented Algorithms

### Bubble Sort
Sorts an array by repeatedly swapping adjacent elements.

Time Complexity
- Best: O(n)
- Average: O(n²)
- Worst: O(n²)

---

### Insertion Sort (Doubly Linked List)
Sorts a doubly linked list by inserting elements in their correct position.

Time Complexity
- Best: O(n)
- Average: O(n²)
- Worst: O(n²)

---

### Selection Sort
Selects the minimum element and places it at the correct position.

Time Complexity
- Best: O(n²)
- Average: O(n²)
- Worst: O(n²)

---

### Quick Sort (Lomuto Partition)
A divide-and-conquer sorting algorithm using recursion.

Time Complexity
- Best: O(n log n)
- Average: O(n log n)
- Worst: O(n²)

---

## Big O Notation Files
Each *-O file contains:
1. Best case complexity
2. Average case complexity
3. Worst case complexity

---

## Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sort
