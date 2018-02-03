# Exercises for tet 2018
### Deadline 26/02/2018

## Problem 07: 
The casino game Table Craps is a dice game in which a number of betting options are available depending on
the eventual roll of a pair of dice. Players may bet "for" or "against" certain outcomes in a dizzying array of
combinations with varying odds. Each round of Craps begins with an initial roll of the dice (the so-called
'come-out' roll). The player 'wins' if the initial roll totals 7 or 11, and 'Craps out' (loses) if the roll is 2, 3 or
12. Any other initial roll (4, 5, 6, 8, 9, 10) becomes the point value. The player continues rolling dice until
either the point is matched or a 7 is rolled (whichever occurs first). If the point is matched the player wins, if
a 7 is rolled the player loses.

Write a program to simulate the game of Craps. Your program must do the following:
- Include a void function, ***diceRoll***, that will call the rand() function and provide 2 pseudorandom
integer values in the range [1..6] representing a single roll of the dice. You need to use
reference parameters to return the individual values of each die.
- Include a second void function, ***displayRoll*** that will output the values of two individual die: n, m
to the console in the following format: [n,m] (include the brackets and comma).
- Simulate the initial (come-out) roll by calling the ***diceRoll*** function and then display the outcome
using the ***displayRoll*** function. Determine if the result is 'win', 'lose' or 'point' and display the
result.
- If a point is established, output a message to indicate the value of the point (4, 5, 6, 8, 9, 10) and
continue to simulate play until either a '7' is rolled or the point is matched. Display the result of each
roll as you continue. Finally, indicate if the player wins or loses at the end.
Here's a sample output:
```
Initial roll is: [6,5] = 11
 You win!
Initial roll is: [5,2] = 7
 You win!
Initial roll is: [1,1] = 2
 Craps! Sorry, you lose
Initial roll is: [4,4] = 8
 Point is 8. Roll again
 Roll is: [5,4] = 9
 Roll is: [5,1] = 6
 Roll is: [2,1] = 3
 Roll is: [4,2] = 6
 Roll is: [1,6] = 7 Sorry, you lose
Initial roll is: [5,1] = 6
 Point is 6. Roll again
 Roll is: [3,3] = 6 You win!
 ```
