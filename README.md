# Sorting Algorithms Project

This project implements several classic sorting algorithms in C, following Holberton School standards.  
Each task includes the algorithm implementation, complexity analysis, and printing of the array/list after each swap.

---

## Task 0: Bubble Sort

### Prototype
```c
void bubble_sort(int *array, size_t size);
Description
• 	Implements the Bubble Sort algorithm to sort an array of integers in ascending order.
• 	After each swap, the array is printed using the provided  function.
• 	If the array is  or has fewer than 2 elements, the function returns immediately.
Files
• 	
• 	
Complexity (File: 0-O)
O(n)      # Best case
O(n^2)    # Average case
O(n^2)    # Worst case
Task 1: Insertion Sort List
Prototype
void insertion_sort_list(listint_t **list);
Description
- Implements the Insertion Sort algorithm to sort a doubly linked list of integers in ascending order.
- Nodes are moved to their correct position relative to the sorted portion of the list.
- After each swap of nodes, the list is printed using the provided print_list function.
- If the list is empty, has only one node, or is NULL, the function returns immediately.
Files
- 1-insertion_sort_list.c
- 1-O
Complexity (File: 1-O)
O(n)      # Best case
O(n^2)    # Average case
O(n^2)    # Worst case
Task 2: Selection Sort
Prototype
void selection_sort(int *array, size_t size);
Description
- Implements the Selection Sort algorithm to sort an array of integers in ascending order.
- The algorithm repeatedly selects the smallest element from the unsorted portion and swaps it with the first unsorted element.
- After each swap, the array is printed using the provided print_array function.
- If the array is NULL or has fewer than 2 elements, the function returns immediately.
Files
- 2-selection_sort.c
- 2-O
Complexity (File: 2-O)
O(n^2)    # Best case
O(n^2)    # Average case
O(n^2)    # Worst case
Task 3: Quick Sort
Prototype
void quick_sort(int *array, size_t size);
Description
- Implements the Quick Sort algorithm to sort an array of integers in ascending order.
- Uses the Lomuto partition scheme, where the pivot is always the last element of the current partition.
- After each swap of two different elements, the array is printed using the provided print_array function.
- If the array is NULL or has fewer than 2 elements, the function returns immediately.
Files
- 3-quick_sort.c
- 3-O
Complexity (File: 3-O)
O(nlog(n))    # Best case
O(nlog(n))    # Average case
O(n^2)        # Worst case
## Authors

This project was completed collaboratively by:

- **Norah** → implemented **Task 0 (Bubble Sort)** and **Task 1 (Insertion Sort List)**
- **Manar** → implemented **Task 2 (Selection Sort)** and **Task 3 (Quick Sort)**
