# C - Sorting algorithms & Big O

## Resources :books:

* [Sorting Algorithms](https://intranet.hbtn.io/rltoken/tmzgO7xhCpNgPUxVhLKibw)
* [Big O Notation](https://intranet.hbtn.io/rltoken/XrLMaOhUMHfwsFEz15TVow)
* [Sorting Algorithms Animation](https://intranet.hbtn.io/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ)
* [15 Sorting Algorithms in 6 Minutes](https://intranet.hbtn.io/rltoken/RdvoGNMTJ6Hq34aJ_HmCqA)
-------------------------------------------

## Learning Objectives

* At least four different sorting algorithms.
* What is the Big O notation, and how to evaluate the time complexity of an algorithm.
* How to select the best sorting algorithm for a given input.
* What is a stable sorting algorithm.
-----------------------------------------

## Requirements

### General
* Allowed editors: ```vi```, ```vim```, ```emacs```.
* All your files will be compiled on Ubuntu 14.04 LTS.
* Your programs and functions will be compiled with ```gcc 4.8.4``` using the flags ```-Wall``` ```-Werror``` ```-Wextra``` and ```-pedantic```
* All your files should end with a new line.
* A ```README.md``` file, at the root of the folder of the project, is mandatory.
* Your code should use the ```Betty``` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
* You are not allowed to use global variables.
* No more than 5 functions per file.
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
* In the following examples, the ```main.c``` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you   do we won’t take them into account). We will use our own ```main.c``` files at compilation. Our ```main.c``` files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called ```sort.h```
* Don’t forget to push your header file
* All your header files should be include guarded
* A list/array does not need to be sorted if its size is less than 2.
---------------------------------------------------------------------

## More Usefull Info

### Data Structure and Functions

* For this project you are given the following ```print_array```, and ```print_list``` functions:
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
* Please use the following data structure for doubly linked list:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
### Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://intranet.hbtn.io/rltoken/KkFXByKWf55lTK32JnY62w)
----------------------------------------------------------

## Contributors

* [Adrian Vides](https://github.com/AdrianVides56)
* [Julian Archbold](https://github.com/kiba0510)
