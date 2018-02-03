# Exercises for tet 2018
### Deadline 26/02/2018

## Problem 03: 
The ancient Roman numbering system employed a sequence of letters to represent numeric values. Values
were obtained by summing individual letter values in a left-to-right fashion. The value of individual Roman
numerals is provided in the following list:
```
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000
```
In Roman numbers, larger numeral values generally appear before smaller values, and no single numeral may
be repeated more than 3 times in a row. There are a few numbers that cannot be represented with these
restrictions, so an additional rule was provided to deal with these cases: if a higher value numeral is preceded
by a single smaller numeral, the smaller value is subtracted from the larger one. This rule is only applied to a
small number of cases: IV (4), IX (9), XL (40), XC (90), CD (400) and CM (900). Using these simple rules,
we can construct a method to convert an integer (decimal) value to a Roman number as follows:

#### Step 1:
```
If the value of the number is in [900,999] output “CM”
If the value is in [500,899] output “D”
If the value is in [400,499] output “CD”
If the value is in [100,399] output “C”
If the value is in [90,99] output “XC”
If the value is in [50,89] output “L”
If the value is in [40,49] output “XL”
If the value is in [10,39] output “X”
If the value is 9, output “IX”
If the value is in [5,8] output “V”
If the value is 4, output “IV”
If the value is in [1,3], output “I”
```

#### Step 2:
Subtract the value of the 1 or 2 letter sequence that was just output from the integer number value,
producing a 'remainder.' For example, if the original number was 93, the program would have printed
“XC” in Step 1, and then, in this step, subtracted 90 to get a remainder of 3, and then continued with
3 as the number.

#### Step 3:
Repeat the process until the remainder value is zero.


Using this method, write a program that does the following:
- Reads in an integer value from 1 to 999, inclusive.
- Checks to make sure the input value is > 0 and <1000. If not, output an error message and exit the
program without doing anything.
- Converts the input value to a Roman number and output it as a string of consecutive letters without
any spaces (ie., XCIII)

Example:
```
Enter an integer value from 1 to 999: 0
Invalid input. Program terminated.

Enter an integer value from 1 to 999: 42
Roman numeral equivalent: XLII

Enter an integer value from 1 to 999: 3
Roman numeral equivalent: III

Enter an integer value from 1 to 999: 9
Roman numeral equivalent: IX

Enter an integer value from 1 to 999: 999
Roman numeral equivalent: CMXCIX
```
