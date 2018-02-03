# Exercises for tet 2018
### Deadline 26/02/2018

## Problem 09: Tic-Tac-Toe (part1)
The game of Tic-Tac-Toe (or Naughts and Crosses) is an ancient game in which 2 players alternate turns
placing either X's or O's on a 3x3 square grid. One player places X's on the grid and the opposing player
places O's. The first player to place 3 consecutive X's (or O's) on any row, column or diagonal of the grid
wins the game. If all 9 grid cells are occupied without either player winning, the game is declared a draw.

Write a C++ function that takes a 3x3 array of characters representing a tic-tac-toe game in progress and
determines the current game state: player X has won, player O has won, the game is a draw, or none of those.
Your function should return a single character as follows: 'X' if player X has won the game, 'O' if player O
has won the game, 'D' if the game is a draw (all cells occupied but neither player has won) and '*' if none of
these conditions exist. (Hint: use a for loop that compares each element of the diagonal with the elements
of its intersecting row and column, then check the diagonals)

Write a main() driver to verify that your function is correct. It should (1) declare a 3x3 character array, (2)
use a loop to read in values for each of the 3 rows of the grid (use '-' to indicate a blank cell), (3) print out the
contents of the grid as 3 rows of 3 values, (4) call your function with the array as an argument, and (5) output
an appropriate message declaring the state of the game (as returned by your function).
Test your program using the 4 following cases (at a minimum):
```
X – O
X O –
X – O

O – X
X O –
X – O

- X O
X O –
X – O

O X O
X X O
X O X
```
## Problem 10: Tic-Tac-Toe (part2)
Using the function from part 1, write and integrate several new functions to manage an interactive program
that will play Tic-Tac-Toe against a human opponent.

You need to do the following:

a). Write a function named displayGame that takes the current game state array as input and displays it on
the console as follows:
```
_  X  O
_  _  _
O  _  _ 
```
Make the output more "readable" by inserting a blank line after the last row of the game display.

b). Write a function named opponentPlay that takes the current game state array as input and returns the
row and column of the next move that the opponent wishes to play. Your function should prompt the user to
enter the row and column and verify that it is a legitimate move (1 <= row <= 3, 1 <= column <= 3). In
addition, you should verify that the specified row/column has not already been played. The function should
continue to solicit input until a valid row/column value has been entered.

c). Write a function named nextPlay that takes the current game state array as input and returns the row
and column of the next move that the computer determines is the 'best' play. You may use any strategy you
wish to determine the next move. A few possibilities:

+ Select the first unoccupied grid cell you find
+ Use the pseudoRand function you created in Lab 6 to select a random cell
+ Locate rows and columns that have not been played by the opponent
+ …etc
Note: ensure that you do not select a grid cell that has already been played.

d). Write a main program to play the game using the following algorithm together with the four functions
you've created:
1. Input the opponent's move, update the board state array and display the updated board state.
2. Determine if the result of the opponent's move is 'win', 'draw', or 'continue'.
3. If opponent wins, then announce "Good game, you win", and end the program.
4. If 'draw', then display "The game ends in a draw" and end the program.
5. If 'continue', then determine the next computer move.
6. Display "I will play row x, column y" using the row/column values determined in the previous
step.
7. Update the board state array with the computer's move and display it.
8. Determine the result of the computer's move.
9. If 'win', then announce "I win, nice try" and end the program
10. If 'draw', then announce "The game ends in a draw" and end the program
11. If 'continue', then repeat steps 1-10 until the program ends.

Example 1:
```
Welcome. I'll play X, you will be O
You may play first. Enter row and column (1-3):
4 2
Sorry, that is not allowed. Try again
Enter row and column (1-3):
0 2
Sorry, that is not allowed. Try again
Enter row and column (1-3):
1 1
O - -
- - -
- - -
I'll play row 1, column 2
O X -
- - -
- - -
Enter row and column (1-3):
1 1
That space has been played. Try again
Enter row and column (1-3):
2 1
O X -
O - -
- - -
I'll play row 3, column 1
O X -
O - -
X - -
Enter row and column (1-3):
2 2
O X -
O O -
X - -
I'll play row 2, column 3
O X -
O O X
X - -
Enter row and column (1-3):
1 3
O X O
O O X
X - -
I'll play row 3, column 3
O X O
O O X
X - X
Enter row and column (1-3):
3 2
O X O
O O X
X O X
Game ends in a draw
```
Example 2:
```
Welcome. I'll play X, you will be O
You may play first. Enter row and column (1-3):
1 3
- - O
- - -
- - -
I'll play row 1, column 1
X - O
- - -
- - -
Enter row and column (1-3):
3 1
X - O
- - -
O - -
I'll play row 2, column 2
X - O
- X -
O - -
Enter row and column (1-3):
3 3
X - O
- X -
O - O
I'll play row 2, column 3
X - O
- X X
O - O
Enter row and column (1-3):
3 2
X - O
- X X
O O O
Good game, you win!
```
