# Exercises for tet 2018
### Deadline 26/02/2018

## Problem 08:
Sorting a list of numbers is an important Computer Science problem that has been extensively studied. One
of the simplest methods is known as “bubble sort”. Given a list of numbers:
```
3 5 2 8 9 1
```
the basic idea is to compare the first two numbers in the list and swap them if the first one is larger than the
second (assuming you wish to sort from low to high). Next, the second and third numbers are compared and
swapped if necessary, then the third and fourth, fourth and fifth, and so on until the entire list has been
examined. After the first pass through, the list would look like this:
```
 3 2 5 8 1 9
```
Note that the largest value will always end up in the last position after the first pass.
Next, we repeat the process, “bubbling” the larger values up in the list on each pass. Note however, that for
the second pass we don’t need to examine the last value because it’s guaranteed to be the largest. After the
second pass, the last two values need not be examined, and so on.
The process ends when an entire pass through the list results in no values being swapped.
Write a program that will implement the Bubble-Sort algorithm. For this problem you need to do the
following:
- Declare an integer array named list that contains 50 values.
- Using a loop, initialize list with the values 100 , 99, 98, … (in decreasing order)
- Construct a void function named bsort that implements the Bubble Sort algorithm as
described above. Your function should accept two arguments: the integer array to be sorted
and the number of elements in the array.
- Call the bsort function to arrange the elements of list in increasing order.
- Print out the elements of list, 5 per line as follows:

Example:
```
51     52     53     54     55
56     57     58     59     60  
 (and so on…)
 ```
 
[Hint: This problem will be much easier if you attack it in stages. First, write a swap function that will swap
two integer values, then write another function that will make a single pass through the array, calling the swap function to correct any out-of-order elements. Finally, call this second function as many times as
necessary to sort the array ]
