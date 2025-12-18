# 🚀🔢 Sorting Algorithms & Big O 🔢🚀

## 📌 Project Description

Welcome to the **Sorting Algorithms & Big O** project!
In this project, we dive into the world of **sorting algorithms** and learn how to measure their performance using **Big O notation**.

The goal isn’t just to make numbers line up nicely, but it’s to truly understand:

* 🧠 *How* sorting algorithms work
* ⏱️ *How fast* (or slow) they are
* 🧩 *When* to use each one

---

## 🎯 Learning Objectives:

* 🔁 Explain at least **four different sorting algorithms**
* 📈 Understand **Big O notation** and analyze algorithm efficiency
* 🧪 Choose the **best sorting algorithm** for a given input
* 🔒 Explain what a **stable sorting algorithm** is
* 🔗 Understand the difference between sorting **arrays** and **linked lists**

---

## ⚙️ Environment & Constraints:

* 🧠 **Language:** C
* 🐧 **OS:** Ubuntu 20.04 LTS
* 🛠️ **Compiler:** gcc
* 🧪 **Compilation flags:**

  ```bash
  -Wall -Wextra -Werror -pedantic -std=gnu89
  ```
* ✨ **Code style:** Betty style
* ✍️ **Editors allowed:** vi, vim, emacs

### ❌ Restrictions:

* 🚫 No global variables
* 🚫 No more than **5 functions per file**
* 🚫 No standard library functions like `printf`, `puts`, etc.
* 🚫 Do **not** modify the integer values in list nodes (swap nodes instead!)
* ✅ All files must end with a **newline**

---

## 📁 Project Files

| 📄 File                   | 📌 Description                                      |
| ------------------------- | --------------------------------------------------- |
| `sort.h`                  | Header file with all prototypes and data structures |
| `0-bubble_sort.c`         | Bubble sort implementation for arrays               |
| `0-O`                     | Big O notation for Bubble sort                      |
| `1-insertion_sort_list.c` | Insertion sort for doubly linked lists              |
| `1-O`                     | Big O notation for Insertion sort                   |
| `2-selection_sort.c`      | Selection sort implementation                       |
| `2-O`                     | Big O notation for Selection sort                   |
| `3-quick_sort.c`          | Quick sort implementation                           |
| `3-O`                     | Big O notation for Quick sort                       |

---

## 🧩 Data Structures

### 🔗 Doubly Linked List

```c
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

---

## 🔢 Sorting Algorithms Implemented:

### 🫧 Bubble Sort

* Compares adjacent elements and swaps them if they’re in the wrong order
* Larger values "bubble" to the end 🫧
* ✅ Stable sorting algorithm

**⏱️ Time Complexity:**

* Best case: O(n)
* Average case: O(n²)
* Worst case: O(n²)

---

### 🧩 Insertion Sort (Doubly Linked List)

* Builds the sorted list one element at a time
* Great for small or nearly sorted lists
* ✅ Stable sorting algorithm

**⏱️ Time Complexity:**

* Best case: O(n)
* Average case: O(n²)
* Worst case: O(n²)

---

### 🎯 Selection Sort

* Selects the smallest element and places it in its correct position
* Same number of comparisons every time
* ❌ Not stable by default

**⏱️ Time Complexity:**

* Best case: O(n²)
* Average case: O(n²)
* Worst case: O(n²)

---

### ⚡ Quick Sort

* Uses a divide-and-conquer strategy
* Picks a pivot and partitions the array
* Very fast on average 🚀
* ❌ Not stable by default

**⏱️ Time Complexity:**

* Best case: O(n log n)
* Average case: O(n log n)
* Worst case: O(n²)

---

## 🧪 Compilation & Testing

Example compilation command:

```bash
gcc -Wall -Wextra -Werror -pedantic *.c print_array.c print_list.c -o sort
```

> ℹ️ `print_array.c` and `print_list.c` are provided during correction.

---

## 📌 Big O Notation Files

Each `*-O` file contains:

* 📄 One Big O notation per line
* 🧮 Ordered as: best, average, worst case
* 🚫 No extra blank lines or spaces
* ✅ Ends with exactly **one newline**

---

## Authors:

* 👩‍💻 **Norah Aljuhani - Implemented Tasks 0 and 1**
* 👩‍💻 **Manar Althqfi - Implemented Tasks 2 and 3**

---
