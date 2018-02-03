# Exercises for tet 2018
### Deadline 26/02/2018

## Problem 04: 
Write a C++ program that contains a user-defined void function named elapsedTime that will compute
the interval between two time values (separate hours/minutes):
```c++
void elapsedTime(int h1, int m1, int h2, int m2, int& h, int& m)
```
Your function must determine the elapsed time regardless of the order of the values (i.e., the first input time
may be greater, less-than, or equal to the second input time).
The elapsed time should be expressed in hours/minutes and returned via the reference arguments h and m.
Note that the returned minutes value should not be larger than 59!

Your main program needs to do the following:
- Prompt the user and take as input two time values using the format hh:mm (including the colon).
- Call elapsedTime to compute the time interval.
- Display the result on the terminal display using a 'colon' character to separate the hours/minutes.
- Include a loop that will continue this process as long as the user wishes.

Examples:
```
Enter first time (hours:minutes) : 3:32
Enter second time (hours:minutes) : 3:45
Elapsed time is: 0:13
Continue? (y/n): y
Enter first time (hours:minutes) : 2:45
Enter second time (hours:minutes) : 2:32
Elapsed time is: 0:13
Continue? (y/n): y
Enter first time (hours:minutes) : 1:15
Enter second time (hours:minutes) : 14:15
Elapsed time is: 13:00
Continue? (y/n): n
```
