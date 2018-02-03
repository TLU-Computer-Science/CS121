# Exercises for tet 2018
### Deadline 26/02/2018

## Problem 05: 
A certain airline is required to report statistics regarding their on-time flight performance. You've been given
the following data sample consisting of the flight number, the scheduled arrival time, and the actual arrival
time for a few flights.

| Flight Number | Scheduled Arrival Time | Actual Arrival Time |
|:-------------:|:----------------------:|:-------------------:|
| NW1735        |          12:03         |        12:15        |
| NW1395        |          12:56         |        13:21        |
| UA8863        |          2:19          |         2:20        |
| NW2852        |          2:45          |         3:15        |
| UA2740        |          3:10          |         4:00        |
| NW1568        |          3:10          |         3:11        |
| NW9886        |          14:21         |        19:36        |
| DL2981        |          18:36         |        19:21        |
| UA882         |          5:15          |         5:15        |
| UA231         |          7:16          |         7:44        |

Write a C++ program to record this data in a file. Specifically, write a program that will do the following:
- Open an output file with the filename flightData.dat and determine if the file was opened
successfully. If not, provide a suitable error message and exit the program.
- Prompt the user and input three strings for the flight number and the two arrival times. Include the
colon character ':' in the time values.
- Write the strings to the file. Each datum should be separated by a single space and the line should be
delimited (terminated) with a newline ('\n')
- Continue to input and write data to the file until the user inputs the sentinel string "end" (lowercase)
for the flight number. **Do not write the sentinel value to the file!**
- Close the file before exiting the program.

Example:
```
enter flight number: NW1735
enter scheduled/actual arrival times: 12:03 12:15
enter flight number: NW1395
enter scheduled/actual arrival times: 12:56 13:21
.
.
enter flight number: UA231
enter scheduled/actual arrival times: 7:16 7:44
enter flight number: end
```
Now test your program by entering all the flight data above. When you have finished entering the data, use a 
text editor to view the flightData.dat file to ensure it is correct and properly formatted:
```
NW1735 12:03 12:15
NW1395 12:56 13:21
UA8863 2:19 2:20
NW2852 2:45 3:15
UA2740 3:10 4:00
NW1568 3:10 3:11
NW9886 14:21 19:36
DL2981 18:36 19:21
UA882 5:15 5:15
UA231 7:16 7:44
```
