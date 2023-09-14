## Binary Search Algorithm
This program demonstrates the binary search algorithm, a highly efficient searching technique commonly used in computer science. The algorithm is used to find a target number within a specified range.

# Usage
Compile the program using a C compiler.
Run the compiled executable.
The program will generate a random target number within a range and then use the binary search algorithm to find it. It will provide feedback to the user, indicating whether the target number is smaller or larger than each guess, until the correct number is found.

# Code
The code consists of two main functions: main and guess.

The main function initializes a random target number within the range of 1 to 10,000,000 and then calls the guess function with an initial guess range of 1 to 10,000,000.

The guess function implements the binary search algorithm. It calculates the midpoint of the current range and compares it to the target number. If the guess is too low, it adjusts the lower bound of the range. If the guess is too high, it adjusts the upper bound of the range. This process continues until the correct number is found.

# License
This code is licensed under the MIT License.

Feel free to use and modify this code according to the terms of the license.
