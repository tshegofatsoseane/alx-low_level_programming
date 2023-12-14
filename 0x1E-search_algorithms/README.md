#Search Algorithms
##This repository contains various search algorithms implemented in C for searching elements in arrays, linked lists, and skip lists.

Linear Search (0-linear.c)
The linear_search function performs a linear search for a specified value in an array of integers.

c

int linear_search(int *array, size_t size, int value);
Binary Search (1-binary.c)
The binary_search function performs a binary search for a specified value in a sorted array of integers.

c

int binary_search(int *array, size_t size, int value);
Jump Search (100-jump.c)
The jump_search function performs a jump search for a specified value in a sorted array of integers.

c

int jump_search(int *array, size_t size, int value);
Interpolation Search (102-interpolation.c)
The interpolation_search function performs an interpolation search for a specified value in a sorted array of integers.

c

int interpolation_search(int *array, size_t size, int value);
Exponential Search (103-exponential.c)
The exponential_search function performs an exponential search for a specified value in a sorted array of integers.

c

int exponential_search(int *array, size_t size, int value);
Advanced Binary Search (104-advanced_binary.c)
The advanced_binary function performs an advanced binary search for a specified value in a sorted array of integers.

c

int advanced_binary(int *array, size_t size, int value);
Jump Search in a Linked List (105-jump_list.c)
The jump_list function performs a jump search for a specified value in a sorted singly linked list.

c

listint_t *jump_list(listint_t *list, size_t size, int value);
Linear Skip in a Skip List (106-linear_skip.c)
The linear_skip function performs a linear skip search for a specified value in a sorted singly linked list with an express lane.

c

skiplist_t *linear_skip(skiplist_t *list, int value);
Compilation
To compile the programs, use the following commands:

bash

gcc -Wall -Wextra -Werror -pedantic <filename.c> -o <output_file>
